<?php
/**
 * @file
 * Alpha's theme implementation to display a single Drupal page.
 * Using to build a one page static page to use in case of ddos.
 */
?>
<img src="/profiles/vp_profile/themes/vp_theme/logo.png" alt="Vabariigi Valitsus">
<div<?php print $attributes; ?>>
  <div class="header-content-wrapper">
    <?php if (isset($page['header'])) : ?>
      <?php // print render($page['header']); ?>
    <?php endif; ?>

    <?php if (isset($page['content'])) : ?>
      <?php 
        print render($page['content']); 
        // print_r($page['content']);exit;
      ?>
    <?php endif; ?>
  </div>

  <div id="zone-footer">
    &copy Vabariigi Valitsus
  </div>

  <?php if (isset($page['footer'])) : ?>
    <?php //print render($page['footer']); ?>
  <?php endif; ?>
</div>

