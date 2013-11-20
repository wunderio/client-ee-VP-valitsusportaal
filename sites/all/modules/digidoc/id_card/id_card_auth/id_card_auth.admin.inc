<?php

/**
 * Global settings form for id_card module
 *
 * @param array $form
 * @param array $form_state
 * @return array
 */
function id_card_auth_admin_form($form, &$form_state) {
  $form['id_card_create_new_user'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create new user on first login'),
    '#description' => t('If checked, a new user is created when it doesn\'t exist yet. Leave unchecked to deny ID-Card access for unknown users.'),
    '#default_value' => variable_get('id_card_create_new_user', '1'),
  );

  $form['id_card_alter_user_login_form'] = array(
    '#type' => 'checkbox',
    '#title' => t('Attach to default user login form'),
    '#description' => t('Alters the default Drupal user login form and adds a button to log in with ID-Card.'),
    '#default_value' => variable_get('id_card_alter_user_login_form', '0'),
  );

  // Get all roles, except "anonymous" and "authenticated user".
  $user_roles = user_roles();
  unset($user_roles[DRUPAL_AUTHENTICATED_RID]);
  unset($user_roles[DRUPAL_ANONYMOUS_RID]);

  $form['id_card_new_user_default_role'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Default role(s) of new users'),
    '#description' => t('The new users created on first login are given the these roles in addition to "authenticated user" role.'),
    '#options' => $user_roles,
    '#default_value' => variable_get('mobiil_id_new_user_default_role', array()),
    // Only visible when "id_card_create_new_user" checkbox is checked.
    '#states' => array(
      'visible' => array(
        ':input[name="id_card_create_new_user"]' => array('checked' => TRUE),
      ),
    ),
  );

  return system_settings_form($form);
}
