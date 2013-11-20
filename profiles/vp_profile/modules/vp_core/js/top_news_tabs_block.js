// Equal height for slides so background shadow would look nice.
(function($) {
  $(window).resize(function() {
    var highest = 0;
    var slides_inners = $('#flexslider_views_slideshow_top_news_tabs-top_news_tabs_block li.flexslider_views_slideshow_slide > div');
    slides_inners.css('height', 'auto');
    var set_new_height = function() {
      slides_inners.each(function() {
        if (highest < $(this).height()) {
          highest = $(this).height();
        }
      });
      slides_inners.css('height', highest);
    }
    // slides_inners.css('height', 'auto'); needs to set in. 50ms is enough timeout.
    setTimeout(set_new_height, 50);
  });
})(jQuery);
