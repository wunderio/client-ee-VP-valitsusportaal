<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function vp_theme_select_as_links($vars) {
  $element = $vars['element'];

  $output = '';
  $name = $element['#name'];

  // Collect selected values so we can properly style the links later
  $selected_options = array();
  if (empty($element['#value'])) {
    if (!empty($element['#default_values'])) {
      $selected_options[] = $element['#default_values'];
    }
  }
  else {
    $selected_options[] = $element['#value'];
  }

  // Add to the selected options specified by Views whatever options are in the
  // URL query string, but only for this filter
  $urllist = parse_url(request_uri());
  if (isset($urllist['query'])) {
    $query = array();
    parse_str(urldecode($urllist['query']), $query);
    foreach ($query as $key => $value) {
      if ($key != $name) {
        continue;
      }
      if (is_array($value)) {
        // This filter allows multiple selections, so put each one on the selected_options array
        foreach ($value as $option) {
          $selected_options[] = $option;
        }
      }
      else {
        $selected_options[] = $value;
      }
    }
  }

  // Clean incoming values to prevent XSS attacks
  if (is_array($element['#value'])) {
    foreach($element['#value'] as $index => $item) {
      unset($element['#value'][$index]);
      $element['#value'][filter_xss($index)] = filter_xss($item);
    }
  }
  else if (is_string($element['#value'])) {
    $element['#value'] = filter_xss($element['#value']);
  }

  // Go through each filter option and build the appropriate link or plain text
  foreach ($element['#options'] as $option => $elem) {
    // Check for Taxonomy-based filters
    if (is_object($elem)) {
      $slice = array_slice($elem->option, 0, 1, TRUE);
      list($option, $elem) = each($slice);
    }

    /*
     * Check for optgroups.  Put subelements in the $element_set array and add a group heading.
     * Otherwise, just add the element to the set
     */
    $element_set = array();
    if (is_array($elem)) {
      $element_set = $elem;
    }
    else {
      $element_set[$option] = $elem;
    }

    $links = array();
    $multiple = !empty($element['#multiple']);

    foreach ($element_set as $key => $value) {
      // Custom ID for each link based on the <select>'s original ID
      $id = drupal_html_id($element['#id'] . '-' . $key);
      $elem = array(
        '#id' => $id,
        '#markup' => '',
        '#type' => 'bef-link',
        '#name' => $id,
      );
      if (array_search($key, $selected_options) === FALSE) {
        if ($_GET['q'] === 'logo-file') {
          $elem['#children'] = l($value, 'logo-file/taxonomy', array('query' => array($name => $key)));
        }
        elseif ($_GET['q'] === 'medium') {
          $elem['#children'] = l($value, 'medium/taxonomy', array('query' => array($name => $key)));
        }
        else {
          $elem['#children'] = l($value, bef_replace_query_string_arg($name, $key, $multiple));
        }
        $output .= theme('form_element', array('element' => $elem));
      } else {
        $elem['#children'] = l($value, bef_replace_query_string_arg($name, $key, $multiple, true));
        _form_set_class($elem, array('bef-select-as-links-selected'));
        $output .= str_replace('form-item', 'form-item selected', theme('form_element', array('element' => $elem)));
      }
    }
  }

  $properties = array(
    '#description' => isset($element['#bef_description']) ? $element['#bef_description'] : '',
    '#children' => $output,
  );

  $output = '<div class="bef-select-as-links">';
  $output .= theme('form_element', array('element' => $properties));
  if (!empty($element['#value'])) {
    if (is_array($element['#value'])) {
      foreach ($element['#value'] as $value) {
        $output .= '<input type="hidden" name="' . check_plain($name) . '[]" value="' . check_plain($value) . '" />';
      }
    }
    else {
      $output .= '<input type="hidden" name="' . check_plain($name) . '" value="' . check_plain($element['#value']) . '" />';
    }
  }
  $output .= '</div>';

  return $output;
}

