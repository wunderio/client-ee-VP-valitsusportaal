<?php foreach ($block_items as $key => $block_item) : ?>
  <div class="col simple-columns-block-<?php echo $key; ?>">
    <?php echo strlen(trim($block_item['title'])) > 0 ? '<h2>' . $block_item['title'] . '</h2>' : ''; ?>
    <?php if (isset($block_item['body']['value']) && !empty($block_item['body']['value'])) : ?>
      <?php echo $block_item['body']['value']; ?>
    <?php endif; ?>
    <ul>
      <?php if (!empty($block_item['links'])) : ?>
        <?php $block_item['links'][LANGUAGE_NONE] = array_reverse($block_item['links'][LANGUAGE_NONE]); ?>
        <?php foreach ($block_item['links'][LANGUAGE_NONE] as $row) : ?>
          <?php if(is_array($row) && !empty($row['url'])) : ?>
            <li><?php echo l((empty($row['title'])?$row['url']:$row['title']), $row['url']); ?></li>
          <?php endif; ?>
        <?php endforeach; ?>
      <?php endif; ?>
    </ul>
  </div>
<?php endforeach; ?>
<script>
  // Equal height for simple-columns.
  (function($) {
    var highest_column = 0;
    var columns = $('#block-simple-columns-simple-columns div.col');
    columns.each(function() {
      if ($(this).height() > highest_column) {
        highest_column = $(this).height();
      }
    });
    columns.css('height', highest_column);
  })(jQuery);
</script>
