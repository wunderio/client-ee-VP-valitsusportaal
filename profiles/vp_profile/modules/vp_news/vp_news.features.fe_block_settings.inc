<?php
/**
 * @file
 * vp_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function vp_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-news-news_page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-news-news_page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
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
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-19eef6f0bee85264121542d861111bec'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '19eef6f0bee85264121542d861111bec',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'article',
    ),
    'pages' => 'test-content',
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
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-28b60dac48d416a8e6750a35cdd59247'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '28b60dac48d416a8e6750a35cdd59247',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(
      0 => 'news',
    ),
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-5d0ca2e5fecdc7db5a2a1a917dab2bb0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '5d0ca2e5fecdc7db5a2a1a917dab2bb0',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-8af4e23b469f7a9f88bcf3ed1244c2f2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '8af4e23b469f7a9f88bcf3ed1244c2f2',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => 'Top',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-bc6d8958456b947f14512c619e16d741'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'bc6d8958456b947f14512c619e16d741',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
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
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'vp_theme',
        'weight' => -31,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