/**
 * Implements theme_menu_link().
 *
 * Add id to for every menu item and copy a tag attributes to li tag.
 */
function vp_theme_menu_link($variables) {
  // Add id for every menu item (faster and better hooking for megamenu access).
  $li_tag_classes = (array) $variables['element']['#attributes']['class'];
  $variables['element']['#attributes']['id'] = 'menu-mlid-' . $variables['element']['#original_link']['mlid'];

  // Copy a tag attributes to li tag (need to have has-separator class on li tag in portal navigation zone).
  $a_tag_classes = isset($variables['element']['#localized_options']['attributes']['class']) ? (array) $variables['element']['#localized_options']['attributes']['class'] : array();
  $li_tag_classes = (array) $variables['element']['#attributes']['class'];
  $joined_classes = array_merge($a_tag_classes, $li_tag_classes);
  $variables['element']['#attributes']['class'] = $joined_classes;

  return theme_menu_link($variables);
}

/**
 * Add Open Graph meta tags for Facebook sharing.
 */
function add_facebook_meta_tags() {
  global $base_url;

  $site_name = variable_get('site_name');

  // Add og:title meta tag.
  $image_og_title = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'property' => 'og:title',
      'content' => trim(drupal_get_title()) . (!empty($site_name) ? ' | ' . $site_name : ''),
    ),
  );

  // Add og:image meta tag.
  // Needs to be atleast 200x200.
  $image_og_meta = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'property' => 'og:image',
      'content' => $base_url . '/' . drupal_get_path('theme', 'vp_theme') . '/logo-fb.png',
    ),
  );

  // Add og:description meta tag.
  $description_og_meta = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'property' => 'og:description',
      'content' => variable_get('site_slogan'),
    ),
  );

  // Add og:url meta tag.
  global $base_root;
  $link = $base_root . request_uri();

  $description_og_url = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'property' => 'og:url',
      'content' => $link,
    ),
  );

  if (arg(0) == 'node' && (int) arg(1) > 0) {
    $node = node_load(arg(1));

    // Check if node object is created. This avoids EntityMalformedException from $teaser_object node_view line.
    if ($node !== FALSE) {    
      $teaser_object = node_view($node, 'view_mode_facebook');
      $teaser = '';
      if (isset($teaser_object['body'][0]['#markup'])) {
        $teaser = str_replace("\n", ' ', strip_tags($teaser_object['body'][0]['#markup']));
      }
      if ($node->type === 'news') {
        if (!empty($node->field_cover_image)) {
          $image_og_meta['#attributes']['content'] = image_style_url('large', $node->field_cover_image['und'][0]['uri']);
        }
      }

      if (!empty($teaser)) {
        $description_og_meta['#attributes']['content'] = $teaser;
      }
    }
  }

  drupal_add_html_head($image_og_title, 'image_og_title');
  drupal_add_html_head($image_og_meta, 'image_og_meta');
  drupal_add_html_head($description_og_meta, 'description_og_meta');
  drupal_add_html_head($description_og_url, 'description_og_url');
}

/**
 * Implements hook_preprocess_html().
 *
 * Add extra body classes.
 */
 function vp_theme_preprocess_html(&$vars) {

  // Avoid implode error in theme.inc template_process().
  if (!isset($vars['classes_array'])) {
    $vars['classes_array'] = 'vabariik';
  }


  if (isset($vars['page']['content']['content']['sidebar_first'])) {
    $vars['attributes_array']['class'][] = 'has-sidebar-first';

    foreach ($vars['page']['content']['content']['sidebar_first'] as $key => $item) {
      if (strpos($key, '#') === FALSE) {
        if (isset($item['#block']) && isset($item['#block']->css_class) && $item['#block']->css_class === 'block-menu-l4') {
          $vars['attributes_array']['class'][] = 'has-block-menu-l4';
        }
      }
    }
  }

  if (isset($vars['page']['content']['content']['sidebar_second'])) {
    $vars['attributes_array']['class'][] = 'has-sidebar-second';
  }

  add_facebook_meta_tags();

  // Add IE8 css.
  drupal_add_css(drupal_get_path('theme', 'vp_theme') . '/css/lte-ie8.css', array(
    'group' => 9999,
    'weight' => 9999,
    'browsers' => array(
      'IE' => 'lte IE 8',
      '!IE' => FALSE
      ),
    'preprocess' => FALSE,
    'every_page' => TRUE,
  ));

  // Add print css.
  drupal_add_css(drupal_get_path('theme', 'vp_theme') . '/css/print.css', array(
    'group' => 9999+1,
    'weight' => 9999+1,
    'media' => 'print',
    'preprocess' => FALSE,
    'every_page' => TRUE,
  ));
}

