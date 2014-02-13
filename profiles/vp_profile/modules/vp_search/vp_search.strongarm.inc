<?php
/**
 * @file
 * vp_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_default_language';
  $strongarm->value = 1;
  $export['gss_default_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_global';
  $strongarm->value = 1;
  $export['gss_global'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_info';
  $strongarm->value = 1;
  $export['gss_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_labels';
  $strongarm->value = 1;
  $export['gss_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_language';
  $strongarm->value = 'et';
  $export['gss_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_number_of_results';
  $strongarm->value = 1;
  $export['gss_number_of_results'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_pager_size';
  $strongarm->value = '5';
  $export['gss_pager_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_page_size';
  $strongarm->value = '10';
  $export['gss_page_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gss_results_tab';
  $strongarm->value = 'Search';
  $export['gss_results_tab'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_rdftype_news';
  $strongarm->value = 'sioc:Item, foaf:Document';
  $export['rdf_rdftype_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_datatype_news';
  $strongarm->value = '';
  $export['rdf_title_datatype_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_predicates_news';
  $strongarm->value = 'dc:title';
  $export['rdf_title_predicates_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_type_news';
  $strongarm->value = 'property';
  $export['rdf_title_type_news'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'gss' => 'gss',
    'node' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_autocomplete_forms';
  $strongarm->value = array(
    'search_form' => 'search_form',
    'search_block_form' => 'search_block_form',
  );
  $export['search_autocomplete_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_autocomplete_limit';
  $strongarm->value = '15';
  $export['search_autocomplete_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_autocomplete_method';
  $strongarm->value = '1';
  $export['search_autocomplete_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_autocomplete_test';
  $strongarm->value = '';
  $export['search_autocomplete_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_autocomplete_trigger';
  $strongarm->value = '2';
  $export['search_autocomplete_trigger'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_string_overrides';
  $strongarm->value = array(
    'labels' => array(
      'basic' => '',
      'basic_with_keys' => '',
      'basic_submit' => '',
      'advanced_fieldset' => '',
      'advanced_fieldset_with_keys' => '',
      'advanced_any' => '',
      'advanced_phrase' => '',
      'advanced_none' => '',
      'advanced_type' => '',
      'advanced_language' => '',
      'advanced_submit' => '',
    ),
    'title_display' => array(
      'basic' => 'default',
      'advanced_any' => 'default',
      'advanced_phrase' => 'default',
      'advanced_none' => 'default',
      'advanced_type' => 'default',
      'advanced_language' => 'default',
    ),
  );
  $export['search_config_string_overrides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '100';
  $export['search_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'gss';
  $export['search_default_module'] = $strongarm;

  return $export;
}
