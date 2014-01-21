<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>><?php
    if (substr($element['#field_name'], 0, 17) === 'field_logo_files_' || substr($element['#field_name'], 0, 13) === 'field_medium_') {
      foreach ($variables['element']['#items'] as $delta => $item) {
        echo '<div class="field-item ' . ($delta % 2 ? 'odd' : 'even') . '"' . $item_attributes[$delta] . '>' .
        '<span class="full-url element-invisible">' . file_create_url($item['uri']) . '</span>';
        if (user_access('access zipcart downloads')) {
          echo theme('zipcart_download', array('text' => drupal_strtoupper(pathinfo($item['uri'], PATHINFO_EXTENSION)).(!empty($item['description'])?' ('.$item['description'].')':''), 'path' => variable_get('file_public_path', conf_path() . '/files' . str_replace('public://', '/', $item['uri']))));
        }
        else {
          echo l(drupal_strtoupper(pathinfo($item['uri'], PATHINFO_EXTENSION)).(!empty($item['description'])?' ('.$item['description'].')':''), file_create_url($item['uri']), array('attributes' => array('class' => 'zipcart')));
        }
        echo '</div>';
      }
    }
    else {
      foreach ($items as $delta => $item) {
        echo '<div class="field-item ' . ($delta % 2 ? 'odd' : 'even') . '"' . $item_attributes[$delta] . '>' . render($item) . '</div>';
      }
    }
  ?></div>
</div>
