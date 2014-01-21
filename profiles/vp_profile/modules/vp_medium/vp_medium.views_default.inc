<?php
/**
 * @file
 * vp_medium.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_medium_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'medium';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Medium';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Otsi';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_i18n',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Väli: Sisu: Type */
  $handler->display->display_options['fields']['field_medium_type']['id'] = 'field_medium_type';
  $handler->display->display_options['fields']['field_medium_type']['table'] = 'field_data_field_medium_type';
  $handler->display->display_options['fields']['field_medium_type']['field'] = 'field_medium_type';
  $handler->display->display_options['fields']['field_medium_type']['label'] = '';
  $handler->display->display_options['fields']['field_medium_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_medium_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_medium_type']['type'] = 'taxonomy_term_reference_plain';
  /* Väli: Sisu: Pealkiri */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Väli: Sisu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Väli: Title and Body rewrite */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Title and Body rewrite';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="item-trigger"><a href="#" class="item-trigger-title">[title]</a><div class="extra-info"><p>[body]</p></div></div>';
  $handler->display->display_options['fields']['nid']['element_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Väli: Sisu: Mediums */
  $handler->display->display_options['fields']['field_mediums']['id'] = 'field_mediums';
  $handler->display->display_options['fields']['field_mediums']['table'] = 'field_data_field_mediums';
  $handler->display->display_options['fields']['field_mediums']['field'] = 'field_mediums';
  $handler->display->display_options['fields']['field_mediums']['label'] = '';
  $handler->display->display_options['fields']['field_mediums']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediums']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_mediums']['element_wrapper_class'] = 'item-content';
  $handler->display->display_options['fields']['field_mediums']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mediums']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Väli: Sisu: Protocolic mediums */
  $handler->display->display_options['fields']['field_protocolic_mediums']['id'] = 'field_protocolic_mediums';
  $handler->display->display_options['fields']['field_protocolic_mediums']['table'] = 'field_data_field_protocolic_mediums';
  $handler->display->display_options['fields']['field_protocolic_mediums']['field'] = 'field_protocolic_mediums';
  $handler->display->display_options['fields']['field_protocolic_mediums']['label'] = '';
  $handler->display->display_options['fields']['field_protocolic_mediums']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_protocolic_mediums']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_protocolic_mediums']['element_wrapper_class'] = 'item-content';
  $handler->display->display_options['fields']['field_protocolic_mediums']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_protocolic_mediums']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  /* Lühike kriteerium: Sisu: Type (field_medium_type) */
  $handler->display->display_options['sorts']['field_medium_type_tid']['id'] = 'field_medium_type_tid';
  $handler->display->display_options['sorts']['field_medium_type_tid']['table'] = 'field_data_field_medium_type';
  $handler->display->display_options['sorts']['field_medium_type_tid']['field'] = 'field_medium_type_tid';
  /* Lühike kriteerium: Sisu: Pealkiri */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filtri kriteeriumid: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'logo_file' => 'logo_file',
  );

  /* Display: Search */
  $handler = $view->new_display('page', 'Search', 'search');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'medium' => 'medium',
  );
  /* Filtri kriteeriumid: Sisu: Pealkiri */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'medium/search';

  /* Display: Taxonomy */
  $handler = $view->new_display('page', 'Taxonomy', 'taxonomy');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Otsi';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'tid_i18n' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'medium' => 'medium',
  );
  /* Filtri kriteeriumid: Sisu: Has taxonomy term (translated) */
  $handler->display->display_options['filters']['tid_i18n']['id'] = 'tid_i18n';
  $handler->display->display_options['filters']['tid_i18n']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_i18n']['field'] = 'tid_i18n';
  $handler->display->display_options['filters']['tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_i18n']['expose']['operator_id'] = 'tid_i18n_op';
  $handler->display->display_options['filters']['tid_i18n']['expose']['operator'] = 'tid_i18n_op';
  $handler->display->display_options['filters']['tid_i18n']['expose']['identifier'] = 'tid_i18n';
  $handler->display->display_options['filters']['tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['tid_i18n']['vocabulary'] = 'medium_type';
  $handler->display->display_options['path'] = 'medium/taxonomy';

  /* Display: Alphabet */
  $handler = $view->new_display('page', 'Alphabet', 'alphabet');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Otsi';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'medium' => 'medium',
  );
  /* Filtri kriteeriumid: Sisu: Pealkiri */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'letter';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['path'] = 'medium/alphabet';
  $export['medium'] = $view;

  return $export;
}
