<?php

// Move date input beside radio button.
// $vars['widgets']['filter-created']->widget   -- video search
// $vars['widgets']['filter-created_1']->widget -- news search

if ($vars['form']['#id'] == 'views-exposed-form-news-news-page' || $vars['form']['#id'] == 'views-exposed-form-youtube-videos-page') {
  $find = '<label class="option" for="edit-date-4">  </label>';
  $replace = '<div class="option" id="form-label-filter-in-radio-field">' .
    (isset($vars['widgets']['filter-created']->widget) ? $vars['widgets']['filter-created']->widget : '') .
    (isset($vars['widgets']['filter-created_1']->widget) ? $vars['widgets']['filter-created_1']->widget : '') .
  '</div>';
  $vars['widgets']['filter-date']->widget = str_replace($find, $replace, $vars['widgets']['filter-date']->widget);
  $vars['widgets']['filter-date']->widget .= "<script>
    jQuery('#form-label-filter-in-radio-field').click(function() {
      jQuery('#edit-date-4').attr('checked', 'checked');
    });
  </script>";
  unset($vars['widgets']['filter-created']);
  unset($vars['widgets']['filter-created_1']);
}
