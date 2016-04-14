(function($) {
  var addrowpluginOnTags = function(editor) {
    var nodeBody = editor.document.$.body;
    var $nodeBody = $(nodeBody);
    var addRowButtom = "<div class='add-row'><input class='add-row' id='add-button' name='add' type='button' value='Lisa rida'></div>"
    // Remove excisting Add row buttons and add button to last element.
    $nodeBody.find('.add-row').remove();
    if ($nodeBody.find('.static-module-3-2-new-row').length) {
      $nodeBody.find('.static-module-3-2-new-row:last').append(addRowButtom);
    } else {
      $nodeBody.find('.static-module-3-2-add-row').append(addRowButtom);
    }
    if ($nodeBody.find('.static-textblock-gray-background-new-row').length) {
      $nodeBody.find('.static-textblock-gray-background-new-row:last').append(addRowButtom);
    } else {
      $nodeBody.find('.static-textblock-gray-background-add-row').append(addRowButtom);
    }

    // Adding new row and placing button to last row.
    $nodeBody.find('input.add-row').die('click').live("click", function () {
      $nodeBody.find('.add-row').remove();
      var newRow = "<div class='static-module-3-2-new-row clearfix'>" +
        "<div class='col col-1'><h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3> <p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p></div>" +
        "<div class='col col-2'><h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3><p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames.</p><p>See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p></div>" +
        "<div class='col col-3 last'><h3>Kas ma võin jääda elektrita, kui midagi ette ei võta?</h3><p>Ei - ühegi kodu ega ettevõtte varustamine elektriga ei katke hetkekski ning elektrimüüjat saab igaüks vahetada ka pärast turu avanemist kasvõi igal kuul. Neid tarbijad, kes ei soovi või ei jõua enne 2013. aastat elektrimüüjat valida, varustab elektrienergiaga asjaomase piirkonna võrguettevõtja üldteenuse raames. See tähendab, et hinna aluseks on eelmise kuu kaalutud keskmine börsihind, millele lisandub ettevõtte mõistlik kasum. Ettevõtete kasumimarginaal on Konkurentsiameti pideva vaatluse all.</p></div>" +
        "<div class='add-row'><input class='add-row' id='add-button' name='add' type='button' value='Lisa rida'></div></div>";
      if ($nodeBody.find('.static-module-3-2-new-row').length) {
        $nodeBody.find('.static-module-3-2-new-row:last').after(newRow);
      } else {
        $nodeBody.find('.static-module-3-2-add-row').after(newRow);
      }

      var newRow = "<div class='static static-textblock-gray-background-new-row'><div class='container-12'>" +
        "<div class='textbox grid-4'><div class='textbox-inner'><h3>Mis on OECD?</h3><p><strong>OECD ehk Majandusliku Koostöö ja Arengu Organisatsioon (inglise keeles Organisation for Economic Co-operation and Development) on tööstuslikult arenenud demokraatlike riikide foorum alalise asukohaga Pariisis. OECDsse kuulub hetkel 34 riiki.</strong></p><p>Organisatsiooni eesmärk on aidata kaasa maailmamajanduse arengule, samuti ka liikmes- ja mitteliikmesriikide majandusarengule ning maailmakaubanduse laienemisele. OECD peamised tegevusvaldkonnad on liikmesriikide majandusnäitajate kogumine ja analüüsimine ning soovituste andmine, et riigid saaksid oma majanduspoliitikat tulemuslikumalt kujundada. Samuti tegeleb OECD sotsiaalsete ja keskkonnakaitse probleemide analüüsimise ning nende ennetamisega.</p></div></div>" +
        "<div class='textbox grid-4'><div class='textbox-inner'><h3>Mis on OECD?</h3><p><strong>OECD ehk Majandusliku Koostöö ja Arengu Organisatsioon (inglise keeles Organisation for Economic Co-operation and Development) on tööstuslikult arenenud demokraatlike riikide foorum alalise asukohaga Pariisis. OECDsse kuulub hetkel 34 riiki.</strong></p><p>Organisatsiooni eesmärk on aidata kaasa maailmamajanduse arengule, samuti ka liikmes- ja mitteliikmesriikide majandusarengule ning maailmakaubanduse laienemisele. OECD peamised tegevusvaldkonnad on liikmesriikide majandusnäitajate kogumine ja analüüsimine ning soovituste andmine, et riigid saaksid oma majanduspoliitikat tulemuslikumalt kujundada. Samuti tegeleb OECD sotsiaalsete ja keskkonnakaitse probleemide analüüsimise ning nende ennetamisega.</p></div></div>" +
        "<div class='textbox grid-4'><div class='textbox-inner'><h3>Mis on OECD?</h3><p><strong>OECD ehk Majandusliku Koostöö ja Arengu Organisatsioon (inglise keeles Organisation for Economic Co-operation and Development) on tööstuslikult arenenud demokraatlike riikide foorum alalise asukohaga Pariisis. OECDsse kuulub hetkel 34 riiki.</strong></p><p>Organisatsiooni eesmärk on aidata kaasa maailmamajanduse arengule, samuti ka liikmes- ja mitteliikmesriikide majandusarengule ning maailmakaubanduse laienemisele. OECD peamised tegevusvaldkonnad on liikmesriikide majandusnäitajate kogumine ja analüüsimine ning soovituste andmine, et riigid saaksid oma majanduspoliitikat tulemuslikumalt kujundada. Samuti tegeleb OECD sotsiaalsete ja keskkonnakaitse probleemide analüüsimise ning nende ennetamisega.</p></div></div>" +
        "<div class='add-row'><input class='add-row' id='add-button' name='add' type='button' value='Lisa rida'></div></div></div>";
      if ($nodeBody.find('.static-textblock-gray-background-new-row').length) {
        $nodeBody.find('.static-textblock-gray-background-new-row:last').after(newRow);
      } else {
        $nodeBody.find('.static-textblock-gray-background-add-row').after(newRow);
      }
    });
  };
  CKEDITOR.plugins.add('addrowplugin', {
    init: function(editor) {
      editor.on('instanceReady', function(event) {
        addrowpluginOnTags(editor);
      });
      // Set the state of "Show blocks" button.
      editor.on('afterCommandExec', function(event) {
        addrowpluginOnTags(editor);
      });
    }
  });
})(jQuery);