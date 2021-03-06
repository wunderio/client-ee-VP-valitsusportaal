<?php
/**
 * @file
 * vp_news.path_breadcrumbs.inc
 */

/**
 * Implements hook_path_breadcrumbs_settings_info().
 */
function vp_news_path_breadcrumbs_settings_info() {
  $export = array();

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news';
  $path_breadcrumb->name = 'News';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'News',
      1 => '%node:title',
    ),
    'paths' => array(
      0 => 'news',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Content: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -89;
  $export['news'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'news_view';
  $path_breadcrumb->name = 'News View';
  $path_breadcrumb->path = 'news';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => '!page_title',
    ),
    'paths' => array(
      0 => 'news',
    ),
    'home' => 1,
    'translatable' => 0,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -96;
  $export['news_view'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'newsletter';
  $path_breadcrumb->name = 'Newsletter';
  $path_breadcrumb->path = 'node/%node';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Newsletters',
      1 => '!page_title',
    ),
    'paths' => array(
      0 => 'newsletters',
      1 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(
      'node' => array(
        'position' => 1,
        'argument' => 'entity_id:node',
        'settings' => array(
          'identifier' => 'Sisu: ID',
        ),
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'newsletter_news' => 'newsletter_news',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $path_breadcrumb->weight = -88;
  $export['newsletter'] = $path_breadcrumb;

  $path_breadcrumb = new stdClass();
  $path_breadcrumb->api_version = 1;
  $path_breadcrumb->machine_name = 'newsletters_view';
  $path_breadcrumb->name = 'Newsletters View';
  $path_breadcrumb->path = 'newsletters';
  $path_breadcrumb->data = array(
    'titles' => array(
      0 => 'Newsletters',
    ),
    'paths' => array(
      0 => '<none>',
    ),
    'home' => 1,
    'translatable' => 1,
    'arguments' => array(),
    'access' => array(),
  );
  $path_breadcrumb->weight = -94;
  $export['newsletters_view'] = $path_breadcrumb;

  return $export;
}
