<?php
/**
 * @file
 * vp_gallery.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_gallery_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-2d653631c9a61c122d3bb069094a54c4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '2d653631c9a61c122d3bb069094a54c4',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
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
        'weight' => -24,
      ),
    ),
    'title' => 'Pictures',
    'visibility' => 1,
  );

  $export['views-vp_galleries-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vp_galleries-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
        'region' => '',
        'status' => 0,
        'theme' => 'vp_theme',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
