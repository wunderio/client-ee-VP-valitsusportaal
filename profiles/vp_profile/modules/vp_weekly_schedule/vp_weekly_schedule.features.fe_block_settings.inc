<?php
/**
 * @file
 * vp_weekly_schedule.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_weekly_schedule_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-d14a0f1aaa8753bc0fafa3efea13f117'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'd14a0f1aaa8753bc0fafa3efea13f117',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'weekly-schedule
weekly-schedule/*',
    'roles' => array(),
    'themes' => array(
      'rubik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rubik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vp_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
