<?php

/**
 * @file
 * CRUD lehed.
 * Märt Matsoo. mart@matsoo.com.
 */


function rk_valitsused_valitsused_vali($form, &$form_state) {

  $form['valitsus_id'] = array(
    '#type' => 'select',
    '#title' => t('Choose government'),
	  '#options' => _rk_valitsused_get_valitsused(),
    '#attributes' => array('class' => array('varasemad')), 
    // '#default_value' => array(),
    '#description' => t('Choose government that you would like to edit.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Edit'),
  );

  return $form;
  
}


/**
 * Lähtudes valikust vii kasutaja edit lehele.
 */
function rk_valitsused_valitsused_vali_submit($form, &$form_state) {
  $id = $form_state['values']['valitsus_id'];
  drupal_goto('admin/config/rk/valitsused/edit/' . $id); 
}


function rk_valitsused_valitsused_edit($form, &$form_state) {

  if (isset($form_state['build_info']['args'][0]) && $form_state['build_info']['args'][0] > 0) {
    $id = $form_state['build_info']['args'][0];    
  }
  else {
    drupal_set_message(t('Valitsus ID could not be identified.'));
  }
  
  $form = _rk_valitsused_build_edit_form($id, 'gov', $form_state);

  return $form;

}

function rk_valitsused_ministrid_edit($form, &$form_state) {

  // @todo. Likely only need the form_state way to get id since it always exists here.
  if (isset($form_state['build_info']['args'][0]) && $form_state['build_info']['args'][0] > 0) {
    $id = $form_state['build_info']['args'][0];
  }
  else {
    drupal_set_message(t('Minister ID could not be identified.'));
  }
  
  $form = _rk_valitsused_build_edit_form($id, 'minister', $form_state);

  return $form;
}


/**
 * Uue ministri insert.
 */
function rk_valitsused_insert($form, &$form_state) {

  $type = strtolower(arg(4));
  $form = _rk_valitsused_build_insert_form($type);

  return $form;
}


/**
 * Helper function to build gov and minister insert forms.
 * @param $gov_or_minister
 *   String. minister, valitsus, mg. Tells which table we are inserting into.
 */
function _rk_valitsused_build_insert_form($gov_or_minister = 'minister') {

  // Tabeli väljad, mis vajavad loomist. Ministri puhul peame tegema insert rk_minister ja rk_minister_government.

  switch ($gov_or_minister) {
    case 'mg':
      $fields = array('type', 'minister_id', 'government_id', 'position_type_code', 'ruled_start_date', 'ruled_end_date', 'ruled_days', 'party_name', 'is_head_of_government', 'created', 'created_by', 'updated', 'updated_by', 'display_title', 'is_active', 'weight', 'display_indiv_name');
    break;

    case 'valitsus':
      $fields = array('type', 'language', 'name', 'government_number', 'rule_time_type_code', 'ruled_start_date', 'ruled_end_date', 'ruled_days', 'description', 'gallery_id', 'cabinet_img_fid', 'is_active', 'created', 'created_by', 'updated', 'updated_by');
    break;

    case 'minister':
      $fields = array('type', 'language', 'first_name', 'last_name', 'person_sex_type_code', 'party_name', 'description', 'minister_img_fid', 'gallery_id', 'image_file_name', 'is_active', 'created', 'created_by', 'updated', 'updated_by');
    break;

  }

// @todo. Began gallery_id dropdown work for insert form. Need to complete and test. 10.mai.2014.

  $managed_fields= array('cabinet_img_fid', 'minister_img_fid');
  $hidden_fields = array('image_file_name', 'type', 'ruled_days', 'created', 'created_by', 'updated', 'updated_by');
  $select_fields = array('government_id', 'minister_id', 'position_type_code', 'language', 'rule_time_type_code', 'person_sex_type_code', 'is_active', 'is_head_of_government', 'gallery_id');
  $required_fields = array('name', 'government_number', 'rule_time_type_code', 'ruled_start_date', 'first_name', 'last_name', 'minister_id', 'government_id', 'position_type_code');

  foreach ($fields as $key) {

    // @todo. Not sure whether we'll use image_file_name field. Making it hidden as placeholder.
    if (in_array($key, $managed_fields)) {
      // Constants defined at top of rk_valitsused.module file.
      $subfolder = ($gov_or_minister == 'minister') ? MINISTER_IMG_FOLDER_NAME : VALITSUS_IMG_FOLDER_NAME;

      $form[$key] = array(
        '#title' => t($key),
        '#type' => 'managed_file',
        '#upload_location' => 'public://rk_valitsused/' . $subfolder, 
        '#default_value' => '',
        '#description' => t('Uploadable image'),
      );
    } 
    elseif (in_array($key, $select_fields)) {
      // New additions use simplified position_type_code.
      $options = ($key == 'position_type_code') ? _rk_valitsused_ametikohad() : _rk_valitsused_build_crud_select($key);
      $form[$key] = array(
        '#type' => 'select',
        '#title' => t($key),
        '#options' => $options,
        '#default_value' => '',
        '#description' => '',
      );
    }
    else {

      // Description field should have text area.
      $text_field_type = ($key == 'description') ? 'text_format' : 'textfield';      

      // Is this a required field.
      $required = (in_array($key, $required_fields)) ? TRUE : FALSE;

      // Add description for start and end date fields.
      $description = '';
      if ($key == 'ruled_start_date' || $key == 'ruled_end_date') {
        $description = t('Format: YYYY-MM-DD (ex. 1918-02-24)');
      }

      $form[$key] = array(
        '#type' => $text_field_type,
        '#title' => t($key),
        '#default_value' => '',
        '#description' => $description,
        '#required' => $required,
      );

      if ($text_field_type == 'text_format') {
        // $form[$key]['#format'] = NULL; // NULL forces use of default.
      }

      if (in_array($key, $hidden_fields)) {
        $value = ($key == 'type') ? $gov_or_minister : '';
        $form[$key]['#type'] = 'hidden';
        $form[$key]['#value'] = $value;
      }
      
    }
  }

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}


