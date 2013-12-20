<?php

/**
 * @file
 * Migrate classes.
 */

/**
 * Import RK News nodes.
 */
class RKNewsNodeMigration extends Migration {
  public $forte_db = '';
  public $forte_user = '';
  public $forte_pass = '';
  public $forte_host = '';

  public function __construct() {
    parent::__construct();

    $this->softDependencies = array('GalleryNode');

    // Set up other database.
    Database::addConnectionInfo('forte', 'default', array(
      'driver' => 'mysql',
      'database' => $this->forte_db,
      'username' => $this->forte_user,
      'password' => $this->forte_pass,
      'host' => $this->forte_host,
    ));

    $this->description = t('Migrate news nodes!');

    // Unikaalne id forte baasist.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'length' => 11,
          'not null' => TRUE,
          'alias' => 'n',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Query.
    $query = Database::getConnection('default', 'forte')
      ->select('rk_news', 'n');
    $query->leftJoin('rk_news_categories_rel', 'c_rel', 'n.id = c_rel.news_id');
    $query->leftJoin('rk_news_categories', 'c', 'c_rel.category_id = c.id');
    $query->leftJoin('userfiles', 'uf', "SUBSTRING_INDEX(n.photo, '/', -1) = uf.filename AND uf.path LIKE SUBSTRING(n.photo, 1, (CHAR_LENGTH(n.photo) - LOCATE('/', REVERSE(n.photo))))");
    $query->leftJoin('userfiles_translation', 'uft', "uf.id = uft.file_id AND uft.language = n.lang");

    $query->condition('c.id', array(
      3, // Riigikantselei pressiteated
    ), 'IN');

    $query->fields('n', array('id', 'title', 'date_added', 'updated', 'lang', 'gallery_id', 'photo'));
    $query->fields('c', array('name'));
    $query->fields('uft', array('description'));
    $query->addExpression("CONCAT(n.descr, n.cont)", 'body');
    $query->addExpression("CASE WHEN n.status = 'active' THEN 1 ELSE 0 END", 'status');
    
    $query->orderBy('n.date_added', 'DESC');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Set up our destination
    $this->destination = new MigrateDestinationNode('news', array('text_format' => 'full_html'));

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('created', 'date_added');
    $this->addFieldMapping('changed', 'updated');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('field_simplenews_term')->defaultValue('Imported');
    $this->addFieldMapping('field_simplenews_term:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('language', 'lang');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('full_html');
    $this->addFieldMapping('field_news_type', 'name');
    $this->addFieldMapping('field_news_type:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_source')->defaultValue('Government Office');
    $this->addFieldMapping('field_source:create_term')->defaultValue(TRUE);
  }

  // Change news types.
  public function prepareRow($current_row) {

    $news_types = array(
      'Riigikantselei pressiteated' => 'Press release',
    );

    if (isset($news_types[$current_row->name])) {
      $current_row->name = $news_types[$current_row->name];
    }

    return TRUE;
  }

  public function complete(stdClass $entity, stdClass $row) {
    global $user;
  
    // Add photo to news.
    if (!empty($row->photo)) {
    
      $news = node_load($entity->nid);

      $field_instance = field_info_instance('node', 'field_cover_image', 'news');
      $path = file_default_scheme().'://'.$field_instance['settings']['filefield_paths']['file_path']['value'];
      file_prepare_directory($path, FILE_CREATE_DIRECTORY);

      $file_uri = file_unmanaged_copy(drupal_realpath($row->photo), $path, FILE_EXISTS_RENAME);
      $file_uri = file_unmanaged_move($file_uri, $path.'/'.transliteration_clean_filename(drupal_basename($file_uri)), FILE_EXISTS_RENAME);
      
      // Optimize image size.
      $image = image_load($file_uri);
      if ($image->info['width'] > $image->info['height'] && (int) $image->info['width'] > 1600) {
        if (image_scale($image, 1600, NULL)) {
          image_save($image);
        }
      }
      elseif ($image->info['width'] < $image->info['height'] && (int) $image->info['height'] > 1200) {
        if (image_scale($image, NULL, 1200)) {
          image_save($image);
        }
      }
      
      if ($file_uri !== FALSE) {
        $file = new stdClass();
        $file->fid = NULL;
        $file->uri = $file_uri;
        $file->filename = drupal_basename($file->uri);
        $file->filemime = file_get_mimetype($file->uri);
        $file->uid = $user->uid;
        $file->status = FILE_STATUS_PERMANENT;
        $file = file_save($file);

        $news->field_cover_image[LANGUAGE_NONE][0] = (array)$file;
        
        node_save($news);
        // Image title. (For some reason works only like this, not with node save or abstraction layer)
        try {
          db_query('UPDATE field_data_field_cover_image SET field_cover_image_title = :title WHERE field_cover_image_fid = :fid', array(':fid' => $file->fid, ':title' => preg_replace('@[\s]{2,}@', ' ', strip_tags($row->description))))->execute();
        } catch (Exception $e) {
    
        }

      }
    }
    
    // Add gallery to news.
    if ((int) $row->gallery_id > 0) {
      $gallery_id = db_select('migrate_map_gallerynode', 'm')
        ->condition('m.sourceid1', $row->gallery_id)
        ->fields('m', array('destid1'))
        ->range(0,1)
        ->execute()
        ->fetchCol();
      $gallery_id = $gallery_id[0];

      if (!empty($gallery_id)) {

        $news = node_load($entity->nid);

        $news->field_gallery[LANGUAGE_NONE][0]['target_id'] = $gallery_id;

        node_save($news);
      }
    }
  }

}
