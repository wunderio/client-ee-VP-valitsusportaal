<?php

/**
 * Testing ground for id card signing
 *
 * @return array form
 */
function id_card_sign_test_admin_form($form, &$form_state) {
  /*if (!isset($form_state['id_card_sign']['output']['message'])) $form_state['id_card_sign']['output']['message'] = '';
  // if it's the initial form then we show the 'test' button
  if (!isset($form_state['id_card_sign']['status'])) {
    $form_state['id_card_sign']['status'] = 'readyness';
  } else { // otherwise we run the signing
  }
  $form['id_card_sign_status'] = array(
    '#type' => 'item',
    '#title' => t('Status').' : <span id="id_card_sign_status_status">'.$form_state['id_card_sign']['status'].'</span><br />'.t('Message').' : <span id="id_card_sign_status_msg">'.$form_state['id_card_sign']['output']['message'].'</span>',
    '#markup' => '<div id="pluginLocation"></div>',
  );
  $form['nupp'] = array('#markup' => "<input type='button' id='id_card_sign_button' class='form-submit' value='".t('Sign with ID card')."'/>");
  return $form;*/
}