/**
 * Implements hook_preprocess_page().
 */
function vp_theme_preprocess_page(&$variables) {
  if (drupal_is_front_page()) {
    $variables['page']['content']['content']['#suffix'] = '<script>
      (function($) {
        var equal_height_blocks_in_zone_content_wrap = function() {
          var highest = 0;
          var $blocks = $("#zone-content-wrapper .block");
          $blocks.css("height", "auto");
          $blocks.each(function(i) {
            if (highest < $(this).height()) {
              highest = $(this).height();
            }
          });
          $blocks.css("height", highest);
        }

        equal_height_blocks_in_zone_content_wrap();

        // Reload again in case there is image content.
        $(window).load(function() {
          equal_height_blocks_in_zone_content_wrap();
        });
      })(jQuery);
    </script>';

    foreach ($variables['page']['content']['content']['content'] as $key => &$var) {
      if (isset($var['#block']->css_class) && $key !== 'delta_blocks_messages') {
        $var['#block']->css_class = 'first-content-block-in-region';
        break;
      }
    }
  }
}

/**
 * Returns HTML for a query pager.
 *
 * Modify the omega pager function to group first, previous and next, last links together.
 *
 * @param $vars
 *   An associative array containing:
 *   - tags: An array of labels for the controls in the pager.
 *   - element: An optional integer to distinguish between multiple pagers on
 *     one page.
 *   - parameters: An associative array of query string parameters to append to
 *     the pager links.
 *   - quantity: The number of pages in the list.
 *
 * @ingroup themeable
 */
function vp_theme_pager($vars) {
  global $pager_page_array, $pager_total;

  $tags = $vars['tags'];
  $element = $vars['element'];
  $parameters = $vars['parameters'];
  $quantity = $vars['quantity'];

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }

  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first || $li_previous) {
      $items[] = array(
        'class' => array('pager-group-first'),
        'data' => '<ul>' . ($li_first ? '<li class="pager-item pager-first">' . $li_first . '</li>' : '') . ($li_previous ? '<li class="pager-item pager-previous">' . $li_previous . '</li>' : '') . '</ul>',
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }

      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }

        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-item', 'pager-current'),
            'data' => '<span>' . $i . '</span>',
          );
        }

        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }

      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }

    // End generation.
    if ($li_next || $li_last) {
      $items[] = array(
        'class' => array('pager-group-last'),
        'data' => '<ul>' . ($li_next ? '<li class="pager-item pager-next">' . $li_next . '</li>' : '') . ($li_last ? '<li class="pager-item pager-last">' . $li_last . '</li>' : '') . '</ul>',
      );
    }

    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager', 'clearfix')),
    ));
  }
}

