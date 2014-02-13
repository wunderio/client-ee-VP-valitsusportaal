<?php
/**
 * @file
 * vp_particularly_important.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_particularly_important_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
