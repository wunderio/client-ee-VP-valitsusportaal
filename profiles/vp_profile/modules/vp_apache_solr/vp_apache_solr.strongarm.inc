<?php
/**
 * @file
 * vp_apache_solr.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_apache_solr_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_nan_nan_env';
  $strongarm->value = 'solr';
  $export['apachesolr_nan_nan_env'] = $strongarm;

  return $export;
}
