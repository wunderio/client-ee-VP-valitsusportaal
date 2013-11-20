<?php
/**
 * @file
 * vp_search.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vp_search_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_content_type'
  $field_bases['field_content_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_content_type',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$entity_field[0][\'value\'] = $entity->type;',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'varchar',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  // Exported field_base: 'field_created'
  $field_bases['field_created'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_created',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'computed_field',
    'settings' => array(
      'code' => '$entity_field[0][\'value\'] = gmdate(\'Ymd\', $entity->created);',
      'database' => array(
        'data_default' => '',
        'data_index' => 0,
        'data_length' => 32,
        'data_not_NULL' => 0,
        'data_precision' => 10,
        'data_scale' => 2,
        'data_size' => 'normal',
        'data_type' => 'int',
      ),
      'display_format' => '$display_output = $entity_field_item[\'value\'];',
      'store' => 0,
    ),
    'translatable' => 0,
    'type' => 'computed',
  );

  return $field_bases;
}
