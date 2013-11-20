// @todo: currently we only fix in .node.
(function ($) {
  var isMobile = false;
  var $article = $('article');
  var isNode = $article.hasClass('node');
  var isSizeSet = false;
  var $elements = $('article.node embed, article.node iframe');
  var $body = $('body');

  var elementDynamicSize = function() {
    isMobile = $body.hasClass('responsive-layout-mobile');

    if (isMobile && isNode) {
      $elements.each(function() {
        var $this = $(this);

        if (typeof this.origWidth === 'undefined') {
          this.origHeight = $this.height();
          this.origWidth = $this.attr('width');
        }

        // Optional.
        $this.css('width', '100%');

        $this.css('height', $this.width() / this.origWidth * this.origHeight);

        isSizeSet = true;


      });
    } else if (isSizeSet) {
      $elements.each(function() {
        $(this).css({
          'height': this.origHeight,
          'width': this.origWidth
        });
      });
    }
  }

  $(window).load(function() {
    // Even after body load event the .responsive-layout-mobile class may not be attached. 100ms delay fixes this.
    setTimeout(elementDynamicSize, 100);

    $(window).resize(function() {
      elementDynamicSize();
    });
  });
})(jQuery);