/**
* Implements hook_alpha_preprocess_block()
*
* There is an issue with using Path Breadcrumb module with Delta blocks.
* See drupal.org/node/1777644 for description of issue and fix.
*/
function vp_theme_alpha_preprocess_block(&$vars) {
  if ($vars['block']->module == 'delta_blocks' && $vars['block']->delta == 'breadcrumb') {
    $data = array(
      '#theme' => 'breadcrumb',
      '#breadcrumb' => drupal_get_breadcrumb(),
    );

    $last = $data['#breadcrumb'][count($data['#breadcrumb'])-1];
    if(!empty($last) && strpos($last, '<a') === FALSE && strlen($last) > 50) {
      $data['#breadcrumb'][count($data['#breadcrumb'])-1] = substr($data['#breadcrumb'][count($data['#breadcrumb'])-1], 0, 50) . '...';
    }

    $active_trail = array();
    $obj = menu_get_object('node');
    if ($obj && $obj->type === 'article') {
      $trail = menu_get_active_trail();
      unset($trail[count($trail) - 1]);
      foreach ($trail as $menu_item) {
        $active_trail[] = l($menu_item['title'], $menu_item['href']);
      }
      $active_trail[] = $data['#breadcrumb'][count($data['#breadcrumb'])-1];
      $data['#breadcrumb'] = $active_trail;
    }

    $breadcrumb = render($data);
    $vars['content'] = $breadcrumb;
  }
}
         
function vp_theme_preprocess_date_views_pager(&$vars) {
  global $language;

  if ($vars['plugin']->view->name == 'weekly_schedule') {
    // Limit pager.
    $lang_condition = db_or();
    $lang_condition->condition('d.language', LANGUAGE_NONE);
    $lang_condition->condition('d.language', $language->language);
    $min = db_select('field_data_field_weekly_schedule_date', 'd')
      ->condition($lang_condition)
      ->fields('d', array('field_weekly_schedule_date_value'))
      ->range(0, 1)
      ->orderBy('field_weekly_schedule_date_value', 'ASC')
      ->execute()
      ->fetchCol();
    $min = date('U', strtotime($min[0]));
    $max = db_select('field_data_field_weekly_schedule_date', 'd')
      ->condition($lang_condition)
      ->fields('d', array('field_weekly_schedule_date_value'))
      ->range(0, 1)
      ->orderBy('field_weekly_schedule_date_value', 'DESC')
      ->execute()
      ->fetchCol();
    $max = date('U', strtotime($max[0]));
    $current_min = $vars['plugin']->view->argument['field_weekly_schedule_date_value']->min_date->format('U');
    $current_max = $vars['plugin']->view->argument['field_weekly_schedule_date_value']->max_date->format('U');

    // Make sure the before or next link does not jump a year. mm 9jan15.
    $filter_year_week = (isset($_GET['week'])) ? check_plain($_GET['week']) : date('Y-\WW');
    $arrFilter = explode('-W', $filter_year_week);
    $filter_year = $arrFilter[0]; // ex. 2015
    $filter_week = $arrFilter[1]; // ex. 02 as in W02

    // From week 02, go back to previous year's W53.
    if ((int) $filter_week === 02) {
      $filter_year_minus_one = (int) $filter_year - 1;
      $prev_arg = $filter_year_minus_one . '-W53';
      $next_arg = $filter_year . '-W03';
      $vars['prev_url'] = date_pager_url($vars['plugin']->view, NULL, $prev_arg);
      $vars['next_url'] = date_pager_url($vars['plugin']->view, NULL, $next_arg);
    } 
    
    // From 52 go to 53 of the filter year. (ex. 2014-W53 NOT 2015-W53 which is what was happening).
    if ((int) $filter_week === 52) {
      $prev_arg = $filter_year . '-W51';
      $next_arg = $filter_year . '-W53';
      $vars['prev_url'] = date_pager_url($vars['plugin']->view, NULL, $prev_arg);
      $vars['next_url'] = date_pager_url($vars['plugin']->view, NULL, $next_arg);
    }
    
    if ($current_min < $min && $current_min < time()) {
      unset($vars['prev_url']);
    }
    if ($current_max > $max && $current_max > time()) {
      unset($vars['next_url']);
    }

    // Change naigation title.
    $vars['nav_title'] = date('d.m.Y', strtotime($vars['plugin']->view->date_info->date_range[0]->originalTime)).' - '.date('d.m.Y', strtotime($vars['plugin']->view->date_info->date_range[1]->originalTime));
  }
}

