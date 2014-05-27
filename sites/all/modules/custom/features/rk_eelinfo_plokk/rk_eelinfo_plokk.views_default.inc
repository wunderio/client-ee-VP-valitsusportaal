<?php
/**
 * @file
 * rk_eelinfo_plokk.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rk_eelinfo_plokk_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'eelinfo_plokk';
  $view->description = 'Avaleheks';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Eelinfo plokk';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Eelinfo';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'veel';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Jalus: Globaalne: Tekstiala */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="view-footer">
      <div class="tabs"><ul class="tabs-inner">
<li><a href="/et/eelinfo">Nädalainfo</a></li></ul></div>    </div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Käitumine, kui tulemusi pole: Globaalne: Tekstiala */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Currently no weekly schedule items to display.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Väli: Sisu: Ametinimetus */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Väli: Sisu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Lühike kriteerium: Sisu: Date (field_weekly_schedule_date) */
  $handler->display->display_options['sorts']['field_weekly_schedule_date_value']['id'] = 'field_weekly_schedule_date_value';
  $handler->display->display_options['sorts']['field_weekly_schedule_date_value']['table'] = 'field_data_field_weekly_schedule_date';
  $handler->display->display_options['sorts']['field_weekly_schedule_date_value']['field'] = 'field_weekly_schedule_date_value';
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
    'weekly_schedule_day' => 'weekly_schedule_day',
  );
  /* Filtri kriteeriumid: Sisu: Date (field_weekly_schedule_date) */
  $handler->display->display_options['filters']['field_weekly_schedule_date_value']['id'] = 'field_weekly_schedule_date_value';
  $handler->display->display_options['filters']['field_weekly_schedule_date_value']['table'] = 'field_data_field_weekly_schedule_date';
  $handler->display->display_options['filters']['field_weekly_schedule_date_value']['field'] = 'field_weekly_schedule_date_value';
  $handler->display->display_options['filters']['field_weekly_schedule_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_weekly_schedule_date_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_weekly_schedule_date_value']['year_range'] = '-1:+1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['eelinfo_plokk'] = $view;

  return $export;
}
