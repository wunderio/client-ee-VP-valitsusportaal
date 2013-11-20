<?php

/**
 * @file
 * ImageField formatter hooks and callbacks.
 */

function theme_imagefield_crop_formatter_image_uncrop_plain($element) {
  if (empty($element['#item']['fid'])) {
    return '';
  }
  $element['#item']['filepath'] = imagefield_crop_file_admin_crop_display_path(
      $element['#item']);
  return theme('imagefield_formatter_image_plain', $element);
}

function theme_imagefield_crop_formatter_image_uncroplink($element) {
  // Inside a view $element may contain null data. In that case, just return.
  if (empty($element['#item']['fid'])) {
    return '';
  }

  $item = $element['#item'];
  $imagetag = theme('imagefield_formatter_image_plain', $element);
  $original_image_url = file_create_url(imagefield_crop_file_admin_crop_display_path($item));
  $class = 'imagefield imagefield-imagelink imagefield-'. $element['#field_name'];
  return l($imagetag, $original_image_url, array('attributes' => array('class' => $class), 'html' => TRUE));
}
