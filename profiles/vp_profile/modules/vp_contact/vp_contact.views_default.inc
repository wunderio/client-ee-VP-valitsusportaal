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
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'contacts' => 'contacts',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="#">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'no-word-break';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Position in English */
  $handler->display->display_options['fields']['field_position_in_english']['id'] = 'field_position_in_english';
  $handler->display->display_options['fields']['field_position_in_english']['table'] = 'field_data_field_position_in_english';
  $handler->display->display_options['fields']['field_position_in_english']['field'] = 'field_position_in_english';
  $handler->display->display_options['fields']['field_position_in_english']['label'] = 'Position';
  /* Field: Content: Position in Russian */
  $handler->display->display_options['fields']['field_position_in_russian']['id'] = 'field_position_in_russian';
  $handler->display->display_options['fields']['field_position_in_russian']['table'] = 'field_data_field_position_in_russian';
  $handler->display->display_options['fields']['field_position_in_russian']['field'] = 'field_position_in_russian';
  $handler->display->display_options['fields']['field_position_in_russian']['label'] = 'Position';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_contact_phone_nr']['id'] = 'field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['table'] = 'field_data_field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['field'] = 'field_contact_phone_nr';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_contact_e_mail']['id'] = 'field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['table'] = 'field_data_field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['field'] = 'field_contact_e_mail';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
  $handler->display->display_options['filters']['field_department_tid_i18n']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'contact_page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
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
    'term_node_tid_depth_i18n' => array(
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
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_i18n',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'description_i18n' => 'description_i18n',
    'field_department' => 'field_department',
    'title' => 'title',
    'field_position' => 'field_position',
    'field_position_in_english' => 'field_position_in_english',
    'field_position_in_russian' => 'field_position_in_russian',
    'field_contact_phone_nr' => 'field_contact_phone_nr',
    'field_contact_e_mail' => 'field_contact_e_mail',
    'name_i18n' => 'name_i18n',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'description_i18n' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
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
    'field_position_in_english' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position_in_russian' => array(
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
    'name_i18n' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Department (field_department) */
  $handler->display->display_options['relationships']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['relationships']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['relationships']['field_department_tid']['field'] = 'field_department_tid';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'contacts' => 'contacts',
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_department_tid';
  $handler->display->display_options['relationships']['parent']['label'] = 'Parent term';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description (translated) */
  $handler->display->display_options['fields']['description_i18n']['id'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description_i18n']['field'] = 'description_i18n';
  $handler->display->display_options['fields']['description_i18n']['relationship'] = 'field_department_tid';
  $handler->display->display_options['fields']['description_i18n']['label'] = '';
  $handler->display->display_options['fields']['description_i18n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['description_i18n']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['description_i18n']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['description_i18n']['element_label_colon'] = FALSE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_department']['alter']['text'] = '<h3>[description_i18n]</h3>';
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_department']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_department']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="#">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'no-word-break';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  /* Field: Content: Position in English */
  $handler->display->display_options['fields']['field_position_in_english']['id'] = 'field_position_in_english';
  $handler->display->display_options['fields']['field_position_in_english']['table'] = 'field_data_field_position_in_english';
  $handler->display->display_options['fields']['field_position_in_english']['field'] = 'field_position_in_english';
  $handler->display->display_options['fields']['field_position_in_english']['label'] = 'Position';
  /* Field: Content: Position in Russian */
  $handler->display->display_options['fields']['field_position_in_russian']['id'] = 'field_position_in_russian';
  $handler->display->display_options['fields']['field_position_in_russian']['table'] = 'field_data_field_position_in_russian';
  $handler->display->display_options['fields']['field_position_in_russian']['field'] = 'field_position_in_russian';
  $handler->display->display_options['fields']['field_position_in_russian']['label'] = 'Position';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_contact_phone_nr']['id'] = 'field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['table'] = 'field_data_field_contact_phone_nr';
  $handler->display->display_options['fields']['field_contact_phone_nr']['field'] = 'field_contact_phone_nr';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_contact_e_mail']['id'] = 'field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['table'] = 'field_data_field_contact_e_mail';
  $handler->display->display_options['fields']['field_contact_e_mail']['field'] = 'field_contact_e_mail';
  /* Field: Taxonomy term: Name (translated) */
  $handler->display->display_options['fields']['name_i18n']['id'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_i18n']['field'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_i18n']['label'] = '';
  $handler->display->display_options['fields']['name_i18n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_i18n']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name_i18n']['alter']['text'] = '<h2>[name_i18n]</h2>';
  $handler->display->display_options['fields']['name_i18n']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name_i18n']['empty'] = '<h2>[description_i18n]</h2>';
  $handler->display->display_options['fields']['name_i18n']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['name_i18n']['empty_zero'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'parent';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_department_tid';
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Has taxonomy terms (with depth, translated) */
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['id'] = 'term_node_tid_depth_i18n';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['field'] = 'term_node_tid_depth_i18n';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['expose']['operator_id'] = 'term_node_tid_depth_i18n_op';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['expose']['label'] = 'Department';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['expose']['operator'] = 'term_node_tid_depth_i18n_op';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['expose']['identifier'] = 'tid_with_depth';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['group_info']['label'] = 'Has taxonomy terms (with depth, translated)';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['group_info']['identifier'] = 'term_node_tid_depth_i18n';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['vocabulary'] = 'department';
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_i18n']['depth'] = '10';
  $handler->display->display_options['path'] = 'contact';
  $export['contact'] = $view;

  return $export;
}
