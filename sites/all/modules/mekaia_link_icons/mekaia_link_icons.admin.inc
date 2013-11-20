<?php

/**
 * @file
 * Provides mekaia link icons module admin pages.
 */

/**
 * Menu callback; administer settings and upload images.
 */
function mekaia_link_icons_admin_page() {
  $form = array();

  // Append file size to link.
  $form['mekaia_link_icon_file_size'] = array(
    '#title' => t('Append file size to link'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('mekaia_link_icon_file_size', 0),
  );

  // Append extention to link.
  $form['mekaia_link_icon_file_extension'] = array(
    '#title' => t('Append extention to link'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('mekaia_link_icon_file_extension', 0),
  );

  // Icon for internal links.
  $form['mekaia_link_icon_internal_img'] = array(
    '#title' => t('Internal link image'),
    '#type' => 'managed_file',
    '#default_value' => variable_get('mekaia_link_icon_internal_img', ''),
    '#upload_location' => 'public://mekaia_link_icons/',
  );

  // Icon for external links.
  $form['mekaia_link_icon_external_img'] = array(
    '#title' => t('External link image'),
    '#type' => 'managed_file',
    '#default_value' => variable_get('mekaia_link_icon_external_img', ''),
    '#upload_location' => 'public://mekaia_link_icons/',
  );

  // Images for automatically detected extensions.
  $types = variable_get('mekaia_link_icon_types', '');
  $hidden_types = array('com', 'net', 'info', 'org');
  if (is_array($types)) {
    foreach ($types as $extension) {
      if (!in_array($extension, $hidden_types) && strlen($extension) > 2) {
        $form['mekaia_link_icon_' . $extension] = array(
          '#title' => t('Icon for @extension', array('@extension' => $extension)),
          '#type' => 'managed_file',
          '#default_value' => variable_get('mekaia_link_icon_' . $extension, ''),
          '#upload_location' => 'public://mekaia_link_icons/',
        );
      }
    }
  }

  $form['#validate'] = array('mekaia_link_icons_admin_form_validate');

  return system_settings_form($form);
}

/**
 * Validate: Code for uploaded images.
 */
function mekaia_link_icons_admin_form_validate($form, &$form_state) {
  foreach ($form_state['input'] as $key => $array) {
    if (substr($key, 0, 17) === 'mekaia_link_icon_') {

      if ((int) $form_state['values'][$key] > 0 && $file = file_load($form_state['values'][$key])) {
        // Change status to permanent.
        $file->status = FILE_STATUS_PERMANENT;
        // Save file.
        file_save($file);

        // Scale and crop it.
        if ($image = image_load($file->uri)) {
          image_scale_and_crop($image, 16, 16);
          image_save($image);
        }

        variable_set($key, $form_state['values'][$key]);

        // Record that the module is using the file.
        file_usage_add($file, 'mekaia_link_icons', 'file', $file->fid);
      }
      else {
        $delete_fid = variable_get($key);
        $delete_fid = $delete_fid['fid'];
        // Delete file, if exists.
        if ($file = file_load($delete_fid)) {
          // Delete the file and the usage record.
          file_delete($file, TRUE);
        }
        variable_del($key);
      }

      // Make sure it is unset for system submit.
      unset($form_state['values'][$key]);
    }
  }

  // Regenerate css.
  module_load_include('inc', 'mekaia_link_icons', 'mekaia_link_icons.generate_css');
  mekaia_link_icons_generate_css(TRUE);
}
