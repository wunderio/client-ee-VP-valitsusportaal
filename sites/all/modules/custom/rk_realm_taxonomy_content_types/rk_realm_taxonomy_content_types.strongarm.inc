<?php
/**
 * @file
 * rk_realm_taxonomy_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rk_realm_taxonomy_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_article';
  $strongarm->value = 0;
  $export['comment_anonymous_article'] = $strongarm;

  return $export;
}
