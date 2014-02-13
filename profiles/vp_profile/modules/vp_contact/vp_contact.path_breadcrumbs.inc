<?php
/**
 * @file
 * vp_contact.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function vp_contact_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'contact_view';
  $path_breadcrumb->name = 'Contact View';
  $path_breadcrumb->path = 'contact';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Contact',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -99;
  $export['contact_view'] = $path_breadcrumb;

  return $export;
}
