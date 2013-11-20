<?php

/**
 * @file
 * Migrate classes.
 */

/**
 * Import RK News nodes.
 */
class RKNewsNodeMigration extends Migration {
  public $forte_db = 'vp_old';
  public $forte_user = 'vp-migrate';
  public $forte_pass = '9AJAAur2nj56xZ9j';

  public function __construct() {
    parent::__construct();

    $this->softDependencies = array('GalleryNode');

    // Set up other database.
    Database::addConnectionInfo('forte', 'default', array(
      'driver' => 'mysql',
      'database' => $this->forte_db,
      'username' => $this->forte_user,
      'password' => $this->forte_pass,
      'host' => 'localhost',
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
    $query->join('rk_news_categories_rel', 'c_rel', 'n.id = c_rel.news_id');
    $query->join('rk_news_categories', 'c', 'c.id = c_rel.category_id');

    $query->condition('c.id', array(
      3, // Riigikantselei pressiteated
    ), 'IN');

    $query->fields('n', array('id', 'title', 'created', 'updated', 'lang', 'gallery_id'));
    $query->fields('c', array('name'));
    $query->addExpression("CONCAT(n.descr, n.cont)", 'body');
    $query->addExpression("CONCAT('http://valitsus.ee/', n.photo)", 'cover');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Set up our destination
    $this->destination = new MigrateDestinationNode('news', array('text_format' => 'full_html'));

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('changed', 'updated');
    $this->addFieldMapping('field_simplenews_term')->defaultValue('Imported');
    $this->addFieldMapping('field_simplenews_term:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('language', 'lang');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')->defaultValue('full_html');
    $this->addFieldMapping('field_news_type', 'name');
    $this->addFieldMapping('field_news_type:create_term')->defaultValue(TRUE);
    $this->addFieldMapping('field_source')->defaultValue('Valitsus');
    $this->addFieldMapping('field_source:create_term')->defaultValue(TRUE);
  }

  // Change news types.
  public function prepareRow($current_row) {

    $news_types = array(
      'Riigikantselei pressiteated' => 'Riigikantselei',
    );

    if (isset($news_types[$current_row->name])) {
      $current_row->name = $news_types[$current_row->name];
    }

    return TRUE;
  }

  public function complete(stdClass $entity, stdClass $row) {
    // Add photo to news.
    if (!empty($row->photo)) {

      $news = node_load($entity->nid);

      $field_instance = field_info_instance('node', 'field_cover_image', 'news');

      $encoded_url = preg_replace_callback('#://([^/]+)/([^?]+)#', function ($match) {
          return '://' . $match[1] . '/' . join('/', array_map('rawurlencode', explode('/', $match[2])));
      }, $row->cover);

      $file = system_retrieve_file($encoded_url, file_default_scheme().'://'.$field_instance['settings']['filefield_paths']['file_path']['value'].'/'.basename($row->cover), TRUE);

      $news->field_cover_image[LANGUAGE_NONE][0] = (array)$file;

      node_save($news);
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

        $gallery = node_load($gallery_id);
        $field_collection = field_collection_item_load($gallery->field_pictures[LANGUAGE_NONE][0]['value']);

        $news->field_cover_image[LANGUAGE_NONE][0] = $field_collection->field_picture[LANGUAGE_NONE][0];

        node_save($news);
      }
    }
  }

}
