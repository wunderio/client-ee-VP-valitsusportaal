<?php
/**
 * @file
 * vp_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
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
        'region' => 'portal_navigation_second',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -27,
      ),
    ),
    'title' => 'Search',
    'visibility' => 0,
  );

  $export['views--exp-contact_search-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-contact_search-page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'contact-search',
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
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['vp_search-vp_search_tabs'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vp_search_tabs',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'vp_search',
    'node_types' => array(),
    'pages' => 'contact-search
search/gss
search/gss/*',
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
        'weight' => -30,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
