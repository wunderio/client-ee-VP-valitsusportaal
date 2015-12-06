<?php
/**
 * @file
 * vp_weekly_schedule.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_weekly_schedule_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_eelinfo';
  $strongarm->value = 'l, d. F Y';
  $export['date_format_eelinfo'] = $strongarm;

  return $export;
}