/**
 * Helper function to build gov and minister edit forms from one place.
 */ 
function _rk_valitsused_build_edit_form($id, $gov_or_minister = 'minister', &$form_state) {

  $info = _rk_valitsused_get_table_info($id, $gov_or_minister);
// watchdog('rk', $id . ' ' . $gov_or_minister . ' <pre>' . print_r($info, true) . '</pre>');
// watchdog('rk', $id . ' form_state ' . $gov_or_minister . ' <pre>' . print_r($form_state, true) . '</pre>');  
  foreach ($info as $key => $value) {
    // Ferret out select fields.
    $select_fields = array('language', 'rule_time_type_code', 'person_sex_type_code', 'is_active', 'gallery_id');
    $pic_upload_fields = array('cabinet_img_fid', 'minister_img_fid');
    $hidden_fields = array('image_file_name');

    // @todo. Not sure whether we'll use image_file_name field. Making it hidden as placeholder.
    if (in_array($key, $hidden_fields)) {
      $form[$key] = array(
        '#type' => 'hidden',
        '#value' => $value,
      ); 
    }  
    elseif (in_array($key, $select_fields)) {
      $form[$key] = array(
        '#type' => 'select',
        '#title' => t($key),
        '#options' => _rk_valitsused_build_crud_select($key),
        '#default_value' => $value,
        '#description' => '',
      );
    }
    elseif (in_array($key, $pic_upload_fields)) {

      // Constants defined at top of rk_valitsused.module file.
      $subfolder = ($gov_or_minister == 'minister') ? MINISTER_IMG_FOLDER_NAME : VALITSUS_IMG_FOLDER_NAME;

      $img_fid = ($gov_or_minister == 'minister') ? $info->minister_img_fid : $info->cabinet_img_fid;

      //$form[$key . '_managed'] = array(
      $form[$key] = array(
        '#title' => t($key),
        '#type' => 'managed_file',        
        //'#upload_location' => 'rkvalitsused://' . $subfolder, // 'public://'
        '#upload_location' => 'public://rk_valitsused/' . $subfolder, 
        '#default_value' => $img_fid, // 1527
        '#description' => t('Uploadable image'),
      );
   

    } 
    else {

      // Description field should have text area.
      $disabled = ($key == 'id') ? TRUE : FALSE;
      $text_field_type = ($key == 'description') ? 'text_format' : 'textfield';

      $form[$key] = array(
        '#type' => $text_field_type,
        '#title' => t($key),
        '#default_value' => $value,
        '#description' => '',
        '#disabled' => $disabled,
      );

      if ($text_field_type == 'text_format') {
        // $form[$key]['#format'] = NULL; // NULL forces use of default.
      }

      $hidden_fields = array('created', 'created_by', 'updated', 'updated_by');
      if (in_array($key, $hidden_fields)) {
        $form[$key]['#type'] = 'hidden';
        $form[$key]['#value'] = $value;
      }
      
    }
  }

  // Lisaväljad ministrite jaoks kuna ametiajad ning amet ise sõltuvad millises valitsuses.
  if ($gov_or_minister == 'minister') {

    $form['ministrite_ametiaeg'] = array(
      '#type' => 'markup',
      '#markup' => '<h2>' . t('Minister\'s Public Service History') . '</h2>',
    );

    // Lisainfo tuleb rk_minister_government tabelist.
    $lisa = _rk_valitsused_get_minister_service_history($id);

    // Hidden input to be used in submit function.
    $form['ministrite_ametiaeg_count'] = array(
      '#type' => 'hidden',
      '#value' => count($lisa),
    );

    // Info rk_minister_government tabelist.
    for ($x=0;$x < count($lisa);$x++) {
        $even_odd = ($x % 2) ? 'odd' : 'even';
        // fieldset
        $fieldset_name = 'fieldset_' . $x;
        $form[$fieldset_name] = array(
          '#type' => 'fieldset',
          '#title' => t('Role') . ' ' . $x,
          '#attributes' => array('class' => array($even_odd)),
        );

      // Info rk_minister_government tabelist.
      foreach ($lisa[$x] as $key => $value) {
        $key_name = $key . '_' . $x;
        $select_fields = array('is_head_of_government', 'position_type_code', 'is_active');
        $checkbox_fields = array(); // array('position_type_code');

        if (in_array($key, $select_fields)) {
          $form[$fieldset_name][$key_name] = array(
            '#type' => 'select',
            '#title' => t($key_name),
            '#options' => _rk_valitsused_build_crud_select($key),
            '#default_value' => $value,
            '#description' => '',
          );
        }
        elseif (in_array($key, $checkbox_fields)) {
          $form[$fieldset_name][$key_name] = array(
            '#type' => 'checkboxes',
            '#title' => t($key_name),
            '#options' => _rk_valitsused_build_crud_select($key),
            '#default_value' => array($value),
            '#description' => '',
            '#tree' => TRUE,
          );
        }
        else {
          $form[$fieldset_name][$key_name] = array(
            '#type' => 'textfield',
            '#title' => t($key_name),
            '#default_value' => $value,
            '#description' => '',
          );
        }
      }

    } // outer loop

  }


  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}


