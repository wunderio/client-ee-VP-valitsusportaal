<?php foreach ($themed_rows as $count => $row): ?>
  <embassy>
<?php foreach ($row as $field => $content): ?>
    <<?php print $xml_tag[$field]; ?>><?php print $content; ?></<?php print $xml_tag[$field]; ?>>
<?php endforeach; ?>
  </embassy>
<?php endforeach; ?>
