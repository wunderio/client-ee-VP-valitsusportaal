<?php
/**
 * @file
 * vp_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => 'block-web-portal-navigation-menu',
    'custom' => 0,
    'delta' => 3,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
        'region' => 'portal_navigation_first',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -33,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'css_class' => 'block-main-menu',
    'custom' => 0,
    'delta' => 4,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
        'region' => 'header',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-5'] = array(
    'cache' => -1,
    'css_class' => 'block-menu-l3',
    'custom' => 0,
    'delta' => 5,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu_block',
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
        'region' => 'Top',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -28,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['vp_menu-second_level_menu_content'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'second_level_menu_content',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'vp_menu',
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
        'region' => 'header',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -27,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
