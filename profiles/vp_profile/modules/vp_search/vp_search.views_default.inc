<?php
/**
 * @file
 * vp_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contact_autocomplete';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Autocomplete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 1;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'contact-autocomplete/%';
  $export['contact_autocomplete'] = $view;

  $view = new view();
  $view->name = 'contact_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Täpsemad valikud',
    ),
    'title' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_contact_phone_nr_value' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_position_value' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_source_tid_i18n' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Phone nr */
  $handler->display->display_options['fields']['field_contact_phone_nr']['id'] = 'field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['table'] = 'field_data_field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['field'] = 'field_contact_phone_nr';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_contact_e_mail']['id'] = 'field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['table'] = 'field_data_field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['field'] = 'field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['label'] = 'E-post';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contact' => 'contact',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['group_info']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Phone nr (field_contact_phone_nr) */
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['id'] = 'field_contact_phone_nr_value';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['table'] = 'field_data_field_contact_phone_nr';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['field'] = 'field_contact_phone_nr_value';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['expose']['operator_id'] = 'field_contact_phone_nr_value_op';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['expose']['label'] = 'Phone nr';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['expose']['operator'] = 'field_contact_phone_nr_value_op';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['expose']['identifier'] = 'phone_nr';
  $handler->display->display_options['filters']['field_contact_phone_nr_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Position (field_position) */
  $handler->display->display_options['filters']['field_position_value']['id'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['table'] = 'field_data_field_position';
  $handler->display->display_options['filters']['field_position_value']['field'] = 'field_position_value';
  $handler->display->display_options['filters']['field_position_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_position_value']['group'] = 1;
  $handler->display->display_options['filters']['field_position_value']['expose']['operator_id'] = 'field_position_value_op';
  $handler->display->display_options['filters']['field_position_value']['expose']['label'] = 'Position';
  $handler->display->display_options['filters']['field_position_value']['expose']['operator'] = 'field_position_value_op';
  $handler->display->display_options['filters']['field_position_value']['expose']['identifier'] = 'position';
  $handler->display->display_options['filters']['field_position_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Source (field_source) (translated) */
  $handler->display->display_options['filters']['field_source_tid_i18n']['id'] = 'field_source_tid_i18n';
  $handler->display->display_options['filters']['field_source_tid_i18n']['table'] = 'field_data_field_source';
  $handler->display->display_options['filters']['field_source_tid_i18n']['field'] = 'field_source_tid_i18n';
  $handler->display->display_options['filters']['field_source_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_source_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_source_tid_i18n']['expose']['operator_id'] = 'field_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_source_tid_i18n']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['field_source_tid_i18n']['expose']['operator'] = 'field_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_source_tid_i18n']['expose']['identifier'] = 'source';
  $handler->display->display_options['filters']['field_source_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_source_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_source_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_source_tid_i18n']['vocabulary'] = 'source';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'contact-search';
  $export['contact_search'] = $view;

  return $export;
}
