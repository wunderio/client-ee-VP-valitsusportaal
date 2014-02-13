<?php
/**
 * @file
 * History page timeline.
 *
 * Add dummy row to create indenting for the second column.
 * Add timeline.
 *
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="timeline"><div class="dashed-line start"></div><div class="dashed-line middle"></div><div class="dashed-line end"></div></div>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <?php print $row; ?>
  </div>
  <?php if ($id == 0 && !isset($_GET['page'])): ?>
    <div class="views-row views-dummy-row"></div>
  <?php endif; ?>
<?php endforeach; ?>
