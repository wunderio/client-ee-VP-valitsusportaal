<?php
/**
 * @file
 * vp_medium.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_medium_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_medium_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vp_medium_node_info() {
  $items = array(
    'medium' => array(
      'name' => t('Medium'),
      'base' => 'node_content',
      'description' => t('The description and associated files for a type of document, communication guidline, print material or similar. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
