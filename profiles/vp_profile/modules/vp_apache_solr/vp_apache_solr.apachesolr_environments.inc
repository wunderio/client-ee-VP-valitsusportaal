<?php
/**
 * @file
 * vp_apache_solr.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function vp_apache_solr_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:6000/solr/riigikantselei';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'announcements',
      1 => 'article',
      2 => 'gallery',
      3 => 'history',
      4 => 'important_announcements',
      5 => 'news',
      6 => 'seadusloome_karussell',
      7 => 'webform',
      8 => 'weekly_schedule_day',
      9 => 'youtube_video',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
