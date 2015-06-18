<?php
/**
 * @file
 * rk_seadusloome_karussell.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rk_seadusloome_karussell_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'seadusloome_karussellid';
  $view->description = 'Õiguesloome, poliitikakujundamise protsessid ning osalemine';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Seadusloome Karussellid';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Õigusloome protsess';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'oigusloome';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Thumbnail controller area';
  $handler->display->display_options['header']['area']['content'] = '<div id="thumbnailController"></div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Etapi pilt */
  $handler->display->display_options['fields']['field_strat_thumbnail']['id'] = 'field_strat_thumbnail';
  $handler->display->display_options['fields']['field_strat_thumbnail']['table'] = 'field_data_field_strat_thumbnail';
  $handler->display->display_options['fields']['field_strat_thumbnail']['field'] = 'field_strat_thumbnail';
  $handler->display->display_options['fields']['field_strat_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_strat_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_strat_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_strat_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
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
    'seadusloome_karussell' => 'seadusloome_karussell',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'between';
  $handler->display->display_options['filters']['nid']['value']['min'] = '4173';
  $handler->display->display_options['filters']['nid']['value']['max'] = '4176';

  /* Display: Õigusloome */
  $handler = $view->new_display('page', 'Õigusloome', 'page');
  $handler->display->display_options['path'] = 'seadusloome/oigusloomeprotsess';

  /* Display: Poliitikakujundamise protsess */
  $handler = $view->new_display('page', 'Poliitikakujundamise protsess', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Poliitikakujundamise protsess';
  $handler->display->display_options['path'] = 'seadusloome/poliitikakujundamiseprotsess';

  /* Display: Osalemine */
  $handler = $view->new_display('page', 'Osalemine', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Osalemine';
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
    'seadusloome_karussell' => 'seadusloome_karussell',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = 'between';
  $handler->display->display_options['filters']['nid']['value']['min'] = '4170';
  $handler->display->display_options['filters']['nid']['value']['max'] = '4172';
  $handler->display->display_options['path'] = 'seadusloome/osalemine';
  $export['seadusloome_karussellid'] = $view;

  return $export;
}
