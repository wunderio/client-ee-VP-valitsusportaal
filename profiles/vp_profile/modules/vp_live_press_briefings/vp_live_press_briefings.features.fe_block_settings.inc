<?php
/**
 * @file
 * vp_live_press_briefings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_live_press_briefings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['vp_live_press_briefings-live_press_briefings'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'live_press_briefings',
    'i18n_block_language' => array(
      0 => 'et',
    ),
    'i18n_mode' => 0,
    'module' => 'vp_live_press_briefings',
    'node_types' => array(),
    'pages' => '<front>',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -26,
      ),
    ),
    'title' => 'Valitsuse istungid ja pressikonverentsid',
    'visibility' => 1,
  );

  return $export;
}
