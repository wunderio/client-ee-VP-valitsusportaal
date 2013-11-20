<?php

/**
 * @file
 * Default theme implementation to format the simplenews newsletter footer.
 *
 * Copy this file in your theme directory to create a custom themed footer.
 * Rename it to simplenews-newsletter-footer--[tid].tpl.php to override it for a
 * newsletter using the newsletter term's id.
 *
 * @todo Update the available variables.
 * Available variables:
 * - $build: Array as expected by render()
 * - $build['#node']: The $node object
 * - $language: language code
 * - $key: email key [node|test]
 * - $format: newsletter format [plain|html]
 * - $unsubscribe_text: unsubscribe text
 * - $test_message: test message warning message
 * - $simplenews_theme: path to the configured simplenews theme
 *
 * Available tokens:
 * - [simplenews-subscriber:unsubscribe-url]: unsubscribe url to be used as link
 *
 * Other available tokens can be found on the node edit form when token.module
 * is installed.
 *
 * @see template_preprocess_simplenews_newsletter_footer()
 */
?>
  <tr>
    <td style="border: 0; border: 0 !important; padding: 15px 0 40px 0; text-align: center; font-family: Tahoma, Verdana, Segoe, sans-serif; font-size 10px">
      <?php if (!$opt_out_hidden): ?>
        <?php if ($format == 'html'): ?>
          <p style="margin: 0 0 10px 0; font-family: Tahoma, Verdana, Segoe, sans-serif;"><a href="mailto:press@riik.ee" style="color: #00698C">press@riik.ee</a>&nbsp;&nbsp;Faks: 693 5707&nbsp;&nbsp;Telefon: 693 5710</p>
          <p class="newsletter-footer" style="font-size: 11px; font-family: Tahoma, Verdana, Segoe, sans-serif;"><a href="[simplenews-subscriber:unsubscribe-url]" style="color: #686868; text-decoration: underline;"><?php print $unsubscribe_text ?></a></p>
        <?php else: ?>
          <p style="font-size: 11px; font-family: Tahoma, Verdana, Segoe, sans-serif;">-- <?php print $unsubscribe_text ?>: [simplenews-subscriber:unsubscribe-url]</p>
        <?php endif ?>
      <?php endif; ?>

      <?php if ($key == 'test'): ?>
       <p style="font-size: 11px; font-family: Tahoma, Verdana, Segoe, sans-serif; color: #686868">- - - <?php print $test_message ?> - - -</p>
      <?php endif ?>
    </td><!--Footer-->
  </tr>
  </table>
</div>
