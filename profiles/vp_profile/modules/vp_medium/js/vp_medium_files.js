(function($){
  var $body = $('body');
  var $medium_view = $("#block-system-main div.view-id-medium");
  var $views_row = $medium_view.find('div.views-row');

  // Toggle views-row.
  $(window).load(function() {
    setTimeout(function() {

      $views_row.each(function(i) {
          $(this).addClass('closed');
          fix_vertical_logo_alignment($(this));

          // Add class to .views_row to show if there are 1 or 2 entity_field_collections.
          $item_content = $(this).find('.item-content');
          if ($item_content.length === 2) {
            $(this).addClass('has-2-item-contents');
          }
          else if ($item_content.length === 1) {
            $(this).addClass('has-1-item-content');
          }
      });

      $views_row.find('.item-trigger-title').click(function(e) {
        e.preventDefault();
        $this_views_row = $(this).parent().parent();
        $this_views_row.toggleClass('closed');
        $this_views_row.toggleClass('opened');
        fix_vertical_logo_alignment($this_views_row);
      });
    }, 50);
  });

  var fix_vertical_logo_alignment = function($row) {
    var is_mobile = $body.filter('.responsive-layout-mobile').length ? true : false;
    var $td = $row.find('.logo-wrapper > div > div');
    if (!is_mobile) {
      var is_closed = $row.filter('.closed').length ? true : false;
      if (is_closed) {
        $td.css('height', $row.height());
      }
      else {
        $td.attr('style', '');
      }
    }
    else {
      $td.attr('style', '');
    }
  }

})(jQuery);
