<?php
global $language;
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
<?php if (!empty($title) || !empty($caption)) {
  $first = reset($result);
  $term = taxonomy_get_parents_all($first ->taxonomy_term_data_field_data_field_department_tid);
  $count = count($term) + 1;
  print '<h'.$count.'>'.$caption . $title.'</h'.$count.'>';
} ?>
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
        <?php foreach ($row as $field => $content): ?>
          <?php //end($row); ?>
          <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . ( $field === key($header) ?  ' last' : '' ) . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
            <?php print $content; ?>
          </td>
        <?php endforeach; ?>
      </tr>
      <?php
        $node = node_load((int)$result[$row_count]->nid);
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
            $node_view['field_profile_photo'] = array('#markup' => '<div class="field field-name-field-profile-photo field-type-image field-label-hidden"><img src="/profiles/vp_profile/modules/vp_contact/no-profile-image_w104.png" /></div>');
          }
          $node_view = render($node_view);
        }
        echo '<tr class="modal-tr">'.
          '<td colspan="'.count($row).'">'.
            '<div class="ui-dialog-content-contact">'.
              $node_view.
            '</div>'.
          '</td>'.
        '</tr>';
      ?>
    <?php endforeach; ?>
  </tbody>
</table>

