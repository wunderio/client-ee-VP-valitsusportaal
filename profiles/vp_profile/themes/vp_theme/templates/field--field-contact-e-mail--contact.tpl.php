<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>
		<?php 
		  // E-posti php obfuscation.
		  if (function_exists('_rk_peida_email') && variable_get('rk_abi_contact_email_obfuscate', 0)) {                  
		    print _rk_peida_email(trim($item['#markup']));
		  }
          else {
            print $item['#markup'];
          }
		?>
      </div>
    <?php endforeach; ?>
  </div>
</div>