// @todo. New gov/minister insert has not had uploadable image handling coded yet. (edit does)
function rk_valitsused_insert_submit($form, &$form_state) {

  global $user;
  $type = $form_state['values']['type'];

  switch ($type) {

    case 'valitsus':
      $id = db_insert('rk_government')
        ->fields(array(
          //'id' => $form_state['values']['id'],
          'language' => $form_state['values']['language'],
          'name' => $form_state['values']['name'],
          'government_number' => $form_state['values']['government_number'],
          'rule_time_type_code' => $form_state['values']['rule_time_type_code'],
          'ruled_start_date' => $form_state['values']['ruled_start_date'],
          'ruled_end_date' => ($form_state['values']['ruled_end_date'] == '') ? NULL : $form_state['values']['ruled_end_date'],
          'ruled_days' => (int) $form_state['values']['ruled_days'], // db crashes if empty string passed, therefore doing (int).
          'description' => $form_state['values']['description']['value'],
          'gallery_id' => (int) $form_state['values']['gallery_id'], // db crashes if empty string passed, therefore doing (int).
          'cabinet_img_fid' => ($form_state['values']['cabinet_img_fid'] != '') ? $form_state['values']['cabinet_img_fid'] : NULL,
          'is_active' => $form_state['values']['is_active'],
          'created' => date('Y-m-d'),
          'created_by' => $user->uid,
          'updated' => date('Y-m-d'),
          'updated_by' => $user->uid,
        ))
        ->execute();

      drupal_set_message(t('New government added.'));
      break;

    case 'minister':
      $id = db_insert('rk_minister')
        ->fields(array(
          'language' => $form_state['values']['language'],
          'first_name' => $form_state['values']['first_name'],
          'last_name' => $form_state['values']['last_name'],
          'person_sex_type_code' => $form_state['values']['person_sex_type_code'], 
          'party_name' => $form_state['values']['party_name'],
          'description' => $form_state['values']['description']['value'],
          'minister_img_fid' => ($form_state['values']['minister_img_fid'] != '') ? $form_state['values']['minister_img_fid'] : NULL,
          'gallery_id' => (int) $form_state['values']['gallery_id'],
          'image_file_name' => $form_state['values']['image_file_name'],
          'is_active' => $form_state['values']['is_active'],
          'created' => date('Y-m-d'),
          'created_by' => $user->uid,
          'updated' => date('Y-m-d'),
          'updated_by' => $user->uid,
        ))
        ->execute();  

      drupal_set_message(t('New minister added.'));
      break;

    case 'mg':
      $id = db_insert('rk_minister_government')
        ->fields(array(
          'minister_id' => $form_state['values']['minister_id'],
          'government_id' => $form_state['values']['government_id'],
          'position_type_code' => $form_state['values']['position_type_code'],
          'ruled_start_date' => $form_state['values']['ruled_start_date'], 
          'ruled_end_date' => ($form_state['values']['ruled_end_date'] == '') ? NULL : $form_state['values']['ruled_end_date'],
          'ruled_days' => (int) $form_state['values']['ruled_days'],
          'party_name' => (int) $form_state['values']['party_name'],
          'is_head_of_government' => $form_state['values']['is_head_of_government'],          
          'created' => date('Y-m-d'),
          'created_by' => $user->uid,
          'updated' => date('Y-m-d'),
          'updated_by' => $user->uid,
          'display_title' => $form_state['values']['display_title'],          
          'is_active' => $form_state['values']['is_active'],
          'weight' => ($form_state['values']['weight'] == '') ? NULL : $form_state['values']['weight'],
          'display_indiv_name' => $form_state['values']['display_indiv_name'],
        ))
        ->execute();  

      drupal_set_message(t('New period of service added for minister.'));
      break;

    default:
      drupal_set_message(t('Attempted to insert an unsupported insert form type.'));
      break;

  }
}


