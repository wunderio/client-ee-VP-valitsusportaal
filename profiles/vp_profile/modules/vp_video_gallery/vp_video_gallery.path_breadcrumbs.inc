<?php
/**
 * @file
 * vp_video_gallery.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function vp_video_gallery_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'videos_view';
  $path_breadcrumb->name = 'Videos View';
  $path_breadcrumb->path = 'videos';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Videos',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -98;
  $export['videos_view'] = $path_breadcrumb;

  return $export;
}