/**
 * Implements theme_menu_tree().
 *
 * Remove white-space from <li> tags in menus for more precise spacing when
 * using display: inline-block.
 */
function vp_theme_menu_tree($variables) {
  return '<ul class="menu">' . str_replace(array("\r", "\n"), '', $variables['tree']) . '</ul>';
}

/**
 * Implements theme_preprocess_field().
 */
function vp_theme_preprocess_field(&$variables, $hook) {
  global $language;

  if ($variables['element']['#field_name'] == 'field_position' && $language->language !== 'et') {
    $variables['items'][0]['#markup'] = '';
  }
  if ($variables['element']['#field_name'] == 'field_position_in_english' && $language->language !== 'en') {
    $variables['items'][0]['#markup'] = '';
  }
  if ($variables['element']['#field_name'] == 'field_position_in_russian' && $language->language !== 'ru') {
    $variables['items'][0]['#markup'] = '';
  }
}

/**
 * Implements theme_process_field().
 */
function vp_theme_process_field(&$variables, $hook) {
  // Add tablet specific classes for gallery.
  if ($variables['element']['#field_name'] == 'field_pictures' && $variables['element']['#field_type'] == 'field_collection') {
    drupal_add_js(drupal_get_path('theme', 'vp_theme') .'/js/tablet_gallery.js', array('scope' => 'footer'));
  }
}

/**
 * Implements theme_form_alter().
 *
 * Better login screen.
 */
function vp_theme_form_alter( &$form, &$form_state, $form_id ) {

  if (in_array($form_id, array('user_login', 'user_login_block', 'user_pass'))) {
    // Move the digidoc and mobileid buttons to the bottom.
    $form['actions']['#weight'] = 1;
    $form['digidoc_auth_service']['#weight'] = -1;

    // Placeholder.
    if ($form_id === 'user_pass') {
      $form['name']['#attributes']['placeholder'] = t('Username or e-mail address');
    }
    else {
      $form['name']['#attributes']['placeholder'] = t('Username');
    }
    $form['pass']['#attributes']['placeholder'] = t('Password');

    // Add "Request new password" link to submit button.
    if ($form_id !== 'user_pass') {
      $form['actions']['submit']['#prefix'] = l(t('Request new password'), 'user/password');
    }

    // Add placeholder support for older browsers.
    drupal_add_js(drupal_get_path('theme', 'vp_theme') .'/js/jquery.placeholder.js', array('scope' => 'footer'));
    drupal_add_js('jQuery(":input[placeholder]").placeholder();;', array('type' => 'inline', 'scope' => 'footer'));
  }
}

/**
 * Implements theme_preprocess_entity().
 */
function vp_theme_preprocess_entity(&$variables) {
  // Remove image html if the image is not set.
  if ($variables['elements']['#bundle'] == 'field_pictures') {
    if (!isset($variables['field_picture'])) {
      $variables = array();
    }
  }
}

/**
 * Implements theme_preprocess_simplenews_block().
 *
 * Translate multi signup block body message / i18n
 * https://drupal.org/node/1458538#comment-7389624
 */
function vp_theme_preprocess_simplenews_multi_block(&$vars) {
  $vars['message'] = t($vars['message']);
}


/**
 * Implements theme_image_formatter().
 *
 * Default image for vp_contacts.
 * Added image work for frontpage_first_news_thumbnail. mm 3feb15.
 */
