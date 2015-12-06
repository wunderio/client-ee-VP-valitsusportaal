<?php
/**
 * @file
 * vp_weekly_schedule.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vp_weekly_schedule_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vp_weekly_schedule_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function vp_weekly_schedule_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['l, d. F Y'] = 'l, d. F Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function vp_weekly_schedule_date_format_types() {
  $format_types = array();
  // Exported date format type: eelinfo
  $format_types['eelinfo'] = 'eelinfo';
  return $format_types;
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function vp_weekly_schedule_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: eelinfo::en
  $locale_date_formats['eelinfo::en'] = array(
    'type' => 'eelinfo',
    'format' => 'l, d. F Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: eelinfo::et
  $locale_date_formats['eelinfo::et'] = array(
    'type' => 'eelinfo',
    'format' => 'l, d. F Y',
    'locales' => array(
      0 => 'et',
    ),
  );
  return $locale_date_formats;
}
