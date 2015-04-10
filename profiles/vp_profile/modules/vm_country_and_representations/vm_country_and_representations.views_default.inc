<?php
/**
 * @file
 * vm_country_and_representations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vm_country_and_representations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'country_and_representations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Country and representations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'computed_field_computed_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_link_to_content]?display=">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'country_and_representations' => 'country_and_representations',
  );
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );

  /* Display: Travel Info */
  $handler = $view->new_display('page', 'Travel Info', 'page_travel_info');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Travel Info';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'computed_field_computed_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_link_to_content]?display=travel_info">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'country-representations/travel-info';

  /* Display: Estonian Representations */
  $handler = $view->new_display('page', 'Estonian Representations', 'page_estonian_representations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Estonian Representations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'computed_field_computed_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_link_to_content]?display=estonian_representations">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'country-representations/estonian-representations';

  /* Display: Estonian Honorary Consuls */
  $handler = $view->new_display('page', 'Estonian Honorary Consuls', 'page_estonian_honorary_consuls');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Estonian Honorary Consuls';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'computed_field_computed_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_link_to_content]?display=estonian_honorary_consuls">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'country-representations/estonian-honorary-consuls';

  /* Display: Foreign Representations */
  $handler = $view->new_display('page', 'Foreign Representations', 'page_foreign_representations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Foreign Representations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'computed_field_computed_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_link_to_content]?display=foreign_representations">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'country-representations/foreign-representations';

  /* Display: Relations */
  $handler = $view->new_display('page', 'Relations', 'page_relations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Relations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link to content */
  $handler->display->display_options['fields']['field_link_to_content']['id'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['table'] = 'field_data_field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['field'] = 'field_link_to_content';
  $handler->display->display_options['fields']['field_link_to_content']['label'] = '';
  $handler->display->display_options['fields']['field_link_to_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_to_content']['type'] = 'computed_field_computed_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_2']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_2']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Flag */
  $handler->display->display_options['fields']['field_flag']['id'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['table'] = 'field_data_field_flag';
  $handler->display->display_options['fields']['field_flag']['field'] = 'field_flag';
  $handler->display->display_options['fields']['field_flag']['label'] = '';
  $handler->display->display_options['fields']['field_flag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flag']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_link_to_content]?display=relations">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'country-representations/relations';
  $export['country_and_representations'] = $view;

  return $export;
}