/**
 * Helper function to see if the cabinet_img_fid or minister_img_fid fields have values.
 */
function _rk_valitsused_find_uploaded_image_name($id = '', $type = 'minister') {

  $table = ($type == 'valitsus') ? 'rk_government' : 'rk_minister';
  $field = ($type == 'valitsus') ? 'cabinet_img_fid' : 'minister_img_fid';

  $query = db_select($table, 'f');
  $query
    ->fields('f', array($field))
    ->condition('id', $id, '=');

  $result = $query->execute();

  return $result->fetchField();
  
}


function rk_valitsused_valitsused_edit_submit($form, &$form_state) {
  global $user;

  // From https://api.drupal.org/api/drupal/developer!topics!forms_api_reference.html/7#managed_file.
  if (isset($form_state['values']['cabinet_img_fid']) && $form_state['values']['cabinet_img_fid'] != '') {
    // Load the file via file.fid.
    $file = file_load($form_state['values']['cabinet_img_fid']);
    // Change status to permanent.
    $file->status = FILE_STATUS_PERMANENT;
    // Save.
    file_save($file);
    // Record that the module is using the file.
    file_usage_add($file, 'rk_valitsused', 'rk_valitsused', $user->uid); 
  }  

  // Update table.
  $num_rows = db_update('rk_government')
    ->fields(array(
      //'id' => $form_state['values']['id'],
      'language' => $form_state['values']['language'],
      'name' => $form_state['values']['name'],
      'government_number' => $form_state['values']['government_number'],
      'rule_time_type_code' => $form_state['values']['rule_time_type_code'],
      'ruled_start_date' => $form_state['values']['ruled_start_date'],
      'ruled_end_date' => ($form_state['values']['ruled_end_date'] == '') ? NULL : $form_state['values']['ruled_end_date'],
      'ruled_days' => (int) $form_state['values']['ruled_days'], // db crashes if empty string passed, therefore doing (int).
      'description' => $form_state['values']['description']['value'],
      'cabinet_img_fid' => ($form_state['values']['cabinet_img_fid'] == 0) ? NULL : $form_state['values']['cabinet_img_fid'],
      'gallery_id' => (int) $form_state['values']['gallery_id'], // db crashes if empty string passed, therefore doing (int).
      'is_active' => $form_state['values']['is_active'],
      'created' => $form_state['values']['created'],
      'created_by' => $form_state['values']['created_by'],
      'updated' => date('Y-m-d'),
      'updated_by' => $user->uid,
    ))
    ->condition('id', $form_state['values']['id'], '=')
    ->execute();

  drupal_set_message(t('Government details saved.'));
}


