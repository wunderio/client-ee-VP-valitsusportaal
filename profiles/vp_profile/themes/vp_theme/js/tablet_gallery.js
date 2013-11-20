// Add first and last classes for gallery in tablet view.
(function($) {

  $('div.field-collection-container > .field-name-field-pictures').once('init-gallery').each(function() {
    var k = 1;
    $(this).find('> .field-items > .field-item').each(function(i) {
      if (k === 1) {
        $(this).addClass('col-tablet-first');
      }
      if (k === 3) {
        $(this).addClass('col-tablet-last');
        k = 0;
      }
      k++;
    });
  });
})(jQuery);
