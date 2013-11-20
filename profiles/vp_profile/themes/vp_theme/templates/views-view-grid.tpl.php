<?php

/**
 * @file
 * Grid template with divs (views default uses tables).
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)) : ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="tablediv <?php print $class; ?>">
  <?php if (!empty($caption)) : ?>
    <div class="tablediv-caption"><?php print $caption; ?></div>
  <?php endif; ?>

  <?php foreach ($rows as $row_number => $columns): ?>
    <div <?php if ($row_classes[$row_number]) { print 'class="tablediv-row ' . $row_classes[$row_number] .'"';  } ?>>
      <?php foreach ($columns as $column_number => $item): ?>
        <div <?php if ($column_classes[$row_number][$column_number]) { print 'class="tablediv-cell ' . (strlen($item) === 0 ? 'tablediv-cell-dummy ' : '') . $column_classes[$row_number][$column_number] .'"';  } ?>>
          <?php print $item; ?>
        </div>
      <?php endforeach; ?>
    </div>
  <?php endforeach; ?>
</div>
<script>
  (function($) {

    $('.tablediv').once('init-tablediv-tablet').each(function() {
      var k = 1;
      $(this).find('.tablediv-cell').each(function() {
        if (k === 1) {
          $(this).addClass('col-tablet-first');
        }
        if (k === 3) {
          $(this).addClass('col-tablet-last');
          k = 0;
        }
        k++;
      });
    });
  })(jQuery);
</script>
