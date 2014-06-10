<?php
/**
 * @file
 * vp_news.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function vp_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|newsletter_news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'newsletter_news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|newsletter_news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|newsletter_news|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'newsletter_news';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_cover_image',
        2 => 'body',
        3 => 'field_subject',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_cover_image' => 'ds_content',
      'body' => 'ds_content',
      'field_subject' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|newsletter_news|scs'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|scs';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'scs';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_cover_image',
        2 => 'body',
        3 => 'field_news_subject',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_cover_image' => 'ds_content',
      'body' => 'ds_content',
      'field_news_subject' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|scs'] = $ds_layout;

  return $export;
}
