<?php
/**
 * This template is used to assemble all nodes selected during newsletter
 * creation with Simplenews Content Selection.
 */
?>

<div id="newsletter">
  <?php if ($toc): ?>
    <div id="toc">
      <?php print $toc; ?>
    </div>
  <?php endif; ?>

  <?php foreach ($taxonomy_heading as $key => $value): ?>
    <?php if ($value['has_contents'] === TRUE): ?>
  	  <table>
  	  <td colspan="2" align="left"><h2 style="font-size:24px;font-weight:bold;"><font color="#00668C"><b><?php print $value['heading']; ?></b></font></h2></td>
	  <?php foreach ($sisud[$key] as $node): ?>
	    <tr><td width="27%"><?php print format_date(strtotime($node['#node']->field_weekly_schedule_date[LANGUAGE_NONE][0]['value']), $type = 'eelinfo', $format = '', $timezone = $node['#node']->field_weekly_schedule_date[LANGUAGE_NONE][0]['timezone'], $langcode = $node['#node']->language); ?></td><td><?php print render($node); ?></td></tr>
	  <?php endforeach; ?>
	  </table>
	  <br><br>
    <?php endif; ?>
  <?php endforeach; ?>
</div>
