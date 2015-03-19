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
      hide($content['field_sap_ametikood']);
    ?>
    <?php print render($content['field_profile_photo']); ?>
    <div class="field-group-format group_main field-group-div group-main speed-none effect-none">
      <h3><span><?php print $title; ?></span></h3>
      <?php 
        // Get departments where department name should not be displayed.
        $dept_tid = (isset($content['field_department']['#object']->field_department[LANGUAGE_NONE][0]['tid'])) ? $content['field_department']['#object']->field_department[LANGUAGE_NONE][0]['tid'] : 0;
        $hide_dept = variable_get('rk_abi_contact_popup_depts_to_hide');
        // Empty array for hide_dept gives "needs to be array" error in array_keys.
        if (empty($hide_dept)) {
          // Give it an empty array to avoid "array expected" notice below.
          $dept_check = array();
        }
        else {
          $dept_check = array_keys($hide_dept);
        }
        // Check if this department name should be unset in rendered contact.
        if (in_array($dept_tid, $dept_check)) {
          unset($content['field_department']);
        }      
        if (isset($content['field_department'])) {
          print render($content['field_department']);
        }
      ?>
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
