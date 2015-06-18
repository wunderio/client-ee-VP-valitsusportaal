<?php
/**
 * @file
 * rk_seadusloome_karussell.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rk_seadusloome_karussell_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rk_seadusloome_karussell_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rk_seadusloome_karussell_node_info() {
  $items = array(
    'seadusloome_karussell' => array(
      'name' => t('Seadusloome karussell'),
      'base' => 'node_content',
      'description' => t('Sisutüüp, millega ehitada seadusloome karussellid.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
