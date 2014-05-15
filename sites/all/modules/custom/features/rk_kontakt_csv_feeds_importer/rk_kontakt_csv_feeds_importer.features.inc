<?php
/**
 * @file
 * rk_kontakt_csv_feeds_importer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rk_kontakt_csv_feeds_importer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
