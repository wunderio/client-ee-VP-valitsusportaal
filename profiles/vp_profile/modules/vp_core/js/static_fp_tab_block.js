// Static HTML Frontpage Tab Block.
(function($) {
  var $tabBlocks = $('div.static-fp-tab-block');

  if ($tabBlocks.length) {
    $tabBlocks.each(function() {
      var $this = $(this);
      var $tabsWrap = $('<div class="static-fp-tabs"><ul></ul></div>').prependTo($this);
      var $tabContents = $this.find('.tab-content');
      var $titles = $this.find('h2');
      $tabContents.each(function(i) {
        $tabsWrap.find('ul').append('<li' + (i===0 ? ' class=active' : '') +  '><a href="#" class="item-' + i + '">' + $titles.eq(i).text() + '</a></li>');
      });
      var tabs = $tabsWrap.find('li');
      $tabsWrap.find('a').click(function() {
        var i = this.className.replace('item-', '');
        $tabContents.hide();
        $tabContents.eq(i).show();
        tabs.removeClass('active');
        $(this).parent().addClass('active');
        return false;
      });
    });
  }
})(jQuery);
