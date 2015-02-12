<?php

/**
 * Implements hook_install_tasks_alter().
 */
function vp_profile_install_tasks_alter(&$tasks, $install_state) {
  $tasks['install_finished']['function'] = 'vp_profile_install_finished';
}

/**
 * Install finished replacement by vp_profile.
 */
function vp_profile_install_finished(&$install_state) {
  install_finished($install_state);
  variable_set('admin_theme', 'seven');
  unset($_SESSION['messages']);
  drupal_goto('admin/config/system/backup_migrate/restore');
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function vp_profile_form_install_configure_form_alter(&$form, $form_state) {

  $form['site_information']['site_name']['#default_value'] = 'Government installation profile';
  $form['site_information']['site_name']['#disabled'] = TRUE;
  $form['site_information']['site_mail'] = array('#type' => 'hidden', '#value' => 'valitsusportaal@riigikantselei.ee');
  
  unset($form['update_notifications']);
  unset($form['server_settings']);
}

