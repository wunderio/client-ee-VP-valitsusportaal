<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>><?php 
    if (substr($element['#field_name'], 0, 17) === 'field_logo_files_') {
      foreach ($variables['element']['#items'] as $delta => $item) {
        echo '<div class="field-item ' . ($delta % 2 ? 'odd' : 'even') . '"' . $item_attributes[$delta] . '>' . 
          l(drupal_strtoupper(pathinfo($item['uri'], PATHINFO_EXTENSION)), file_create_url($item['uri']), array('attributes' => array('class' => 'sml-btn'))) . 
        '</div>';
      }
    }
    else {
      foreach ($items as $delta => $item) {
        echo '<div class="field-item ' . ($delta % 2 ? 'odd' : 'even') . '"' . $item_attributes[$delta] . '>' . render($item) . '</div>';
      }
    }
  ?></div>
</div>