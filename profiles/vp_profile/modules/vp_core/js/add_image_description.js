(function($) {

  $('.node img').each(function() {
    var $this = $(this);
    var longdesc = $this.attr('longdesc');

    if (typeof longdesc === 'undefined') {
      return false;
    }

    var style = $this.attr('style');
    var styleFloat = $this.css('float');

    $this.attr('style', '');

    if ($this.parent().get(0).tagName === 'A') {
      $this = $this.parent();
    }
    var $wrap = $this.wrap('<span class="image" />').parent();

    if (styleFloat == 'left') {
      $wrap.addClass('float-left');
    } else if (styleFloat == 'right') {
      $wrap.addClass('float-right');
    }

    $wrap.attr('style', style).css('height', 'auto');
    if (typeof longdesc !== 'undefined') {
      $this.after('<span class="caption">' + longdesc + '</span>');
    }
  });

})(jQuery);
