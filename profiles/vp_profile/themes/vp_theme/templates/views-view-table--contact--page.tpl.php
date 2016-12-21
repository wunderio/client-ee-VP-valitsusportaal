<?php
global $language;
// Ei taha osakonna kirjeldus tabelite <th> ridadesse.
if (isset($header['description_i18n'])):
  unset($header['description_i18n']);
endif;
if ($language->language == 'et') {
  unset($header['field_position_in_english']);
  unset($header['field_position_in_russian']);
}
if ($language->language == 'en') {
  unset($header['field_position']);
  unset($header['field_position_in_russian']);
}
if ($language->language == 'ru') {
  unset($header['field_position_in_english']);
  unset($header['field_position']);
}
foreach ($rows as &$row) {
  if ($language->language == 'et') {
    unset($row['field_position_in_english']);
    unset($row['field_position_in_russian']);
  }
  if ($language->language == 'en') {
    unset($row['field_position']);
    unset($row['field_position_in_russian']);
  }
  if ($language->language == 'ru') {
    unset($row['field_position_in_english']);
    unset($row['field_position']);
  }
}
?>

<?php
$first = reset($result);
$term = taxonomy_get_parents_all($first->taxonomy_term_data_field_data_field_department_tid);

// If department filter is used then show only filtered departments.
if (isset($_GET['tid_with_depth'])) {
  foreach ($term as $termcheck) {
    $departmentFilter = $_GET['tid_with_depth'];
    if (in_array($termcheck->tid, $departmentFilter)) {
      $departmentFilterShow = TRUE;
    }
    else {
      $departmentFilterShow = FALSE;
    }
  }
}
else{
  // If no department filter set then show all.
  $departmentFilterShow = TRUE;
}

if ($departmentFilterShow == TRUE) {
?>

<?php if (!empty($title) || !empty($caption)) {
  $count = count($term) + 1;
  print '<h'.$count.' class="kontakt-h' . $count . '">'. $caption . $title .'</h'.$count.'>';
  if (variable_get('rk_abi_display_department_description', 0) === 1 && isset($row['description_i18n'])):
    print '<span class="osakond-subtekst">' . $row['description_i18n'] . '</span>';
  endif;
} ?>

<?php 
  // EN and RU only need to show name and phone.
  $multilingual_fields = array('title', 'field_contact_phone_nr'); // field_position, field_contact_e_mail
?>

<table <?php if ($classes) { print 'class="'. $classes . '" '; } ?>>
  <?php if (!empty($header)) : ?>
    <thead>
      <tr>
        <?php foreach ($header as $field => $label): ?>
          <?php end($header); ?>
              <th <?php if ($header_classes[$field]) { print 'class="'. $header_classes[$field] . ( $field === key($header) ?  ' last' : '' ) . '" '; } ?>>
                <?php print t($label); ?>
              </th>
        <?php endforeach; ?>
      </tr>
    </thead>
  <?php endif; ?>
  <tbody>
    <?php foreach ($rows as $row_count => &$row): ?>
      <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
        <?php
          if (isset($row['description_i18n'])):
            // Selle kasutasime ainult osakonna pealkirja all.
            unset($row['description_i18n']);
          endif;
        ?>
        <?php foreach ($row as $field => $content): ?>
          <?php //end($row); ?>
              <td <?php if ($field_classes[$field][$row_count]) { print 'class="' . $field_classes[$field][$row_count] . ( $field === key($header) ?  ' last' : '' ) . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>                
                <?php 

                  // EN and RU "teenistuskoht täitmata" equivalents.
                  if ($language->language != 'et' && $field == 'title' && strpos($content, 'teenistus') !== FALSE):
                    $content = '<strong>' . t('Position Vacant') . '</strong>';
                  endif;

                  // E-posti php obfuscation.
                  if ($field == 'field_contact_e_mail' && function_exists('_rk_peida_email') && variable_get('rk_abi_contact_email_obfuscate', 1)):
                    $content = _rk_peida_email(trim($content));
                  endif;
                  if ($language->language != 'et' && $field == 'field_contact_phone_nr' && trim($content) != ''){
                    if (strpos($content, '+') !== FALSE) {
                      $riigikood = '';
                    }
                    else{
                      $riigikood = '(+372) ';
                    }
                  }
                  else {
                    $riigikood = '';
                  }


                  print $riigikood . $content;
                ?>
              </td>
        <?php endforeach; ?>
      </tr>
      <?php

        // This is a workaround to allow static building of contact page.
        if (variable_get('rkstatic_kill_contact_popup', 0) == 1) {
          // Force $node to be false so dialogues do not get built.
          $node = FALSE;
        }
        else {           
          $node = node_load((int)$result[$row_count]->nid);          
        }

        $node_view = '';
        if ($node !== FALSE) {
          $node_view = node_view($node);
          unset($node);
          global $language;
          if ($language->language !== 'et') {
            unset($node_view['field_position']);
            unset($node_view['field_status']);
            unset($node_view['#groups']['group_the_functions']);
            unset($node_view['#groups']['group_education']);
            unset($node_view['#groups']['group_other']);
            unset($node_view['#fieldgroups']['group_the_functions']);
            unset($node_view['#fieldgroups']['group_education']);
            unset($node_view['#fieldgroups']['group_other']);
          }
          //dpm($node_view);
          if (
            !isset($node_view['field_profile_photo']) || (
              isset($node_view['field_profile_photo']['#items'][0]['is_default']) &&
              $node_view['field_profile_photo']['#items'][0]['is_default'] === TRUE
            )
          ) {
            
            // Choice to leave photo space blank or use a default silhouette image.
            if (variable_get('rk_abi_contact_show_silhouette_photo', 0) == 1) {
              $node_view['field_profile_photo'] = array('#markup' => '<div class="field field-name-field-profile-photo field-type-image field-label-hidden"><img alt="" src="/profiles/vp_profile/modules/vp_contact/no-profile-image_w104.png" /></div>');
            }
            else {              
              // Ära kasuta no-profile-image. mm 03.06.2014.
              $node_view['field_profile_photo'] = '';
            }

          }

          // Option to not display department in pop-up. mm 13.11.2014.
          $dept_tid = (isset($node_view['field_department']['#object']->field_department[LANGUAGE_NONE][0]['taxonomy_term']->tid)) ? $node_view['field_department']['#object']->field_department[LANGUAGE_NONE][0]['taxonomy_term']->tid : -1;
          $hide_dept = variable_get('rk_abi_contact_popup_depts_to_hide');
          // Empty array for hide_dept was giving "needs to be array" error in array_keys. Forcing issue here. mm 20nov14.
          if (empty($hide_dept)) {
            // Give it an empty array to avoid "array expected" notice below.
            $dept_check = array();
          }
          else {
            $dept_check = array_keys($hide_dept);
          }
          // Check if this department name should be unset in popup.
          if (in_array($dept_tid, $dept_check)) {
            unset($node_view['field_department']);
          }
          $node_view = render($node_view);
        }

        // Conditional adds option to turn off contact pop-up window.
        if (!variable_get('rkstatic_kill_contact_popup', 0) == 1) {
          echo '<tr class="modal-tr">'.
            '<td colspan="'.count($row).'">'.
              '<div class="ui-dialog-content-contact">'.
                $node_view.
              '</div>'.
            '</td>'.
          '</tr>';
        }

      ?>
    <?php endforeach; ?>
  </tbody>
</table>
<?php
}
?>