function vp_theme_image_formatter($variables) {
  $item = $variables['item'];
  $image = array(
    'path' => $item['uri'],
  );

  if (array_key_exists('alt', $item)) {
    $image['alt'] = $item['alt'];
  }

  if (isset($item['attributes'])) {
    $image['attributes'] = $item['attributes'];
  }

  if (isset($item['width']) && isset($item['height'])) {
    $image['width'] = $item['width'];
    $image['height'] = $item['height'];
  }

  // Do not output an empty 'title' attribute.
  if (isset($item['title']) && drupal_strlen($item['title']) > 0) {
    $image['title'] = $item['title'];
  }

  if ($variables['image_style']) {
    $image['style_name'] = $variables['image_style'];
    $output = theme('image_style', $image);
  }
  else {
    $output = theme('image', $image);
  }

  // Default image for vp_contacts.
  if ($variables['image_style'] === 'search_contact_thumbnail' && strpos($image['path'], 'no-profile-image') !== FALSE) {
    $style = image_style_load('search_contact_thumbnail');
    $dimensions = array();
    image_style_transform_dimensions('search_contact_thumbnail', $dimensions);
    $output = '<img src="/' . drupal_get_path('module', 'vp_contact') . '/no-profile-image_w104.png" height="'.$dimensions['height'].'" width="'.$dimensions['width'].'" alt="" />';
  }

  // Force relative path for front page cover image.
  if (isset($variables['image_style']) && $variables['image_style'] === 'frontpage_first_news_thumbnail') {
    global $base_root;
    $dimensions = array();
    image_style_transform_dimensions('frontpage_first_news_thumbnail', $dimensions);
    $image['style_name'] = $variables['image_style'];
    $image['width'] = $dimensions['width'];
    $image['height'] = $dimensions['height'];
    $output = theme('image_style', $image);
    // Get rid of protocol and http_host. This helps html_export save images for static copy.
    $output = str_replace($base_root, '', $output);
  }

  // The link path and link options are both optional, but for the options to be
  // processed, the link path must at least be an empty string.
  if (isset($variables['path']['path'])) {
    $path = $variables['path']['path'];
    $options = isset($variables['path']['options']) ? $variables['path']['options'] : array();
    // When displaying an image inside a link, the html option must be TRUE.
    $options['html'] = TRUE;
    $output = l($output, $path, $options);
  }

  return $output;
}


/**
 * Implements hook_preprocess_node().
 * Removing author as per bad security idea to advertise usernames.
 */
function vp_theme_preprocess_node(&$vars) {
  // Look for author- in $vars['attributes_array']['class'] and unset it.
  foreach ($vars['attributes_array']['class'] as $key => $value) {
    if (strpos($value, 'author-') !== FALSE) {
      unset($vars['attributes_array']['class'][$key]);
    }
  }
}


/**
 * Implements theme_html_head_alter().
 * Removes the Generator tag from the head for Drupal 7
 * From https://docs.acquia.com/articles/hiding-fact-your-site-runs-drupal.
 */
function vp_theme_html_head_alter(&$head_elements) {
  unset($head_elements['system_meta_generator']);
}


/**
 * Implements template_preprocess_simplenews_newsletter_body().
 */
