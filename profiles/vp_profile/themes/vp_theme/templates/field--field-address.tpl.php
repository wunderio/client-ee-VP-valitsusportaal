<?php
global $base_url;
$lat = $element['#object']->field_latitude[LANGUAGE_NONE][0]['value'];
$long = $element['#object']->field_longitude[LANGUAGE_NONE][0]['value'];
$lat_long = $lat.','.$long;
$url = 'http://maps.google.com/maps?f=q&source=s_q&hl=en&geocode=&q='.$lat_long.'&ie=UTF8&z=17';
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!empty($lat) && !empty($long)): ?>
      <a class="google_maps_icon" href="<?php echo $url; ?>"><img src="<?php echo $base_url; ?>/sites/default/files/content-editors/old-theme/gmap20x20.png" alt="google maps icon" /></a>
  <?php endif; ?>
  <?php if (!$label_hidden): ?>
    <div class="field-label"<?php print $title_attributes; ?>><?php print $label ?>:&nbsp;</div>
  <?php endif; ?>
  <div class="field-items"<?php print $content_attributes; ?>>
    <?php foreach ($items as $delta => $item): ?>
     <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>><?php print render($item); ?></div>
    <?php endforeach; ?>
  </div>
</div>

