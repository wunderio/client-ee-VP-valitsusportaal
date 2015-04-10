<?php
/**
 * @file
 * vm_country_and_representations.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function vm_country_and_representations_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_representations_eh';
  $ds_view_mode->label = 'Country and representations - Eh';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['country_representations_eh'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_representations_er';
  $ds_view_mode->label = 'Country and representations - Er';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['country_representations_er'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_representations_fr';
  $ds_view_mode->label = 'Country and representations - Fr';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['country_representations_fr'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_representations_r';
  $ds_view_mode->label = 'Country and representations - R';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['country_representations_r'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'country_representations_ti';
  $ds_view_mode->label = 'Country and representations - Ti';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['country_representations_ti'] = $ds_view_mode;

  return $export;
}
