<?php

/**
 * @file
 * Migrate classes.
 */

/**
 * Import Gallery nodes.
 */
class GalleryNodeMigration extends Migration {
  public $forte_db = 'vp_old';
  public $forte_user = 'vp-migrate';
  public $forte_pass = '9AJAAur2nj56xZ9j';

  // Create gallery nodes.
  public function __construct() {
    parent::__construct();

    // Set up other database.
    Database::addConnectionInfo('forte', 'default', array(
      'driver' => 'mysql',
      'database' => $this->forte_db,
      'username' => $this->forte_user,
      'password' => $this->forte_pass,
      'host' => 'localhost',
    ));

    $this->description = t('Migrate gallery nodes!');

    // Unikaalne id forte baasist.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'length' => 11,
          'not null' => TRUE,
          'alias' => 'g',
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Query.
    $query = Database::getConnection('default', 'forte')
      ->select('rk_gallery', 'g');

    $query->fields('g', array('id', 'name'));

    $query->addExpression('UNIX_TIMESTAMP(g.created)', 'created');
    $query->addExpression('UNIX_TIMESTAMP(g.updated)', 'updated');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Set up our destination
    $this->destination = new MigrateDestinationNode('gallery', array('text_format' => 'full_html'));

    // Assign mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'name');
    $this->addFieldMapping('uid')->defaultValue(0);
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('field_date', 'created');
    $this->addFieldMapping('changed', 'updated');
    $this->addFieldMapping('language')->defaultValue('et');
  }

  // Create image field collections.
  public function complete($entity, stdClass $row) {
    module_load_include('module', 'field_collection');

    // Load images from old database.
    $query = Database::getConnection('default', 'forte')
      ->select('rk_gallery_images', 'i');

    $query->condition('i.gallery_id', $row->id);

    //$query->fields('i', array('path'));
    $query->addExpression("CONCAT('http://valitsus.ee/UserFiles/valitsus', i.path)", 'url');

    $query = $query->execute();
    if ($query->rowCount() > 0) {

      $field_instance = field_info_instance('field_collection_item', 'field_picture', 'field_pictures');
      $path = file_default_scheme().'://'.$field_instance['settings']['filefield_paths']['file_path']['value'];
      $orig_path = $path.'/orig';
      file_prepare_directory($orig_path, FILE_CREATE_DIRECTORY);
      $retina_path = $path.'/retina';
      file_prepare_directory($retina_path, FILE_CREATE_DIRECTORY);

      while ($row = $query->fetchAssoc()) {
        $encoded_url = preg_replace_callback('#://([^/]+)/([^?]+)#', function ($match) {
          return '://' . $match[1] . '/' . join('/', array_map('rawurlencode', explode('/', $match[2])));
        }, $row['url']);

        // Create file.
        $file = system_retrieve_file($encoded_url, $path.'/'.basename($row['url']), TRUE);
        //file_usage_add($file, 'imagefield_crop', 'file', $file->fid);
        $image = image_load($file->uri);
        if ($image->info['width'] > $image->info['height'] && (int) $image->info['width'] > 1600) {
          image_scale($image, 1600, NULL);
        }
        elseif ($image->info['width'] < $image->info['height'] && (int) $image->info['height'] > 1200) {
          image_scale($image, NULL, 1200);
        }
        image_save($image);

        // Create field collection item for image.
        $field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_pictures'));
        $field_collection_item->setHostEntity('node', $entity);
        $field_collection_item->field_picture[LANGUAGE_NONE][0] = (array) $file;
        $field_collection_item->save();

        // Create mobile thumbnails.
        if ($mob = file_copy($file, $retina_path.'/'.$file->filename)) {
          $mob_image = image_load($mob->uri);
          image_scale($mob_image, 720);
          image_save($mob_image);
          file_usage_add($mob, 'imagefield_crop', 'retina', $file->fid);
        }

        // Copy file to keep original.
        if ($orig = file_copy($file, $orig_path.'/'.$file->filename)) {
          file_usage_add($orig, 'imagefield_crop', 'file', $file->fid);
        }

        // Create thumbnails and move original image.
        list($scale['width'], $scale['height']) = explode('x', $field_instance['widget']['settings']['resolution']);
        $image = image_load($file->uri);
        image_scale_and_crop($image, $scale['width'], $scale['height']);
        image_save($image);
      }
    }
  }

}
