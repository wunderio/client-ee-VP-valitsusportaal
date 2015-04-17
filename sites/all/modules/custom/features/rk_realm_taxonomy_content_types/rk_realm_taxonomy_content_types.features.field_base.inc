<?php
/**
 * @file
 * rk_realm_taxonomy_content_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rk_realm_taxonomy_content_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_realm'
  $field_bases['field_realm'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_realm',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'realm',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
