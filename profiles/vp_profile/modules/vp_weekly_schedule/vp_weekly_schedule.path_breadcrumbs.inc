<?php
/**
 * @file
 * vp_weekly_schedule.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function vp_weekly_schedule_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'weekly_schedule_view';
  $path_breadcrumb->name = 'Weekly Schedule View';
  $path_breadcrumb->path = 'weekly-schedule';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Weekly Schedule',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = 0;
  $export['weekly_schedule_view'] = $path_breadcrumb;

  return $export;
}
