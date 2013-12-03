// Remove default value in table dialog for width (which is 500 by default).
//
// Help from
// http://ckeditor.com/forums/CKEditor-3.x/How-set-standard-table-width-100.

CKEDITOR.plugins.add( 'overwrite_default_table_options', {
});

CKEDITOR.on( 'dialogDefinition', function( ev ) {
  // Take the dialog name and its definition from the event data.
  var dialogName = ev.data.name;
  var dialogDefinition = ev.data.definition;

  // Check if the definition is from the dialog we're
  // interested on (the "Table" dialog).
  if ( dialogName == 'table' ) {
    // Get a reference to the "Table Info" tab.
    var infoTab = dialogDefinition.getContents( 'info' );
    txtWidth = infoTab.get( 'txtWidth' );
    txtWidth['default'] = '';
  }
});
