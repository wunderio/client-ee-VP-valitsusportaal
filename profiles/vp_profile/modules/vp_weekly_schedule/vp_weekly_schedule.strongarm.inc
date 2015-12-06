<?php
/**
 * @file
 * vp_weekly_schedule.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vp_weekly_schedule_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_weekly_schedule_day';
  $strongarm->value = 0;
  $export['comment_anonymous_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_weekly_schedule_day';
  $strongarm->value = 1;
  $export['comment_default_mode_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_weekly_schedule_day';
  $strongarm->value = '50';
  $export['comment_default_per_page_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_weekly_schedule_day';
  $strongarm->value = 1;
  $export['comment_form_location_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_weekly_schedule_day';
  $strongarm->value = '0';
  $export['comment_preview_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_weekly_schedule_day';
  $strongarm->value = 1;
  $export['comment_subject_field_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_weekly_schedule_day';
  $strongarm->value = '2';
  $export['comment_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__weekly_schedule_day';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'language' => array(
          'teaser' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_weekly_schedule_day';
  $strongarm->value = '1';
  $export['i18n_node_extended_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_weekly_schedule_day';
  $strongarm->value = array(
    0 => 'current',
    1 => 'required',
  );
  $export['i18n_node_options_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_weekly_schedule_day';
  $strongarm->value = array();
  $export['i18n_sync_node_type_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_weekly_schedule_day';
  $strongarm->value = '2';
  $export['language_content_type_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_weekly_schedule_day';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_weekly_schedule_day';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_weekly_schedule_day';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_weekly_schedule_day';
  $strongarm->value = '1';
  $export['node_preview_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_weekly_schedule_day';
  $strongarm->value = 1;
  $export['node_submitted_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_weekly_schedule_day_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_weekly_schedule_day_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_weekly_schedule_day_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_weekly_schedule_day_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_weekly_schedule_day_pattern';
  $strongarm->value = '';
  $export['pathauto_node_weekly_schedule_day_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_weekly_schedule_day_ru_pattern';
  $strongarm->value = '';
  $export['pathauto_node_weekly_schedule_day_ru_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_weekly_schedule_day_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_weekly_schedule_day_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_rdftype_weekly_schedule_day';
  $strongarm->value = 'sioc:Item, foaf:Document';
  $export['rdf_rdftype_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_datatype_weekly_schedule_day';
  $strongarm->value = '';
  $export['rdf_title_datatype_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_predicates_weekly_schedule_day';
  $strongarm->value = 'dc:title';
  $export['rdf_title_predicates_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rdf_title_type_weekly_schedule_day';
  $strongarm->value = 'property';
  $export['rdf_title_type_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redirect_setting_name_weekly_schedule_day';
  $strongarm->value = 'rh_node_redirect';
  $export['redirect_setting_name_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_module_weekly_schedule_day';
  $strongarm->value = 'rh_node';
  $export['rh_module_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_action_weekly_schedule_day';
  $strongarm->value = '2';
  $export['rh_node_action_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_override_weekly_schedule_day';
  $strongarm->value = 0;
  $export['rh_node_override_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_response_weekly_schedule_day';
  $strongarm->value = '301';
  $export['rh_node_redirect_response_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rh_node_redirect_weekly_schedule_day';
  $strongarm->value = '';
  $export['rh_node_redirect_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_weekly_schedule_day';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_weekly_schedule_day';
  $strongarm->value = 0;
  $export['scheduler_publish_required_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_weekly_schedule_day';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_weekly_schedule_day';
  $strongarm->value = 1;
  $export['scheduler_publish_touch_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_weekly_schedule_day';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_weekly_schedule_day';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_weekly_schedule_day';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simplenews_content_type_weekly_schedule_day';
  $strongarm->value = 0;
  $export['simplenews_content_type_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_weekly_schedule_day';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_weekly_schedule_day'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_eelinfo';
  $strongarm->value = 'l, d. F Y';
  $export['date_format_eelinfo'] = $strongarm;

  return $export;
}
