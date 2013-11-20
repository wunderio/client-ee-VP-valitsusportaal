<?php

/**
 * @file
 * Function for icons css generation.
 */

/**
 * Generate css for link icons.
 */
function mekaia_link_icons_generate_css($reset = FALSE) {
  static $css;

  if (!isset($css) || $reset) {
    // Load css from cache.
    if (!$reset && ($cache = cache_get('mekaia_link_icons_css')) && !empty($cache->data)) {
      $css = $cache->data;
    }
    // Generate css and write it to cache.
    else {
      $css = '';

      // Add internal image css, if uri is set.
      if ($file = file_load(variable_get('mekaia_link_icon_internal_img'))) {
        $css .= '.icon-internal{background:transparent url(' . file_create_url($file->uri) . ') no-repeat right center;padding-right:18px}';
      }

      // Add external image css, if uri is set.
      if ($file = file_load(variable_get('mekaia_link_icon_external_img'))) {
        $css .= '.icon-external{background:transparent url(' . file_create_url($file->uri) . ') no-repeat right center;padding-right:18px}';
      }

      // Add extensions images css, if uris are set.
      $types = variable_get('mekaia_link_icon_types', '');
      if (is_array($types)) {
        foreach ($types as $extension) {
          $file = file_load(variable_get('mekaia_link_icon_' . $extension, ''));
          if (isset($file->uri)) {
            $css .= '.icon-' . $extension . '{background:transparent url(' . file_create_url($file->uri) . ') no-repeat right center;padding-right:18px}';
          }
        }
      }

      cache_set('mekaia_link_icons_css', 'cache', $css);
    }
  }

  return $css;
}
