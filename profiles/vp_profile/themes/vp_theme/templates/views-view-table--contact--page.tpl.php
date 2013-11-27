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
<table <?php if ($classes) { print 'class="'. $classes . '" '; } ?>>
<?php if (!empty($title) || !empty($caption)) : ?>
  <caption><?php print $caption . $title; ?></caption>
<?php endif; ?>
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
    <?php foreach ($rows as $row_count => $row): ?>
      <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
        <?php foreach ($row as $field => $content): ?>
          <?php end($row); ?>
          <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . ( $field === key($header) ?  ' last' : '' ) . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
            <?php print $content; ?>
          </td>
        <?php endforeach; ?>
      </tr>
      <?php
        $node = node_load($result[$row_count]->nid);
        $node_view = node_view($node);
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
        echo '<tr class="modal-tr">'.
          '<td colspan="'.count($row).'">'.
            '<div class="ui-dialog-content-contact">'.render($node_view).'</div>'.
          '</td>'.
        '</tr>';
      ?>
    <?php endforeach; ?>
  </tbody>
</table>
