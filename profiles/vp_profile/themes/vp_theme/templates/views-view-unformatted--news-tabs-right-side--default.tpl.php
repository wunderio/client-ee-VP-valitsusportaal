<?php

/**
 * @file
 * Split news into two groups.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php
$col1 = $col2 = '';
$item_count_for_first_col = ceil(count($rows) / 2);
?>
<?php for($i=0;$i<count($rows);$i++): ?>
  <?php
  $rowhtml = '<div ' . ( $classes_array[$i] ? 'class="' . $classes_array[$i] .'"' : '' ) . '>' . $rows[$i] . '</div>';
  if ($i<$item_count_for_first_col) {
    $col1 .= $rowhtml;
  }
  else {

    $col2 .= $rowhtml;
  }
  ?>
<?php endfor; ?>
<?php
print '<div class="col col-1">' . $col1 . '</div>';
print '<div class="col col-2">' . $col2 . '</div>';
