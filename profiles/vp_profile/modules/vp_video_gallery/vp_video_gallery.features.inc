<?php
/**
 * @file
 * vp_video_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_video_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_video_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vp_video_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: 120x90.
  $styles['120x90'] = array(
    'label' => '120x90',
    'effects' => array(
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 120,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function vp_video_gallery_node_info() {
  $items = array(
    'youtube_video' => array(
      'name' => t('YouTube Video'),
      'base' => 'node_content',
      'description' => t('Videos imported from a designated YouTube channel. Only contains the metainfo, video file itself embedded from youtube.com. Shown at the /videos page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
