<?php
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 */
?>
<div<?php print $attributes; ?>>
  <div class="header-content-wrapper">
    <?php if (isset($page['header'])) : ?>
      <?php print render($page['header']); ?>
    <?php endif; ?>

    <?php if (isset($page['content'])) : ?>
      <?php print render($page['content']); ?>
    <?php endif; ?>
  </div>

  <?php if (isset($page['footer'])) : ?>
    <?php print render($page['footer']); ?>
  <?php endif; ?>
</div>
