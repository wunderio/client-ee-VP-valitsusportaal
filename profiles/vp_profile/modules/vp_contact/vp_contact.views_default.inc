<?php
/**
 * @file
 * vp_contact.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_contact_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contacts';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Täpsemad valikud',
    ),
    'field_department_tid_i18n' => array(
      'bef_format' => 'bef_links',
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_department' => 'field_department',
    'title' => 'title',
    'field_position' => 'field_position',
    'field_contact_phone_nr' => 'field_contact_phone_nr',
    'field_contact_e_mail' => 'field_contact_e_mail',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_department' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone_nr' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_e_mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Department (field_department) */
  $handler->display->display_options['relationships']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['relationships']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_tid']['field'] = 'field_department_tid';
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['relationship'] = 'field_department_tid';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['text'] = '<h2>[field_department]</h2>
[description_i18n]';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_department']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_department']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'no-word-break';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_contact_phone_nr']['id'] = 'field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['table'] = 'field_data_field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['field'] = 'field_contact_phone_nr';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_contact_e_mail']['id'] = 'field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['table'] = 'field_data_field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['field'] = 'field_contact_e_mail';
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
  /* Filter criterion: Content: Department (field_department) (translated) */
  $handler->display->display_options['filters']['field_department_tid_i18n']['id'] = 'field_department_tid_i18n';
  $handler->display->display_options['filters']['field_department_tid_i18n']['table'] = 'field_data_field_department';
  $handler->display->display_options['filters']['field_department_tid_i18n']['field'] = 'field_department_tid_i18n';
  $handler->display->display_options['filters']['field_department_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid_i18n']['expose']['operator_id'] = 'field_department_tid_i18n_op';
  $handler->display->display_options['filters']['field_department_tid_i18n']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['field_department_tid_i18n']['expose']['operator'] = 'field_department_tid_i18n_op';
  $handler->display->display_options['filters']['field_department_tid_i18n']['expose']['identifier'] = 'department';
  $handler->display->display_options['filters']['field_department_tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_department_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_department_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_department_tid_i18n']['vocabulary'] = 'department';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'contact_page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'contact';
  $export['contact'] = $view;

  $view = new view();
  $view->name = 'contact_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contact Feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['label'] = 'guid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Degree */
  $handler->display->display_options['fields']['field_degree']['id'] = 'field_degree';
  $handler->display->display_options['fields']['field_degree']['table'] = 'field_data_field_degree';
  $handler->display->display_options['fields']['field_degree']['field'] = 'field_degree';
  $handler->display->display_options['fields']['field_degree']['label'] = 'degree';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = 'department';
  $handler->display->display_options['fields']['field_department']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_contact_e_mail']['id'] = 'field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['table'] = 'field_data_field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['field'] = 'field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['label'] = 'email';
  $handler->display->display_options['fields']['field_contact_e_mail']['type'] = 'email_plain';
  /* Field: Content: Educational institution */
  $handler->display->display_options['fields']['field_educational_institution']['id'] = 'field_educational_institution';
  $handler->display->display_options['fields']['field_educational_institution']['table'] = 'field_data_field_educational_institution';
  $handler->display->display_options['fields']['field_educational_institution']['field'] = 'field_educational_institution';
  $handler->display->display_options['fields']['field_educational_institution']['label'] = 'educational institution';
  /* Field: Content: Files */
  $handler->display->display_options['fields']['field_other']['id'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['table'] = 'field_data_field_other';
  $handler->display->display_options['fields']['field_other']['field'] = 'field_other';
  $handler->display->display_options['fields']['field_other']['label'] = 'other';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_contact_phone_nr']['id'] = 'field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['table'] = 'field_data_field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['field'] = 'field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['label'] = 'phone nr';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = 'position';
  /* Field: Content: Profile photo */
  $handler->display->display_options['fields']['field_profile_photo']['id'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['table'] = 'field_data_field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['field'] = 'field_profile_photo';
  $handler->display->display_options['fields']['field_profile_photo']['label'] = 'profile photo';
  $handler->display->display_options['fields']['field_profile_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Skype */
  $handler->display->display_options['fields']['field_skype']['id'] = 'field_skype';
  $handler->display->display_options['fields']['field_skype']['table'] = 'field_data_field_skype';
  $handler->display->display_options['fields']['field_skype']['field'] = 'field_skype';
  $handler->display->display_options['fields']['field_skype']['label'] = 'skype';
  /* Field: Content: Specialty */
  $handler->display->display_options['fields']['field_specialty']['id'] = 'field_specialty';
  $handler->display->display_options['fields']['field_specialty']['table'] = 'field_data_field_specialty';
  $handler->display->display_options['fields']['field_specialty']['field'] = 'field_specialty';
  $handler->display->display_options['fields']['field_specialty']['label'] = 'specialty';
  /* Field: Content: Task description */
  $handler->display->display_options['fields']['field_the_functions']['id'] = 'field_the_functions';
  $handler->display->display_options['fields']['field_the_functions']['table'] = 'field_data_field_the_functions';
  $handler->display->display_options['fields']['field_the_functions']['field'] = 'field_the_functions';
  $handler->display->display_options['fields']['field_the_functions']['label'] = 'the functions';
  /* Contextual filter: Content: Source (field_source) */
  $handler->display->display_options['arguments']['field_source_tid']['id'] = 'field_source_tid';
  $handler->display->display_options['arguments']['field_source_tid']['table'] = 'field_data_field_source';
  $handler->display->display_options['arguments']['field_source_tid']['field'] = 'field_source_tid';
  $handler->display->display_options['arguments']['field_source_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_source_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_source_tid']['default_argument_options']['code'] = '$field_info = field_info_instance(\'node\', \'field_source\', \'contact\');
return $field_info[\'default_value\'][0][\'tid\'];';
  $handler->display->display_options['arguments']['field_source_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_source_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_source_tid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'contact_feed');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'underline';
  $handler->display->display_options['path'] = 'contact/feed';
  $export['contact_feed'] = $view;

  return $export;
}
