<?php
/**
 * @file
 * rk_kontakt_csv_feeds_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function rk_kontakt_csv_feeds_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'kontakt_csv_import';
  $feeds_importer->config = array(
    'name' => 'Kontakt CSV import',
    'description' => 'Do not play with SAP, use this csv importer instead!',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'rkvalitsused',
          1 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'degree',
            'target' => 'field_degree',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'department',
            'target' => 'field_department',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'email',
            'target' => 'field_contact_e_mail',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'educational_institution',
            'target' => 'field_educational_institution',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'status',
            'target' => 'field_status',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'phone_nr',
            'target' => 'field_contact_phone_nr',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'position',
            'target' => 'field_position',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'position_en',
            'target' => 'field_position_in_english',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'position_ru',
            'target' => 'field_position_in_russian',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'profile_photo',
            'target' => 'field_profile_photo',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'skype',
            'target' => 'field_skype',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'specialty',
            'target' => 'field_specialty',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'the_functions',
            'target' => 'field_the_functions',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'other',
            'target' => 'field_other',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'source',
            'target' => 'field_source',
            'term_search' => '0',
            'autocreate' => 0,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'contact',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['kontakt_csv_import'] = $feeds_importer;

  return $export;
}