function vp_theme_preprocess_simplenews_newsletter_body(&$vars) {

  // Add links block for newsletter.
  if (isset($vars['build']['#node']->field_links[LANGUAGE_NONE]) 
      && count($vars['build']['#node']->field_links[LANGUAGE_NONE]) >= 1) {

    $build = array(
      '#theme' => 'newsletter_list_title',
      '#pealkiri' => t('Links'),
    );
    $links = drupal_render($build);

    $build = array(
      '#theme' => 'newsletter_list_wrapper_open',
    );
    $links .= drupal_render($build);

    foreach ($vars['build']['#node']->field_links[LANGUAGE_NONE] as $key => $value) {
      $build = array(
        '#theme' => 'newsletter_list_item',
        '#markup' => l($value['url'], $value['url']),
      );
      $links .= drupal_render($build);      
    }

    $build = array(
      '#theme' => 'newsletter_list_wrapper_close',
    );
    $links .= drupal_render($build);
  }
  else {
    $links = '';
  }

  // Variable passed to simplenews template.
  $vars['vp_theme_newsletter_links'] = $links;

  // Add files block for newsletter.
  if (isset($vars['build']['#node']->field_files['und']) 
      && count($vars['build']['#node']->field_files['und']) >= 1) {

    $build = array(
      '#theme' => 'newsletter_list_title',
      '#pealkiri' => t('Files'),
    );
    $files = drupal_render($build);    

    $build = array(
      '#theme' => 'newsletter_list_wrapper_open',
    );
    $files .= drupal_render($build);

    foreach ($vars['build']['#node']->field_files['und'] as $key => $value) {
      if ($value['display'] == 1) {
        $build = array(
          '#theme' => 'newsletter_list_item',
          '#markup' => l($value['filename'], file_create_url($value['uri']), array()),
        );
        $files .= drupal_render($build); 
      }
    }

    $build = array(
      '#theme' => 'newsletter_list_wrapper_close',
    );
    $files .= drupal_render($build);
  }
  else {
    $files = '';
  }

  // Variable passed to simplenews template.
  $vars['vp_theme_newsletter_files'] = $files;

  // Check body and make relative file links absolute.
  // This is a fix for conflict with locale module locale_language_url_rewrite_url
  // Where the language prefix was incorrectly being put into file paths.
  if (isset($vars['build']['#node']->body['und'][0]['value'])) {
    // Add post_render function to clean paths to files.
    $vars['build']['#post_render'] = array('vp_theme_newsletter_clean_link_path');
  }
}


/**
 * Make sure paths to files are correct.
 * DOMDocument pinched from linkmeta module.
 * @param $children
 *   string - $elements['#children'] from drupal_render.
 * @param $elements
 *   array - $elements from drupal_render.
 * @return
 *   string - Altered version of $elements['#children'] or original $children.
 */
function vp_theme_newsletter_clean_link_path($children, $elements) {

  // Expects $children to be a string of html.
  if (!empty($children)) {

    $dom = new DOMDocument();
    $dom->loadHTML($children);
    // $dom->encoding = 'UTF-8';

    $a_tags = $dom->getElementsByTagName('a');
    foreach ($a_tags as $a) {
      $url = $a->getAttribute('href');
      // Look for different kinds of link extensions.
      $current_url = pathinfo(strtok($url, '?'));
      $extension = '';
      // @todo. Check that file extension is amongst allowed file extensions?
      if (isset($current_url['extension']) 
          && isset($current_url['dirname']) 
          && substr($url, 0, 1) == '/' ) {
        // Make file link absolute.
        $path_from_files = str_replace('sites/default/files', '', $current_url['dirname']);
        $href = file_create_url('public://' . $path_from_files . '/' . $current_url['basename']);
        $a->setAttribute('href', $href);
      }   
    }
      
    $children_clean = $dom->saveHTML();

    return $children_clean;
  }
  else {
    return $children;
  }

}


/**
 * Modified from delta_blocks.theme.inc.
 */
function vp_theme_delta_blocks_logo($variables) {
  if ($variables['logo']) {

    // Just making sure image variable is instantiated.
    $image = $variables['logo'];

    // Make logo path relative by stripping host out.
    if (isset($_SERVER['HTTP_HOST'])) {
      $protocol = (isset($_SERVER['HTTPS']) && strtolower($_SERVER['HTTPS']) == 'on') ? 'https://' : 'http://';
      $image = str_replace($protocol . $_SERVER['HTTP_HOST'], '', $variables['logo']);
    }

    $image = array(
      '#theme' => 'image',
      '#path' => $image,
      '#alt' => $variables['site_name'],
    );
    
    $image = render($image);

    if ($variables['logo_linked']) {
      $options['html'] = TRUE;
      $options['attributes']['id'] = 'logo';
      $options['attributes']['title'] = t('Return to the @name home page', array('@name' => $variables['site_name']));
      
      // Do not redundantly link front page to front page.
      if (!drupal_is_front_page()) {
        $image = l($image, '<front>', $options);
      }
    }
  
    return '<div class="logo-img">' . $image . '</div>';
  }
}