/**
 * Minister edit submit function.
 */
function rk_valitsused_ministrid_edit_submit($form, &$form_state) {
  global $user;

  /**
   * Siin on tegemist salvestamisega kahte tabeli.
   * 1. rk_minister_government (join table rk_government ja rk_minister vahel, amet, ametiajad, ametiaja kestuvus jne).
   * 2. rk_minister - info ministri kohta (nimi, kirjeldus, pilt jne).
   */

  // Salvestame ministrite ametiaja värk särk rk_minister_government tabelisse.
  $ministrite_ametiaeg_count = $form_state['values']['ministrite_ametiaeg_count'];

  // 1. Siin võib mitu rekordit olla, salvestame rk_minister_government.
  for($x = 0;$x < $ministrite_ametiaeg_count;$x++) {
    $id = 'id_' . $x;
    $num_rows = db_update('rk_minister_government')
      ->fields(array(
        'id' => $form_state['values'][$id],
        'minister_id' => $form_state['values']['minister_id_' . $x],
        'government_id' => $form_state['values']['government_id_' . $x],
        'position_type_code' => $form_state['values']['position_type_code_' . $x],
        'ruled_start_date' => $form_state['values']['ruled_start_date_' . $x],
        'ruled_end_date' => ($form_state['values']['ruled_end_date_' . $x] == '') ? NULL : $form_state['values']['ruled_end_date_' . $x],
        'ruled_days' => (int) $form_state['values']['ruled_days_' . $x],
        'party_name' => $form_state['values']['party_name_' . $x],
        'is_head_of_government' => $form_state['values']['is_head_of_government_' . $x],
        'created' => ($form_state['values']['created_' . $x] == '' || $form_state['values']['created_' . $x] == '1970-01-01') ? date('Y-m-d', strtotime('1970-01-01')) : $form_state['values']['created_' . $x],
        'created_by' => 1, // $form_state['values']['created_by_' . $x],
        'updated' => date('Y-m-d'),
        'updated_by' => $user->uid,
        'display_title' => $form_state['values']['display_title_' . $x],
        'display_indiv_name' => $form_state['values']['display_indiv_name_' . $x],
        'is_active' => $form_state['values']['is_active_' . $x],
        'weight' => ($form_state['values']['weight_' . $x] == '') ? NULL : $form_state['values']['weight_' . $x],

      ))
      ->condition('id', $form_state['values'][$id], '=')
      ->execute();

    drupal_set_message(t('Minister role details saved. rk_minister_government id = @id', array('@id' => $form_state['values'][$id])));    
  }  

  // From https://api.drupal.org/api/drupal/developer!topics!forms_api_reference.html/7#managed_file.
  if (isset($form_state['values']['minister_img_fid']) && $form_state['values']['minister_img_fid'] != '') {
    // Load the file via file.fid.
    $file = file_load($form_state['values']['minister_img_fid']);
    // Change status to permanent.
    $file->status = FILE_STATUS_PERMANENT;
    // Save.
    file_save($file);
    // Record that the module is using the file.
    file_usage_add($file, 'rk_valitsused', 'rk_valitsused', $user->uid); 
  }


  // 2. Ministri info salvestamine rk_minister tabelisse.
  $num_rows = db_update('rk_minister')
    ->fields(array(
      'id' => $form_state['values']['id'],
      'language' => $form_state['values']['language'],
      'first_name' => $form_state['values']['first_name'],
      'last_name' => $form_state['values']['last_name'],
      'person_sex_type_code' => $form_state['values']['person_sex_type_code'], 
      'party_name' => $form_state['values']['party_name'],
      'description' => $form_state['values']['description']['value'],
      'minister_img_fid' => ($form_state['values']['minister_img_fid'] == 0) ? NULL : $form_state['values']['minister_img_fid'],
      'gallery_id' => (int) $form_state['values']['gallery_id'],
      'image_file_name' => $form_state['values']['image_file_name'],
      'is_active' => $form_state['values']['is_active'],
      'created' => ($form_state['values']['created'] == '' || $form_state['values']['created'] == '1970-01-01') ? date('Y-m-d', strtotime('1970-01-01')) : $form_state['values']['created'],
      'created_by' => 1, // $form_state['values']['created_by'],
      'updated' => date('Y-m-d'),
      'updated_by' => $user->uid,
    ))
    ->condition('id', $form_state['values']['id'], '=')
    ->execute();  

  drupal_set_message(t('Minister details saved. rk_minister id = @id', array('@id' => $form_state['values']['id'])));
}


