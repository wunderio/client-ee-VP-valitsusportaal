(function ($) {
  var accordions = $('.vp-accordion');

  // Hide all subitems except ilus-bullet lists.
  accordions.find('ul ul').not('.ilus-bullet').hide();

  // Make all the li > a links open/close subitems.
  accordions.find('li > a').click(function(e) {
    e.preventDefault();
    $(this).siblings('ul').toggle('fast');
  });

  // Reset events on ilus-bullet lists.
  accordions.find('.ilus-bullet > li > a').off('click');

}(jQuery));
