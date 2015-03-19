<?php
/**
 * @file
 * vp_contact.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vp_contact_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|contact|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '3',
    'children' => array(
      0 => 'field_skype',
      1 => 'field_contact_e_mail',
      2 => 'field_contact_phone_nr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'field-group-format group_contact',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_contact_full_group_contact',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|node|contact|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|contact|search_result';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'search_result';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '5',
    'children' => array(
      0 => 'field_contact_e_mail',
      1 => 'field_contact_phone_nr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'classes' => 'field-group-format group-contact',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_contact_search_result_group_contact',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact|node|contact|search_result'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_education|node|contact|default';
  $field_group->group_name = 'group_education';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '5',
    'children' => array(
      0 => 'field_educational_institution',
      1 => 'field_specialty',
      2 => 'field_degree',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Education',
      'instance_settings' => array(
        'classes' => 'field-group-format group_education',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_contact_full_group_education',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_education|node|contact|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_education|node|contact|form';
  $field_group->group_name = 'group_education';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '15',
    'children' => array(
      0 => 'field_educational_institution',
      1 => 'field_specialty',
      2 => 'field_degree',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Education',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-education field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_education|node|contact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_custom|node|contact|default';
  $field_group->group_name = 'group_main_custom';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main',
    'weight' => '1',
    'children' => array(
      0 => 'field_department',
      1 => 'field_position',
      2 => 'field_position_in_english',
      3 => 'field_position_in_russian',
      4 => 'field_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Main',
      'instance_settings' => array(
        'classes' => 'field-group-format group_main_custom',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_contact_full_group_main_custom',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_main_custom|node|contact|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other|node|contact|default';
  $field_group->group_name = 'group_other';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '6',
    'children' => array(
      0 => 'field_other',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Other',
      'instance_settings' => array(
        'classes' => 'field-group-format group_other',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_contact_full_group_other',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_other|node|contact|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_the_functions|node|contact|default';
  $field_group->group_name = 'group_the_functions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'contact';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'The functions',
    'weight' => '4',
    'children' => array(
      0 => 'field_the_functions',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'The functions',
      'instance_settings' => array(
        'classes' => 'field-group-format group_the_functions',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_contact_full_group_the_functions',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_the_functions|node|contact|default'] = $field_group;

  return $export;
}
