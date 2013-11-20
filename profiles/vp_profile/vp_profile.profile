<?php

/**
 * Implements hook_install_tasks().
 *
 * Rebuild & Revert all enabled features.
 */
function vp_profile_install_tasks($install_state) {
  return array();

  $tasks['_vp_features_revert'] = array(
    'display_name' => st('Revert the features.'),
    'display' => FALSE,
    'function' => '_vp_features_revert',
  );

  return $tasks;
}

/**
 * Revert features.
 */
function _vp_features_revert() {
  $module = 'vp_core';
  $feature = features_load_feature($module);
  $items = array();
  $items[$module] = array_keys($feature->info['features']);
  
  _features_restore('enable', $items);
  _features_restore('rebuild', $items);
  features_revert($items);
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function vp_profile_form_install_configure_form_alter(&$form, $form_state) {
  $languages = array(
    'en' => t('English'),
    'et' => t('Estonian'),
  );

  module_load_include('module', 'taxonomy');
  $vocabularies = taxonomy_get_vocabularies();
  $vid = 0;
  foreach ($vocabularies as $vocabulary) {
    if ($vocabulary->machine_name === 'source')
    $vid = $vocabulary->vid;
  }
  $terms = taxonomy_get_tree($vid);
  $sources = array();
  foreach ($terms as $term) {
    $sources[$term->tid] = $term->name;
  }
  $form['site_information']['vp_profile_source'] = array(
    '#type' => 'select',
    '#title' => t('Choose the source'),
    '#options' => $sources,
  );

  $form['#submit'][] = '_vp_profile_install_save';
}

function _vp_profile_install_save($form, &$form_state) {
  // Save source to variable.
  module_load_include('inc', 'field', 'field.crud');
  variable_set('vp_profile_source', $form_state['values']['vp_profile_source']);
  
  // Save source to contacts default.
  $instance = field_read_instance('node', 'field_source', 'contact');
  $instance['default_value'] = array(array('tid' => $form_state['values']['vp_profile_source']));
  field_update_instance($instance);
  // Enable other vp modules (commentetd outs are in vp_core dependencies).
  $modules = array(
    //'vp_contact',
    'vp_gallery',
    'vp_live_press_briefings',
    'vp_menu',
    'vp_news',
    'vp_particularly_important',
    'vp_redirect',
    //'vp_search',
    'vp_video_gallery',
    'vp_weekly_schedule',
  );
  module_enable($modules, TRUE);
  
  features_rebuild();
  features_revert();
  
  // Save source to field_source default.
  $instance = field_read_instance('node', 'field_source', 'news');
  $instance['default_value'] = array(array('tid' => $form_state['values']['vp_profile_source']));
  field_update_instance($instance);
  
  // Save source to field_source default.
  $instance = field_read_instance('node', 'field_weekly_schedule_source', 'weekly_schedule_day');
  $instance['default_value'] = array(array('tid' => $form_state['values']['vp_profile_source']));
  field_update_instance($instance);
}
