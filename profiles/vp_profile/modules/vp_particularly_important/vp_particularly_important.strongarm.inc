<?php
/**
 * @file
 * vp_particularly_important.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_particularly_important_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vp_particularly_important_enabled';
  $strongarm->value = 0;
  $export['vp_particularly_important_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vp_particularly_important_text';
  $strongarm->value = 'Particularly Important sisu';
  $export['vp_particularly_important_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'vp_particularly_important_title';
  $strongarm->value = 'Tähelepanu!
Oluline teade!
Bla!';
  $export['vp_particularly_important_title'] = $strongarm;

  return $export;
}
