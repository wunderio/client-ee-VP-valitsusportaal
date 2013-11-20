<?php foreach ($items as $delta => $item): ?>
  <span<?php print $item_attributes[$delta]; ?> content="<?php print render($item); ?>"></span>
<?php endforeach; ?>
