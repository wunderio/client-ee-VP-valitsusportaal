<?php

/**
 * Global settings form for Mobiil-ID module.
 *
 * @param array $form
 * @param array $form_state
 * @return array
 */
function mobiil_id_auth_admin_form($form, &$form_state) {
  // Locale module is not enabled, let the admin pick the language of the service
  if (!module_exists('locale')) {
    $form['mobiil_id_language'] = array(
      '#type' => 'select',
      '#title' => t('Language'),
      '#description' => t('Language of the message sent to users phone when authenticating. Enable Locale module for more options.'),
      '#default_value' => variable_get('mobiil_id_language', 'EST'),
      '#options' => array(
        'EST' => 'Estonian',
        'ENG' => 'English',
        'RUS' => 'Russian',
      ),
    );

    $form['mobiil_id_message'] = array(
      '#type' => 'textfield',
      '#title' => t('Message'),
      '#description' => t('Additional message sent to users phone when authenticating. Can be left empty since the Mobiil-ID service sends a message anyway. Maximum length of the message is 40 characters.'),
      '#default_value' => variable_get('mobiil_id_message', ''),
      '#maxlength' => 40,
    );
  } else {
    // Mobiil-ID service supports only 3 languages, so the following fields are hardcoded
    $form['mobiil_id_message_et'] = array(
      '#type' => 'textfield',
      '#title' => t('Estonian message'),
      '#description' => t('Additional message sent to users phone when authenticating in estonian. Can be left empty since the Mobiil-ID service sends a message anyway. Maximum length of the message is 40 characters.'),
      '#default_value' => variable_get('mobiil_id_message_et', ''),
      '#maxlength' => 40,
    );

    $form['mobiil_id_message_en'] = array(
      '#type' => 'textfield',
      '#title' => t('English message'),
      '#description' => t('Additional message sent to users phone when authenticating in english. Default for all languages except estonian and russian. Maximum length of the message is 40 characters.'),
      '#default_value' => variable_get('mobiil_id_message_en', ''),
      '#maxlength' => 40,
    );

    $form['mobiil_id_message_ru'] = array(
      '#type' => 'textfield',
      '#title' => t('Russian message'),
      '#description' => t('Additional message sent to users phone when authenticating in russian. Maximum length of the message is 40 characters.'),
      '#default_value' => variable_get('mobiil_id_message_ru', ''),
      '#maxlength' => 40,
    );
  }

  $form['mobiil_id_create_new_user'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create new user on first login'),
    '#description' => t('If checked, a new user is created when it doesn\'t exist yet. Leave unchecked to deny Mobiil-ID access for unknown users.'),
    '#default_value' => variable_get('mobiil_id_create_new_user', '0'),
  );

  // Get all roles, except "anonymous" and "authenticated user".
  $user_roles = user_roles();
  unset($user_roles[DRUPAL_AUTHENTICATED_RID]);
  unset($user_roles[DRUPAL_ANONYMOUS_RID]);

  $form['mobiil_id_new_user_default_role'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Default role(s) of new users'),
    '#description' => t('The new users created on first login are given the these roles in addition to "authenticated user" role.'),
    '#options' => $user_roles,
    '#default_value' => variable_get('mobiil_id_new_user_default_role', array()),
    // Only visible when "mobiil_id_create_new_user" checkbox is checked.
    '#states' => array(
      'visible' => array(
        ':input[name="mobiil_id_create_new_user"]' => array('checked' => TRUE),
      ),
    ),
  );

  $form['mobiil_id_alter_user_login_form'] = array(
    '#type' => 'checkbox',
    '#title' => t('Attach to default user login form'),
    '#description' => t('Alters the default Drupal user login form and adds a button to log in with Mobiil-ID.'),
    '#default_value' => variable_get('mobiil_id_alter_user_login_form', '0'),
  );

  return system_settings_form($form);
}
