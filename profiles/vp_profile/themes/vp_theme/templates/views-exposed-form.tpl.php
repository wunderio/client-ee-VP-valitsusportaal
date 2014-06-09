<?php

/**
 * @file
 * This template handles the layout of the views exposed filter form.
 *
 * Variables available:
 * - $widgets: An array of exposed form widgets. Each widget contains:
 * - $widget->label: The visible label to print. May be optional.
 * - $widget->operator: The operator for the widget. May be optional.
 * - $widget->widget: The widget itself.
 * - $sort_by: The select box to sort the view using an exposed form.
 * - $sort_order: The select box with the ASC, DESC options to define order. May be optional.
 * - $items_per_page: The select box with the available items per page. May be optional.
 * - $offset: A textfield to define the offset of the view. May be optional.
 * - $reset_button: A button to reset the exposed filter applied. May be optional.
 * - $button: The submit button for the form.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($q)): ?>
  <?php
    // This ensures that, if clean URLs are off, the 'q' is added first so that
    // it shows up first in the URL.
    print $q;
  ?>
<?php endif; ?>
<div class="views-exposed-form">
  <div class="views-exposed-widgets clearfix">
    <?php foreach ($widgets as $id => $widget):
      if ($id == 'filter-body_value') continue;
     ?>
      <div id="<?php print $widget->id; ?>-wrapper" class="views-exposed-widget views-widget-<?php print $id; ?>">
        <?php if (!empty($widget->label)): ?>
          <label>
            <?php print $widget->label; ?>
          </label>
        <?php endif; ?>
        <div class="views-widget">
          <?php print $widget->widget; ?>
        </div>
        <?php if (!empty($widget->operator)): ?>
          <div class="views-operator">
            <?php
              $title_op = '';
              if (isset($_GET['title_op'])) {
                $title_op = $_GET['title_op'];
              }
              if ($widget->id == 'edit-title')
                echo '
                <div class="form-item form-type-radio"><input type="radio" name="title_op" '.($title_op == 'allwords' || !isset($_GET['title_op']) ? 'checked="checked"' : '').' value="allwords" class="form-radio" id="edit-views-operator-3"> <label class="option" for="edit-views-operator-3">'.t('Contains all words').'</label></div>
                <div class="form-item form-type-radio"><input type="radio" name="title_op" '.($title_op == 'contains' ? 'checked="checked"' : '').' value="contains" class="form-radio" id="edit-views-operator-1"> <label class="option" for="edit-views-operator-1">'.t('Exact phrase').'</label></div>
                <div class="form-item form-type-radio"><input type="radio" name="title_op" '.($title_op == 'word' ? 'checked="checked"' : '').' value="word" class="form-radio" id="edit-views-operator-2"> <label class="option" for="edit-views-operator-2">'.t('Contains any word').'</label></div>
              ';
              elseif ($widget->id == 'edit-search') {
                echo '
                <div class="form-item form-type-radio"><input type="radio" name="search_op" '.($title_op == 'allwords' || !isset($_GET['search_op']) ? 'checked="checked"' : '').' value="allwords" class="form-radio" id="edit-views-operator-3"> <label class="option" for="edit-views-operator-3">'.t('Contains all words').'</label></div>
                <div class="form-item form-type-radio"><input type="radio" name="search_op" '.($title_op == 'contains' ? 'checked="checked"' : '').' value="contains" class="form-radio" id="edit-views-operator-1"> <label class="option" for="edit-views-operator-1">'.t('Exact phrase').'</label></div>
                <div class="form-item form-type-radio"><input type="radio" name="search_op" '.($title_op == 'word' ? 'checked="checked"' : '').' value="word" class="form-radio" id="edit-views-operator-2"> <label class="option" for="edit-views-operator-2">'.t('Contains any word').'</label></div>
              ';
              }
              else
                print $widget->operator;
            ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($widget->description)): ?>
          <div class="description">
            <?php print $widget->description; ?>
          </div>
        <?php endif; ?>
      </div>
    <?php endforeach; ?>
    <?php if (!empty($sort_by)): ?>
      <div class="views-exposed-widget views-widget-sort-by">
        <?php print $sort_by; ?>
      </div>
      <div class="views-exposed-widget views-widget-sort-order">
        <?php print $sort_order; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($items_per_page)): ?>
      <div class="views-exposed-widget views-widget-per-page">
        <?php print $items_per_page; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($offset)): ?>
      <div class="views-exposed-widget views-widget-offset">
        <?php print $offset; ?>
      </div>
    <?php endif; ?>
    <div class="views-exposed-widget views-submit-button">
      <?php print $button; ?>
    </div>
    <?php if (!empty($reset_button)): ?>
      <div class="views-exposed-widget views-reset-button">
        <?php print $reset_button; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
