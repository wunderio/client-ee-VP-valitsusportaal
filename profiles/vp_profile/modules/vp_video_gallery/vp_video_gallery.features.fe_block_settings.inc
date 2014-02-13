<?php
/**
 * @file
 * vp_video_gallery.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_video_gallery_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-youtube_videos-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-youtube_videos-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'videos',
    'roles' => array(),
    'themes' => array(
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vp_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
