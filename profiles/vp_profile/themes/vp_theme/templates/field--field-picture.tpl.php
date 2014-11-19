<?php
module_load_include('module', 'imagefield_crop');
// Load gallery of this image.
$gallery = new EntityFieldQuery();
$gallery = $gallery->entityCondition('entity_type', 'node')
  ->fieldCondition('field_pictures', 'value', $variables['items'][0]['#entity']->item_id)
  ->range(0, 1)
  ->execute();
$gallery_nids = array_keys($gallery['node']);
$gallery = node_load($gallery_nids[0]);
?>

<div class="<?php print $classes; ?>"<?php print $attributes; ?>><?php
  foreach ($items as $delta => $item):
    $file = _imagefield_crop_file_to_crop($item['#item']['fid']);
    $orig_file_url = file_create_url($file->uri);
    $colorbox_file_url = image_style_url('1024x', $file->uri);
    $thumb_file_url = file_create_url($item['#item']['uri']);
    $id = 'cb-'.$item['#item']['fid'];
    // Author
    $author = '';
    if (isset($item['#entity']->field_author[LANGUAGE_NONE])) {
      $author = $item['#entity']->field_author[LANGUAGE_NONE][0]['value'];
    }
    if (empty($author) && isset($gallery->field_author[LANGUAGE_NONE][0]['value'])) $author = $gallery->field_author[LANGUAGE_NONE][0]['value'];
    if (!empty($author)) $author = ' | ' . $author;
    // Date
    $date = '';
    if (isset($item['#entity']->field_date[LANGUAGE_NONE][0]['value']) && !empty($item['#entity']->field_date[LANGUAGE_NONE][0]['value'])) {
      $date = date('d.m.Y', strtotime($item['#entity']->field_date[LANGUAGE_NONE][0]['value']));
    }
    elseif (isset($gallery->field_date[LANGUAGE_NONE][0]['value']) && !empty($gallery->field_date[LANGUAGE_NONE][0]['value'])) {
      $date = date('d.m.Y', strtotime($gallery->field_date[LANGUAGE_NONE][0]['value']));
    }
    // Title
    $title = '';
    if (isset($item['#entity']->field_title[LANGUAGE_NONE][0]['value']) && !empty($item['#entity']->field_title[LANGUAGE_NONE][0]['value'])) {
      $title = $item['#entity']->field_title[LANGUAGE_NONE][0]['value'];
    }
    $title = preg_replace('@[\s]{2,}@', ' ', strip_tags($title));
    ?>
    <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"<?php print $item_attributes[$delta]; ?>>

    <script type="text/javascript">
       (function($){$().ready(function(){
          var colorbox_<?php echo $item['#item']['fid']; ?> = $('#colorbox-<?php echo $id; ?>');
          colorbox_<?php echo $item['#item']['fid']; ?>.click(function(e){
            e.stopPropagation();
            e.preventDefault();
            if ($('body').hasClass('responsive-layout-mobile')) {
              return false;
            }
            $(this).colorbox({open:true,current:'{current} / {total}'});
          });
          colorbox_<?php echo $item['#item']['fid']; ?>.colorbox({
            initialHeight: Drupal.settings.colorbox.initialHeight,
            initialWidth: Drupal.settings.colorbox.initialWidth,
            innerWidth: $('#zone-content').width() * 0.8,
            reposition: Drupal.settings.colorbox.reposition,
            speed: Drupal.settings.colorbox.speed,
            transition: Drupal.settings.colorbox.transition,
            current: '{current} / {total}',
            href: '<?php echo $colorbox_file_url; ?>',
            rel: 'vp-gallery',
            title:
            '<div class="description2"><?php echo $date . $author; ?></div>' +
            '<?php echo (empty($title) ? '' : '<div class="caption_description">'.$title.'</div>'); ?>' +
            '<div class="download">' +
              '<a href="<?php echo $orig_file_url; ?>"><?php
                echo t('Download original');
              ?></a>' +
            '</div>',
            cbox_complete: function() {
              var $addthis_colorbox = $('#addthis_toolbox_colorbox');
              if ($addthis_colorbox.length===0) {
                $addthis_colorbox = $('<div id="addthis_toolbox_colorbox" class="addthis_toolbox addthis_toolbox_colorbox addthis_default_style addthis_16x16_style">' +
                '<a class="addthis_button_facebook"></a>' +
                '<a class="addthis_button_twitter"></a>' +
                '<a class="addthis_button_google_plusone_share"></a>' +
                '<a class="addthis_button_linkedin"></a>' +
              '</div>');
              }
              $addthis_colorbox.attr('addthis:title', '<?php echo $title; ?>');
              $addthis_colorbox.attr('addthis:url', '<?php $path = isset($_GET['q']) ? $_GET['q'] : '<front>';
print url($path, array('absolute' => TRUE)); ?>#colorbox-<?php echo $id; ?>');
              $('#cboxTitle').after($addthis_colorbox);
              addthis.toolbox('#addthis_toolbox_colorbox');

              $('#colorbox').addClass('has-toolbox');

              // Add alt tag.
              setTimeout(function() {
                var $addthis_colorbox_image = $('#cboxLoadedContent img');
                if ($addthis_colorbox_image.length) {
                  $addthis_colorbox_image.attr('alt', '<?php echo $item['#item']['alt']; ?>');
                }
              }, 200);
            }
          });
          /* Autoload colorbox if id is in url.*/
          var location = document.location + '';
          if (location.indexOf('#') !== -1) {
            var image_id_from_url = location.split('#')[1];
            if (image_id_from_url.indexOf('colorbox-cb-') === 0) {
              if ('colorbox-<?php echo $id; ?>' == image_id_from_url) {
                colorbox_<?php echo $item['#item']['fid']; ?>.colorbox({open:true,current:'{current} / {total}'});
              }
            }
          }

        });})(jQuery);
    </script>

    <a id="colorbox-<?php echo $id; ?>" class="vp-gallery-colorbox" rel="vp-gallery" href="#">
      <img src="<?php echo $thumb_file_url; ?>" alt="<?php echo $item['#item']['alt']; ?>" />
    </a>

    </div>
  <?php endforeach; ?>
</div>
