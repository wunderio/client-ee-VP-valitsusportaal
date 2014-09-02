RK Static

Moodul staatilise versiooni ehitamiseks.

1. Vajab html_export moodulit. (https://www.drupal.org/project/html_export)
See (rkstatic) moodul lisab HTML export "Path selectors" kasti uut valikut: "Riigikantselei static: Custom Paths"


2. Dom removal elemendid. (siin mõned soovitused, täiendage ise)
#block-vp-core-vp-core-accessibility-help-link
.language-switcher-locale-url
#search-block-form
#block-search-form
.views-exposed-form
ul.pager
#zone-top .block-menu-block
ul.widget-icon-menu.vertical-push-small
#region-sidebar-second
section.block-views
.page-contact div.ui-dialog

3. Settings page on olemas. (et/admin/config/rkstatic/settings)
NB: Kui mingi AJAX HTTP viga html_export käivitamisel, siis ilmselt on kontakti lehe ehitamine liiga mahukas. Selleks on vaja AJUTISELT sisse lülitada "Suppress contact pop-ups". See väldib kontakt lehel pop-up'ide ehitamine.

4. Vajab vaade (View) nimega "ddos". Vaade ise listib viimast X (nt 50) uudist. html_export teeb neist staatilisi versioone ka.

ddos impordiks (/et/admin/structure/views/import):

/* Start copy/paste */

$view = new view();
$view->name = 'ddos';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'ddos';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'ddos';
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
$handler->display->display_options['pager']['options']['items_per_page'] = '30';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
/* Väli: Sisu: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Väli: Sisu: Tee */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['label'] = 'Path';
/* Lühike kriteerium: Sisu: Postituse kuupäev */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filtri kriteeriumid: Sisu: Liik */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filtri kriteeriumid: Sisu: Keel */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  'et' => 'et',
);
$handler->display->display_options['filters']['language']['group'] = 1;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'getddos';


/* End copy/paste */
