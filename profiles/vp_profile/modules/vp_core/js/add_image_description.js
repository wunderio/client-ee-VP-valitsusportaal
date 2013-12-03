(function($) {
  var isNodeTypeNews = $('body.node-type-news').length === 1 ? true : false;

  $('.node img').each(function() {
    var $this = $(this),
        longdesc = $this.attr('longdesc'),
        style,
        styleFloat,
        $wrap;

    // Don't do anything if it's the news cover image.
    if (isNodeTypeNews) {
      if ($this.closest('.field-name-field-cover-image').length) {
        return false;
      }
    }

    style = $this.attr('style');
    styleFloat = $this.css('float');

    $this.attr('style', '');

    if ($this.parent().get(0).tagName === 'A') {
      $this = $this.parent();
    }

    $this.wrap('<span class="image"><span class="image-inner"></span></span>');

    $wrap = $this.parent().parent();

    if (styleFloat == 'left') {
      $wrap.addClass('float-left');
    } else if (styleFloat == 'right') {
      $wrap.addClass('float-right');
    }

    $wrap.attr('style', style);
    $wrap.css('height', 'auto');
    if (typeof longdesc !== 'undefined') {
      $this.after('<span class="caption">' + longdesc + '</span>');
    }
  });

})(jQuery);
