(function($) {
  $currentPagerItem = $('li.pager-current');
  if ($currentPagerItem.length) {
    $siblings = $currentPagerItem.siblings('.pager-item').addClass('pager-current-siblings');
    var $prev = false, $next = false;
    for (var i=0; i<$siblings.length; i++) {
      if ($prev === false) {
        $prev = $currentPagerItem.prev();
        $next = $currentPagerItem.next();
      } else {
        $prev = $prev.prev();
        $next = $next.next();
      }
      $prev.addClass('pager-current-siblings-' + i);
      $next.addClass('pager-current-siblings-' + i);

    }


    /*$currentPagerItem
      .prev().addClass('pager-current-siblings-1')
      .prev().addClass('pager-current-siblings-2')
      .prev().addClass('pager-current-siblings-3')
      .prev().addClass('pager-current-siblings-4');
    $currentPagerItem
      .next().addClass('pager-current-siblings-1')
      .next().addClass('pager-current-siblings-2')
      .next().addClass('pager-current-siblings-3')
      .next().addClass('pager-current-siblings-4');
      */
  }
})(jQuery);
