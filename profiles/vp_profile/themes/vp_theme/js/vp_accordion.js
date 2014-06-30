(function ($) {
  var accordions = $('.vp-accordion');
  // Hide all subitems.
  accordions.find('ul ul').hide();

  // Make all the li > a links open/close subitems.
  accordions.find('li > a').click(function(e) {
    e.preventDefault();
    $(this).siblings('ul').toggle('fast');
  });

}(jQuery));
