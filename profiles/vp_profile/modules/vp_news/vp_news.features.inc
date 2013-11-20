<?php
/**
 * @file
 * vp_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function vp_news_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_first_news_thumbnail.
  $styles['frontpage_first_news_thumbnail'] = array(
    'name' => 'frontpage_first_news_thumbnail',
    'label' => 'frontpage_first_news_thumbnail',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 308,
          'height' => 212,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_detail_cover_image.
  $styles['news_detail_cover_image'] = array(
    'name' => 'news_detail_cover_image',
    'label' => 'news_detail_cover_image',
    'effects' => array(
      22 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news_list_thumbnail.
  $styles['news_list_thumbnail'] = array(
    'name' => 'news_list_thumbnail',
    'label' => 'news_list_thumbnail',
    'effects' => array(
      17 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: subject_related_news_thumbnail.
  $styles['subject_related_news_thumbnail'] = array(
    'name' => 'subject_related_news_thumbnail',
    'label' => 'subject_related_news_thumbnail',
    'effects' => array(
      18 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 235,
          'height' => '',
          'upscale' => 1,
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
function vp_news_node_info() {
  $items = array(
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
