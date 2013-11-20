<?php
/**
 * @file
 * vp_particularly_important.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_particularly_important_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['vp_particularly_important-particularly_important'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'particularly_important',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'vp_particularly_important',
    'node_types' => array(),
    'pages' => '',
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
        'region' => 'particularly_important',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -24,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
