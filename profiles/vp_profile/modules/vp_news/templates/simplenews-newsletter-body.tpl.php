<?php

/**
 * Available variables:
 * - $build: Array as expected by render()
 * - $build['#node']: The $node object
 * - $title: Node title
 * - $language: Language code
 * - $view_mode: Active view mode
 * - $simplenews_theme: Contains the path to the configured mail theme.
 * - $simplenews_subscriber: The subscriber for which the newsletter is built.
 *   Note that depending on the used caching strategy, the generated body might
 *   be used for multiple subscribers. If you created personalized newsletters
 *   and can't use tokens for that, make sure to disable caching or write a
 *   custom caching strategy implemention.
 *
 * @see template_preprocess_simplenews_newsletter_body()
 */

/*
 * Donta for newsletter:
 * 1) Use margin and padding instead of margin-left, margin-right etc (gmail)
 */

hide($build['field_news_subject']);

// Subjects.
if (isset($build['field_news_subject'])) {
  $subjects_custom = '';
  foreach($build['field_news_subject']['#items'] as $subject) {
    if ($subject === end($build['field_news_subject']['#items'])) {
      $subjects_custom .= $subject['taxonomy_term']->name;
    }
    else {
      $subjects_custom .= $subject['taxonomy_term']->name . ', ';
    }
  }
}

// Created.
$created_custom = format_date($build['#node']->created, 'medium');

// Autori väljad. mm 03.06.2014.
$autor_output = '';

if (isset($build['#node']->field_name['und'][0]['value'])) {
  $autor_output = '<p><strong>' . t('Author') . '</strong>' . '<br />' . $build['#node']->field_name['und'][0]['value'];
}
if (isset($build['#node']->field_occupaction['und'][0]['value'])) {
  $autor_output .= '<br />' . $build['#node']->field_occupaction['und'][0]['value'];
}
if (isset($build['#node']->field_division['und'][0]['value'])) {
  $autor_output .= '<br />' . $build['#node']->field_division['und'][0]['value'];
}
if (isset($build['#node']->field_phone['und'][0]['value'])) {
  $autor_output .= '<br />' . $build['#node']->field_phone['und'][0]['value'];
}
if (isset($build['#node']->field_e_mail['und'][0]['value'])) {
  $autor_output .= '<br />' . $build['#node']->field_e_mail['und'][0]['email'];
}

// Close <p> tag if author info exists.
if ($autor_output !== ''):
  $autor_output .= '</p>';
endif;
// End autori väljad.

?>
<div align="center" style="background: #f6f5ef;">
  <table bgcolor="#fff" width="600" cellpadding="0" cellspacing="0" border="0" style="border: 0; border: 0 !important; background-color: #fff; width: 600px;">
    <tr>
      <td style="border: 0; border: 0 !important; font-size: 24px; color: #444; line-height: 24px; font-family: Tahoma, Verdana, Segoe, sans-serif; padding: 40px 0 20px 45px; "><?php print variable_get('site_name'); ?></td>
    </tr>
    <tr>
      <td align="left" bgcolor="#fff" style="background-color: #fff; border: 0; border: 0 !important; font-family: Tahoma, Verdana, Segoe, sans-serif; font-size: 13px; line-height: 20px; color: #333; padding: 0; margin: 0;">
        <div style="background: #fff; padding: 25px 45px;">
          <h2 style="color: #00668C; font-size: 20px; line-height: 36px; font-weight: normal; text-shadow: 0 0 4px rgba(0, 0, 0, 0.18);"><?php print $title; ?></h2>
          <div style="color: #686868; font-size: 11px; margin: 0 0 15px 0;"><?php print $created_custom; ?></div>
          <?php print render($build); ?>
          <!-- Autor -->
          <div align="left" style="background: #fff;"><?php print $autor_output; ?></div>
        </div>
      </td><!--Content-->
    </tr>