/**
 * Ministrite rippmenüü.
 */
function rk_valitsused_ministrid_vali($form, &$form_state) {

  $form['minister_id'] = array(
    '#type' => 'select',
    '#title' => t('Choose minister'),
	  '#options' => _rk_valitsused_get_ministrid(),
    '#attributes' => array('class' => array('varasemad')), 
    // '#default_value' => array(),
    '#description' => t('Choose minister that you would like to edit.'),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Edit'),
  );

  return $form;

}


function rk_valitsused_ministrid_vali_submit($form, &$form_state) {
  $id = $form_state['values']['minister_id'];
  drupal_goto('admin/config/rk/ministrid/edit/' . $id);
}


/**
 * Abifunktsioon valitsuste rippmenüü valikud.
 */
function _rk_valitsused_get_valitsused() {

  $options = array();

  $query = db_select('rk_government', 'g');
  $query
    ->fields('g', array('id', 'government_number', 'ruled_start_date', 'ruled_end_date'))
    ->orderBy('government_number', 'DESC');

  $result = $query->execute();

  foreach ($result as $row) {
    $options[$row->id] = $row->government_number . '. ' . $row->ruled_start_date . '-' . $row->ruled_end_date;
  }

  return $options;
}


/**
 * Abifunktsioon ministrite rippmenüü valikud.
 */
function _rk_valitsused_get_ministrid() {

  $options = array();

  $query = db_select('rk_minister', 'm');
  $query
    ->fields('m', array('id', 'first_name', 'last_name'))
    ->orderBy('last_name');

  $result = $query->execute();

  foreach ($result as $row) {
    $options[$row->id] = $row->last_name . ', ' . $row->first_name;
  }

  return $options;
}


/**
 * Return all results for a particular government or minister.
 * @param id
 *   Integer
 * @param gov_or_minister
 *   String
 * @return object
 *   row object with info returned from db
 */
function _rk_valitsused_get_table_info($id, $gov_or_minister = 'minister') {

  $table = ($gov_or_minister == 'gov') ? 'rk_government' : 'rk_minister';

  $fields = array(
    'rk_government' => array('id', 'language', 'name', 'government_number', 'rule_time_type_code', 'ruled_start_date', 'ruled_end_date', 'ruled_days', 'description', 'cabinet_img_fid', 'gallery_id', 'is_active', 'created', 'created_by', 'updated', 'updated_by'),
    'rk_minister' => array('id', 'language', 'first_name', 'last_name', 'person_sex_type_code', 'party_name', 'description', 'minister_img_fid', 'gallery_id', 'image_file_name', 'is_active', 'created', 'created_by', 'updated', 'updated_by'),
  );

  $query = db_select($table, 't');
  $query 
    ->fields('t', $fields[$table])
    ->condition('id', $id, '=');

  $result = $query->execute();

  return $result->fetchObject();

}


