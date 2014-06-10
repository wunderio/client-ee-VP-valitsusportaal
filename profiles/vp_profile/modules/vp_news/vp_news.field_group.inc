<?php
/**
 * @file
 * vp_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vp_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author|node|news|form';
  $field_group->group_name = 'group_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author',
    'weight' => '9',
    'children' => array(
      0 => 'field_author_picture',
      1 => 'field_name',
      2 => 'field_occupaction',
      3 => 'field_division',
      4 => 'field_phone',
      5 => 'field_e_mail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Author',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-author field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_author|node|news|form'] = $field_group;

  return $export;
}
