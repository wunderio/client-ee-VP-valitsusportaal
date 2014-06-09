<?php
global $language;
?>
<div class="<?php print $classes; ?> clearfix">

  <div class="content">
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['field_profile_photo']);
      hide($content['field_position']);
      hide($content['field_department']);
      hide($content['comments']);
      hide($content['links']);
    ?>
    <?php print render($content['field_profile_photo']); ?>
    <div class="field-group-format group_main field-group-div group-main  speed-none effect-none">
      <h3><span><?php print $title; ?></span></h3>
      <?php print render($content['field_department']); ?>
      <?php if ($language->language !== 'et') print render($content['field_position']); ?>
      <?php print render($content['field_status']); ?>
    </div>
    <?php
      foreach($content as &$item) {
        if (isset($item['#prefix'])) {
          $item['#prefix'] = preg_replace ('/id=".*"/U', '', $item['#prefix']);
        }
      }
      print render($content);
    ?>
  </div>

</div>
