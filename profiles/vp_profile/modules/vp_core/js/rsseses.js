var rsseses_keyword = '';

(function($){$().ready(function(){
  if($('#rsseses').length) {
    $('#rsseses').before(Drupal.t('Keyword') + ': <input type="text" name="rsseses" />');
    $('input[name="rsseses"]').on('input', function() {
      var keyword = $(this).val();
      $('#rsseses a').each(function() {
        // URL
        $(this).attr('href', url_parameter($(this).attr('href'), 'keyword', keyword));
        // Show keyword in link content.
        if (rsseses_keyword.length && !keyword.length) {
          $(this).html($(this).html().substring(0, $(this).html().length-(3+rsseses_keyword.length)));
        }
        else if (!rsseses_keyword.length) {
          $(this).append(' ('+keyword+')');
        }
        else {
          $(this).html(
            $(this).html().substring(0, $(this).html().length-(3+rsseses_keyword.length)) +
            ' ('+keyword+')'
          );
        }
      });
      rsseses_keyword = keyword;
    });
  }
});})(jQuery);

function url_parameter(url, param, value) {
  // Find given parameter.
  var val = new RegExp('(\\?|\\&)' + param + '=.*?(?=(&|$))'),
    parts = url.toString().split('#'),
    url = parts[0],
    hash = parts[1]
    qstring = /\?.+$/,
    return_url = url;

  // Check for parameter existance: Replace it and determine whether & or ? will be added at the beginning.
  if (val.test(url)) {
    // If value empty and parameter exists, remove the parameter.
    if (!value.length) {
      return_url = url.replace(val, '');
    }
    else {
      return_url = url.replace(val, '$1' + param + '=' + value);
    }
  }
  // If there are query strings add the param to the end of it.
  else if (qstring.test(url)) {
    return_url = url + '&' + param + '=' + value;
  }
  // Add if there are no query strings.
  else {
    return_url = url + '?' + param + '=' + value;
  }

  // Add hash if it exists.
  if (hash) {
    return_url += '#' + hash;
  }

  return return_url;
}
