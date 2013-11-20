<?php
/**
 * @file
 * vp_search.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function vp_search_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contact_search';
  $path_breadcrumb->name = 'Contact Search';
  $path_breadcrumb->path = 'contact-search';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Search',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -88;
  $export['contact_search'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'search';
  $path_breadcrumb->name = 'Search';
  $path_breadcrumb->path = 'search/gss/%key';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(
      'key' => array(
        'position' => 2,
      ),
    ),
    'access' => array(),
  );
  $path_breadcrumb->weight = -89;
  $export['search'] = $path_breadcrumb;

  return $export;
}
