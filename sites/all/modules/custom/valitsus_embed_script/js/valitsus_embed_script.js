(function ($) {
  $( document ).ajaxComplete(function() {
    _add_filed_title();
    $( ".field-name-field-embed-code .draggable .field-multiple-drag" ).remove();
  });
  $(window).load(function() {
    _add_filed_title();
    $( ".field-name-field-embed-code .draggable .field-multiple-drag" ).remove();
  });

  /**
   * Helper function to add field title values, embed code of script [Embed-script-x].
   */
  function _add_filed_title() {
    var countAddedTitles = 0;
    $('.field-name-field-embed-code .draggable').each(function() {
      var titleNumber = countAddedTitles + 1;
      $( "div.form-item-field-embed-code-und-"+countAddedTitles+"-value .form-textarea-wrapper" ).prepend( "<p>[Embed-script-"+titleNumber+"]</p>" );
      countAddedTitles++;
    });
  }

})(jQuery);