/**
 * Find minister's service history.
 * @param id
 *   Integer
 * @return array
 */
function _rk_valitsused_get_minister_service_history($id) {

  $table = 'rk_minister_government';

  $fields = array(
    'rk_minister_government' => array('id', 'minister_id', 'government_id', 'position_type_code', 'ruled_start_date', 'ruled_end_date', 'ruled_days', 'party_name', 'is_head_of_government',  'created', 'created_by', 'updated', 'updated_by', 'display_title', 'display_indiv_name', 'is_active', 'weight'),
  );

  $query = db_select($table, 't');
  $query 
    ->fields('t', $fields[$table])
    ->condition('minister_id', $id, '=');

  $result = $query->execute();

  // Not using this, just here for fun and reference.
  $num_rows = $result->rowCount();

  $records = array();

  $counter = 0;
  foreach ($result as $row) {
    /*$records['id_' . $counter] = $row->id;
    $records['minister_id_' . $counter] = $row->minister_id;
    $records['government_id_' . $counter] = $row->government_id;
    $records['position_type_code_' . $counter] = $row->position_type_code;
    $records['ruled_start_date_' . $counter] = $row->ruled_start_date;
    $records['ruled_end_date_' . $counter] = $row->ruled_end_date;
    $records['ruled_days_' . $counter] = $row->ruled_days;
    $records['party_name_' . $counter] = $row->party_name;
    $records['is_head_of_government_' . $counter] = $row->is_head_of_government;
    $records['created_' . $counter] = $row->created;
    $records['created_by_' . $counter] = $row->created_by;
    $records['updated_' . $counter] = $row->updated;
    $records['updated_by_' . $counter] = $row->updated_by;*/

    $records[$counter]['id'] = $row->id;
    $records[$counter]['minister_id'] = $row->minister_id;
    $records[$counter]['government_id'] = $row->government_id;
    $records[$counter]['position_type_code'] = $row->position_type_code;
    $records[$counter]['ruled_start_date'] = $row->ruled_start_date;
    $records[$counter]['ruled_end_date'] = $row->ruled_end_date;
    $records[$counter]['ruled_days'] = $row->ruled_days;
    $records[$counter]['party_name'] = $row->party_name;
    $records[$counter]['is_head_of_government'] = $row->is_head_of_government;
    $records[$counter]['created'] = $row->created;
    $records[$counter]['created_by'] = $row->created_by;
    $records[$counter]['updated'] = $row->updated;
    $records[$counter]['updated_by'] = $row->updated_by;
    $records[$counter]['display_title'] = $row->display_title;
    $records[$counter]['display_indiv_name'] = $row->display_indiv_name;
    $records[$counter]['is_active'] = $row->is_active;
    $records[$counter]['weight'] = $row->weight;
    $counter++;
  }

  return $records;
}


/**
 * Called from form builder to provide select fields with necessary options.
 */
function _rk_valitsused_build_crud_select($key) {

  $options = array();

  switch ($key) {
    case 'language':
      $options = array('et' => t('Estonian'), 'en' => t('English'), 'ru' => t('Russian'));
      break;

    case 'rule_time_type_code':
      $options = array('FIRST_REPUBLIC' => t('First Republic'), 'EXILE_GOVERNMENTS' => t('Exile Government'), 'SECOND_REPUBLIC' => t('Second Republic'));
      break;

    case 'person_sex_type_code':
      $options = array('SEX_TYPE_MALE' => t('Male'), 'SEX_TYPE_FEMALE' => t('Female'));
      break;

    case 'is_active':
      $options = array('1' => t('Yes'), '0' => t('No'));
      break;

    case 'is_head_of_government':
      $options = array('0' => t('No'), '1' => t('Yes'));
      break;

    case 'position_type_code':      
      $options = _rk_valitsused_get_dropdown_values('rk_minister_government', 'position_type_code');
      // $options = _rk_valitsused_get_checkbox_values('rk_minister_government', 'position_type_code');
      break;

    case 'minister_id':
      $options = _rk_valitsused_get_ministrid();
      break;

    case 'government_id':
      $options = _rk_valitsused_get_valitsused();
      break;

    case 'gallery_id':
      $options = _rk_valitsused_gallery_dropdown();
      break;

    default:
      $options = array('0' => t('No'), '1' => t('Yes'));
  }

  return $options;
}


