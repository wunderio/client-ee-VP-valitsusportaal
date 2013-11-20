<?php

/**
 * @file
 * Builds placeholder replacement tokens for field-collection-related data.
 */

/**
 * Implements hook_token_info().
 */
function field_collection_token_info() {
  $info = array();

  $info['tokens']['field_collection_item']['host'] = array(
    'name' => t('Field Collection host entity'),
    'description' => t('Host entity.'),
    'type' => 'node',
  );

  return $info;
}

/**
 * Implements hook_tokens().
 */
function field_collection_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  $sanitize = !empty($options['sanitize']);
  if ($type == 'field_collection_item' && !empty($data[$type])) {
    $item = $data[$type];

    // Load field collection item and getting host entity and host entity type.
    $field_collection_item = entity_load('field_collection_item', array($item->item_id));
    $host_entity_type = $field_collection_item[$item->item_id]->hostEntityType();
    $host_entity = $field_collection_item[$item->item_id]->hostEntity();

    if ($host_entity_tokens = token_find_with_prefix($tokens, 'host')) {
      $replacements += token_generate($host_entity_type, $host_entity_tokens, array($host_entity_type => $host_entity));
    }

  }

  return $replacements;
}
