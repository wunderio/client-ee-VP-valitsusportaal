<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
    <?php endforeach; ?>
  </div>
  <?php
    /* Check for 3 or more characters to omit accidental white-space without using trim() function.  */
    if (strlen($element['#object']->field_cover_image[LANGUAGE_NONE][0]['title']) > 2):
  ?>
    <div class="caption">
      <?php echo $element['#object']->field_cover_image[LANGUAGE_NONE][0]['title']; ?>
    </div>
  <?php endif; ?>
</div>
