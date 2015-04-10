<div class="country-list-wrapper">
  <?php if (!empty($title)): ?>
    <h3 id="country-list-letter-<?php print drupal_strtolower($title); ?>"><?php print $title; ?></h3>
  <?php endif; ?>
  <?php foreach ($rows as $id => $row): ?>
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </div>
  <?php endforeach; ?>
</div>
