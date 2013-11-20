<?php

/**
 * Global settings form for DigiDoc services.
 *
 * @param array $form
 * @param array $form_state
 * @return array
 */
function digidoc_admin_form($form, &$form_state) {
  $form['digidoc_server_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL for DigiDoc service server'),
    '#default_value' => variable_get('digidoc_server_url', 'https://www.openxades.org:8443/?wsdl'),
  );

  $form['digidoc_server_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username for server'),
    '#default_value' => variable_get('digidoc_server_username', ''),
  );

  $form['digidoc_server_password'] = array(
    '#type' => 'textfield',
    '#title' => t('Password for server'),
    '#default_value' => variable_get('digidoc_server_password', ''),
  );

  $form['digidoc_service_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Service name'),
    '#description' => t('Name of your Mobiil-ID service. With the OpenXAdES test server you can use the service name "Testimine", but do not use it for a production site! To register your own service visit the web site of !name at !url.', array('!name' => 'AS Sertifitseerimiskeskus', '!url' => l('http://www.sk.ee', 'http://www.sk.ee'))),
    '#default_value' => variable_get('digidoc_service_name', 'Testimine'),
  );

  $form['digidoc_ddoc_file_location'] = array(
    '#type' => 'textfield',
    '#title' => t('Location for DigiDoc files to be saved at. Provided path must use Drupal public or private path wrapper.'),
    '#default_value' => variable_get('digidoc_ddoc_file_location', 'public://ddoc/'),
    '#description' => t('The directory must be writeable'),
  );

  $form['digidoc_signer_defaults'] = array(
    '#type' => 'fieldset',
    '#title' => t('Default values for signer information for digital signing. Can be left empty if signing is not used'),
    '#description' => t('These are just default values, actual values can be set before every signing by implementing _digidoc_signer_alter hook.'),
  );
  $signer_default = &$form['digidoc_signer_defaults'];
  $signer_default['digidoc_signer_role'] = array(
    '#type' => 'textfield',
    '#title' => t('Role'),
    '#default_value' => variable_get('digidoc_signer_role', ''),
  );
  $signer_default['digidoc_signer_city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
    '#default_value' => variable_get('digidoc_signer_city', ''),
  );
  $signer_default['digidoc_signer_state'] = array(
    '#type' => 'textfield',
    '#title' => t('State or province'),
    '#default_value' => variable_get('digidoc_signer_state', ''),
  );
  $signer_default['digidoc_signer_postalcode'] = array(
    '#type' => 'textfield',
    '#title' => t('Postal code'),
    '#default_value' => variable_get('digidoc_signer_postalcode', ''),
  );
  $signer_default['digidoc_signer_country'] = array(
    '#type' => 'textfield',
    '#title' => t('Country code'),
    '#default_value' => variable_get('digidoc_signer_country', 'Eesti'),
  );

  return system_settings_form($form);
}

/**
 * User edit form ID code section.
 *
 * @param array $form
 * @param array $form_state
 * @param object $user_info
 * @return array
 */
function digidoc_user_form(&$form, &$form_state, $user_info) {
  // Getting authname (in this case the Estonian ID code) by user ID.
  if ($user_info) {
    $query = db_select('authmap', 'a')
      ->fields('a', array('authname'))
      ->condition('a.uid', $user_info->uid)
      ->condition('a.module', 'digidoc_idcode');
    $authname = $query->execute()->fetchField();
  } else {
    $authname = '';
  }

  $form['digidoc_user_id_code'] = array(
    '#type' => 'textfield',
    '#title' => t('ID code'),
    '#description' => t('Estonian ID code of the user. Warning - user might not be able to log in using ID-Card anymore if changed. Leave empty to disable ID-Card access for the user.'),
    '#default_value' => $authname,
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $user_info->uid,
  );

  return $form;
}

/**
 * Saves the users Estonian ID code to use with ID-Card.
 *
 * @param array $form
 * @param array $form_state
 * @return void
 */
function digidoc_user_form_submit($form, &$form_state) {
  $values = &$form_state['values'];
  $user_info = user_load($values['uid']);

  // Save user authmap.
  user_set_authmaps($user_info, array(
    'authname_digidoc_idcode' => $values['digidoc_user_id_code'],
  ));
}
