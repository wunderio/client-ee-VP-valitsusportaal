<?php
/**
 * @file
 * vm_sap_xml.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vm_sap_xml_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
