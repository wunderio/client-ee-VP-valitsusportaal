<?php
/**
 * @file
 * vp_contact.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function vp_contact_image_default_styles() {
  $styles = array();

  // Exported image style: search_contact_thumbnail.
  $styles['search_contact_thumbnail'] = array(
    'name' => 'search_contact_thumbnail',
    'label' => 'search_contact_thumbnail',
    'effects' => array(
      26 => array(
        'label' => 'Skaleeri ja lõika',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 104,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
