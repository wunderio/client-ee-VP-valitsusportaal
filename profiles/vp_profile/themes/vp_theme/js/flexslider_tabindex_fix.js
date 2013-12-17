/**
 * Fix flexslider tabindex issue - don't allow focusing hidden tabs.
 */
(function($) {
  $('.flexslider').bind('start', function(e, slider) {
    slider.container.find('li[aria-hidden="true"] a').attr('tabindex', '-1');
  });
})(jQuery);