/**
 * Abifunktsioon.
 * @param $table
 *   String. Which table to use.
 * @param $field
 *   String. Which field to use.
 * @return
 *   Array. Distinct field values, run through drupal_map_assoc(). 
 */
function _rk_valitsused_get_checkbox_values($table = 'rk_minister_government', $field = 'position_type_code') {

  $query = db_select($table, 't');
  $query
    ->addField('t', $field, 'value');
  $query->distinct();
  $query->orderBy($field);

  $result = $query->execute();

  $options = array();
  foreach ($result as $record) {
    $options[$record->value] = $record->value;
  }

  return drupal_map_assoc($options);
}


/**
 * Abifunktsioon. Anna tabel ja väli ning array saadetud tagasi distinct andmetega.
 * @param $table
 *   String. Which table to use.
 * @param $field
 *   String. Which field to use.
 * @return
 *   Array. Distinct field values. 
 */
function _rk_valitsused_get_dropdown_values($table = 'rk_minister_government', $field = 'position_type_code') {

  $query = db_select($table, 't');
  $query
    ->addField('t', $field, 'value');
  $query->distinct();
  $query->orderBy($field);

  $result = $query->execute();

  $options = array();
  foreach ($result as $record) {
    $options[$record->value] = $record->value;
  }

  return $options;
}


/**
 * Ajax remove nupp.
 * @todo. No longer need this function.
 */
function rk_valitsused_remove_file($form, &$form_state) {
  // watchdog('rk', 'tere <pre>' . print_r($form_state, true) . '</pre>');
  // @todo. Try array_key_exists on next line.
  $table = 'rk_minister';
  $field = ($table == 'rk_minister') ? 'minister_img_fid' : 'cabinet_img_fid';
  $id = $form_state['values']['id'];
  _rk_valitsused_delete_file_empty_field($table, $field, $id);
}


/**
 * Abifunktsioon. Kustuta file ning tühista tabeli väli.
 * @param $table
 *   String. Which table to use.
 * @param $field
 *   String. Which field to use.
 * @param $id
 *   Integer. Which row to act upon. 
 */
function _rk_valitsused_delete_file_empty_field($table, $field, $id) {

  // Find which file to delete and delete it.
  $query = db_select($table, 't');
    $query
      ->condition('t.id', $id, '=')
      ->fields('t', array($field));

  $result = $query->execute();
  $file_name = $result->fetchField();

  $minister_valitsus_subfolder = ($table == 'rk_government') ? 'valitsus' : 'minister';

  //watchdog('rk', $file_name . ' ' . $minister_valitsus_subfolder . ' ' . $id);

  $success = drupal_unlink(drupal_get_path('module', 'rk_valitsused') . '/images/' . $minister_valitsus_subfolder . '/' . $file_name);

  //if ($success) {
    // Update the record in the db so, for example, minister_img_fid = ''.
    $num_rows = db_update($table)
      ->fields(array(
      $field => '',
    ))
    ->condition('id', $id, '=')
    ->execute();    
    // watchdog('rk', 'got rid of ' . $field . ' for ' . $id);
  //}

}


/**
 * Abifunktsioon. Olemasolevad galeriid rippmenüüse.
 * @return $id
 *   Array. Dropdown options. 
 */
function _rk_valitsused_gallery_dropdown() {

  // Get all gallery nids from db.
  $query = db_select('node', 'n');
    $query
      ->condition('n.type', 'gallery', '=')
      ->condition('n.status', 1, '=')
      ->fields('n', array('nid', 'title'));

  $result = $query->execute();

  $arrOptions = array();
  $arrOptions[0] = t('No Associated Gallery');

  foreach ($result as $record) {
    $arrOptions[$record->nid] = $record->title;
  }


  return $arrOptions;

}