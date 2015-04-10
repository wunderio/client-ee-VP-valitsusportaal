<?php
/** 
 * This originally was done by Mekaia for vm.ee 
 * It expects taxonomy/term/568 to be Countries
 * and adds very specific VM stuff.
 * I added "outer" conditional that only runs the VM stuff
 * if we're dealing with vm.ee. mm. 10.04.2015.
 */
$use_vm_template = variable_get('rk_abi_vm_country_feed_template', 0);
if ($use_vm_template == 1) { // Check for vm.  
?>
    <?php
      // Original Mekaia logic, if else : endif;.
      $node = node_load($row->nid);
      if ((int) arg(2) === 568) :
      $url = 'node/'.$row->nid;
    ?>
      <item>
        <title><?php echo $node->title . ' - ' . 'Honorary Consuls'; ?></title>
        <link><?php echo url($url, array('query' => array('display' => 'estonian_honorary_consuls'), 'absolute' => TRUE)); ?></link>
        <description><?php echo htmlspecialchars(views_embed_view('country_and_representations_eh_feed', 'default', $node->nid), ENT_NOQUOTES); ?></description>
        <nid><?php echo $node->nid; ?></nid>
        <changed><?php echo format_date($node->changed, 'custom', 'Y-m-d H:i:s'); ?></changed>
        <eestiPubDate><?php echo format_date($node->created, 'custom', 'd.m'); ?></eestiPubDate>
        <guid isPermaLink="false">Honorary Consuls - <?php echo $node->nid; ?> at http://vm.ee</guid>
        <pubDate><?php echo format_date($node->created, 'custom', 'D, d M Y H:i:s'); ?> +0000</pubDate>
        <dc:creator />
        <vana_artikkel_id />
        <vana_kat_id />
      </item>
      <item>
        <title><?php echo $node->title . ' - ' . 'Estonian Representations'; ?></title>
        <link><?php echo url($url, array('query' => array('display' => 'estonian_representations'), 'absolute' => TRUE)); ?></link>
        <description><?php echo htmlspecialchars(views_embed_view('country_and_representations_er', 'default', $node->nid), ENT_NOQUOTES); ?></description>
        <nid><?php echo $node->nid; ?></nid>
        <changed><?php echo format_date($node->changed, 'custom', 'Y-m-d H:i:s'); ?></changed>
        <eestiPubDate><?php echo format_date($node->created, 'custom', 'd.m'); ?></eestiPubDate>
        <guid isPermaLink="false">Estonian Representations - <?php echo $node->nid; ?> at http://vm.ee</guid>
        <pubDate><?php echo format_date($node->created, 'custom', 'D, d M Y H:i:s'); ?> +0000</pubDate>
        <dc:creator />
        <vana_artikkel_id />
        <vana_kat_id />
      </item>
      <?php /*
      <item>
        <title><?php echo $node->title . ' - ' . 'Foreign Representations'; ?></title>
        <link><?php echo url($url, array('query' => array('display' => 'foreign_representations'), 'absolute' => TRUE)); ?></link>
        <description><?php echo htmlspecialchars(drupal_render(node_view($node, 'country_representations_fr')), ENT_NOQUOTES); ?></description>
        <nid><?php echo $node->nid; ?></nid>
        <changed><?php echo format_date($node->changed, 'custom', 'Y-m-d H:i:s'); ?></changed>
        <eestiPubDate><?php echo format_date($node->created, 'custom', 'd.m'); ?></eestiPubDate>
        <guid isPermaLink="false">Foreign Representations - <?php echo $node->nid; ?> at http://vm.ee</guid>
        <pubDate><?php echo format_date($node->created, 'custom', 'D, d M Y H:i:s'); ?> +0000</pubDate>
        <dc:creator />
        <vana_artikkel_id />
        <vana_kat_id />
      </item>
      */ ?>
      <item>
        <title><?php echo $node->title . ' - ' . 'Relations'; ?></title>
        <link><?php echo url($url, array('query' => array('display' => 'relations'), 'absolute' => TRUE)); ?></link>
        <description><?php echo htmlspecialchars(drupal_render(node_view($node, 'country_representations_r')), ENT_NOQUOTES); ?></description>
        <nid><?php echo $node->nid; ?></nid>
        <changed><?php echo format_date($node->changed, 'custom', 'Y-m-d H:i:s'); ?></changed>
        <eestiPubDate><?php echo format_date($node->created, 'custom', 'd.m'); ?></eestiPubDate>
        <guid isPermaLink="false">Relations - <?php echo $node->nid; ?> at http://vm.ee</guid>
        <pubDate><?php echo format_date($node->created, 'custom', 'D, d M Y H:i:s'); ?> +0000</pubDate>
        <dc:creator />
        <vana_artikkel_id />
        <vana_kat_id />
      </item>
      <item>
        <title><?php echo $node->title . ' - ' . 'Travel Info'; ?></title>
        <link><?php echo url($url, array('query' => array('display' => 'travel_info'), 'absolute' => TRUE)); ?></link>
        <description><?php echo htmlspecialchars(drupal_render(node_view($node, 'full')), ENT_NOQUOTES); ?></description>
        <nid><?php echo $node->nid; ?></nid>
        <changed><?php echo format_date($node->changed, 'custom', 'Y-m-d H:i:s'); ?></changed>
        <eestiPubDate><?php echo format_date($node->created, 'custom', 'd.m'); ?></eestiPubDate>
        <guid isPermaLink="false">Travel Info - <?php echo $node->nid; ?> at http://vm.ee</guid>
        <pubDate><?php echo format_date($node->created, 'custom', 'D, d M Y H:i:s'); ?> +0000</pubDate>
        <dc:creator />
        <vana_artikkel_id />
        <vana_kat_id />
      </item>
    <?php else : ?>
      <item>
        <title><?php print $title; ?></title>
        <link><?php print $link; ?></link>
        <description><?php print $description; ?></description>
        <nid><?php echo $node->nid; ?></nid>
        <changed><?php echo format_date($node->changed, 'custom', 'Y-m-d H:i:s'); ?></changed>
        <eestiPubDate><?php echo format_date($node->created, 'custom', 'd.m'); ?></eestiPubDate>
        <dc:creator />
        <vana_artikkel_id />
        <vana_kat_id />
        <?php print $item_elements; ?>
      </item>
    <?php endif; ?>


<?php
}
else { // Original <item> from views-view-row-rss.tpl.php from Views module. mm 10.04.2015.
?>
  <item>
    <title><?php print $title; ?></title>
    <link><?php print $link; ?></link>
    <description><?php print $description; ?></description>
    <?php print $item_elements; ?>
  </item>
<?php    
}
?>  

