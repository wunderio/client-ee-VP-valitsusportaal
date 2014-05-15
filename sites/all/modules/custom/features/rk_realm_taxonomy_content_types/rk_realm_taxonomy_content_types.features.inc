<?php
/**
 * @file
 * rk_realm_taxonomy_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rk_realm_taxonomy_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rk_realm_taxonomy_content_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Standard content type, for creating simple content pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A single newsitem. Can appear at the frontpage news section, as a related newsitem with another News node or with an Article node, in the general news list at /news, or as an independent node page. Can be used as a newsletter.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
