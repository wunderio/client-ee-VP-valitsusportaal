<?php
/**
 * @file
 * vp_weekly_schedule.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vp_weekly_schedule_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'weekly_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Weekly Schedule';
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
    'tid_i18n' => array(
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Kirjeid lehel';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Kõik -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Nihe';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_briefing_source',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'field_briefing_date',
    'field_briefing_source' => 'field_briefing_source',
    'field_briefing_date' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_briefing_source' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_briefing_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Suhte: Sisu: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'source' => 'source',
    'news_types' => 0,
    'news_subjects' => 0,
    'yt_authors' => 0,
    'yt_category' => 0,
    'yt_tags' => 0,
  );
  /* Väli: Sisu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Väli: Sisu: Date */
  $handler->display->display_options['fields']['field_weekly_schedule_date']['id'] = 'field_weekly_schedule_date';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['table'] = 'field_data_field_weekly_schedule_date';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['field'] = 'field_weekly_schedule_date';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['label'] = '';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_weekly_schedule_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['settings'] = array(
    'format_type' => 'rss',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Väli: Sisu: Pealkiri */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Väli: Sisu: Tee */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Väli: Sisu: Source */
  $handler->display->display_options['fields']['field_weekly_schedule_source']['id'] = 'field_weekly_schedule_source';
  $handler->display->display_options['fields']['field_weekly_schedule_source']['table'] = 'field_data_field_weekly_schedule_source';
  $handler->display->display_options['fields']['field_weekly_schedule_source']['field'] = 'field_weekly_schedule_source';
  $handler->display->display_options['fields']['field_weekly_schedule_source']['label'] = '';
  $handler->display->display_options['fields']['field_weekly_schedule_source']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_weekly_schedule_source']['type'] = 'taxonomy_term_reference_plain';
  /* Väli: Sisu: Keel */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = '';
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['language']['native_language'] = TRUE;
  /* Lühike kriteerium: Sisu: Postituse kuupäev */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstifilter: Sisu: Date (field_weekly_schedule_date) */
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['id'] = 'field_weekly_schedule_date_value';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['table'] = 'field_data_field_weekly_schedule_date';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['field'] = 'field_weekly_schedule_date_value';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['year_range'] = '2000:+1';
  $handler->display->display_options['arguments']['field_weekly_schedule_date_value']['granularity'] = 'week';
  /* Filtri kriteeriumid: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'weekly_schedule_day' => 'weekly_schedule_day',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filtri kriteeriumid: Sisu: Keel */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
    'und' => 'und',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filtri kriteeriumid: Sisu: Has taxonomy term (translated) */
  $handler->display->display_options['filters']['tid_i18n']['id'] = 'tid_i18n';
  $handler->display->display_options['filters']['tid_i18n']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_i18n']['field'] = 'tid_i18n';
  $handler->display->display_options['filters']['tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_i18n']['expose']['operator_id'] = 'tid_i18n_op';
  $handler->display->display_options['filters']['tid_i18n']['expose']['label'] = 'Source';
  $handler->display->display_options['filters']['tid_i18n']['expose']['operator'] = 'tid_i18n_op';
  $handler->display->display_options['filters']['tid_i18n']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid_i18n']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['tid_i18n']['vocabulary'] = 'source';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'weekly_schedule_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name_i18n',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name_i18n' => 'name_i18n',
    'field_weekly_schedule_date' => 'field_weekly_schedule_date',
    'body' => 'body',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name_i18n' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_weekly_schedule_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Väli: Taksonoomia termin: Name (translated) */
  $handler->display->display_options['fields']['name_i18n']['id'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_i18n']['field'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name_i18n']['label'] = '';
  $handler->display->display_options['fields']['name_i18n']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name_i18n']['element_label_colon'] = FALSE;
  /* Väli: Sisu: Date */
  $handler->display->display_options['fields']['field_weekly_schedule_date']['id'] = 'field_weekly_schedule_date';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['table'] = 'field_data_field_weekly_schedule_date';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['field'] = 'field_weekly_schedule_date';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['label'] = '';
  $handler->display->display_options['fields']['field_weekly_schedule_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_weekly_schedule_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Väli: Sisu: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Lühike kriteerium: Sisu: Date (field_weekly_schedule_date) */
  $handler->display->display_options['sorts']['field_weekly_schedule_date_value_1']['id'] = 'field_weekly_schedule_date_value_1';
  $handler->display->display_options['sorts']['field_weekly_schedule_date_value_1']['table'] = 'field_data_field_weekly_schedule_date';
  $handler->display->display_options['sorts']['field_weekly_schedule_date_value_1']['field'] = 'field_weekly_schedule_date_value';
  $handler->display->display_options['path'] = 'weekly-schedule';

  /* Display: Andmevoog */
  $handler = $view->new_display('feed', 'Andmevoog', 'weekly_schedule_feed');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rakenda';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteerimise alus';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Kasvav';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Kahanev';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'body',
        'author' => '',
        'category' => 'field_weekly_schedule_source',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'field_weekly_schedule_date',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => '',
        'creator' => '',
        'subject' => '',
        'description' => '',
        'publisher' => '',
        'contributor' => '',
        'date' => '',
        'type' => '',
        'format' => '',
        'identifier' => '',
        'source' => '',
        'language' => 'language',
        'relation' => '',
        'coverage' => '',
        'rights' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstifilter: Sisu: Source (field_weekly_schedule_source) */
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['id'] = 'field_weekly_schedule_source_tid';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['table'] = 'field_data_field_weekly_schedule_source';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['field'] = 'field_weekly_schedule_source_tid';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['default_argument_options']['code'] = '$field_info = field_info_instance(\'node\', \'field_weekly_schedule_source\', \'weekly_schedule_day\');
return $field_info[\'default_value\'][0][\'tid\'];';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_weekly_schedule_source_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filtri kriteeriumid: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'weekly_schedule_day' => 'weekly_schedule_day',
  );
  $handler->display->display_options['path'] = 'weekly-schedule/feed';
  $handler->display->display_options['displays'] = array(
    'weekly_schedule_page' => 'weekly_schedule_page',
    'default' => 0,
  );
  $export['weekly_schedule'] = $view;

  return $export;
}
