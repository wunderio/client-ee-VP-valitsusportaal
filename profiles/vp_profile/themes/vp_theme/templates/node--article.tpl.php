<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php print render($title_prefix); ?>
  <?php if (!$page && $title): ?>
    <header>
      <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
    </header>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
    <!--<footer class="submitted"><?php print $date; ?></footer>-->
  <?php endif; ?>
  <?php if ($content['field_content_type']['#bundle'] != 'article'): ?>
    <footer class="submitted"><?php print $date; ?></footer>
  <?php endif; ?>
  <div<?php print $content_attributes; ?>>
    <?php
    //Search Embed script from body.
    //CountEmbed scripts elements from body.
    $count_embed_scripts = substr_count($content['body']['0']['#markup'], '[Embed-script-');
    for ($number_of_embed_scripts = 1; $number_of_embed_scripts <= $count_embed_scripts; $number_of_embed_scripts++) {
      $embed_script_number = $number_of_embed_scripts - 1;
      if (strpos($content['body']['0']['#markup'], "[Embed-script-$number_of_embed_scripts]") !== FALSE) {
        //Replace embed tag with content.
        $content['body']['0']['#markup'] = str_replace("[Embed-script-$number_of_embed_scripts]", $content['field_embed_code']['#items']["$embed_script_number"]['value'], $content['body']['0']['#markup']);
      }
      //Remove Embed code field from footer output.
      $content['field_embed_code']["$embed_script_number"]['#markup'] = NULL;
    }
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    ?>
  </div>
  <?php if ($content['field_content_type']['#bundle'] == 'article'): ?>
    <?php if ($language == 'et'){ ?>
      <footer class="submitted"><div class="changed-date"><?php print t('Last updated').": "; print format_date($changed ,'custom','j. F Y'); ?></div></footer>
    <?php } else { ?>
      <footer class="submitted"><div class="changed-date"><?php print t('Last updated').": "; print format_date($changed ,'custom','j F Y'); ?></div></footer>
    <?php } ?>
  <?php endif; ?>
  <div class="clearfix">
    <?php if ($links = render($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print $links; ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>
