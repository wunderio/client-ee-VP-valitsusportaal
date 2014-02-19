<?php

/**
 * @file
 * Home of the FeedsSOAPFetcher and related classes.
 */

/**
 * Fetches data via SOAP.
 */
class FeedsSOAPFetcher extends FeedsFetcher {

  /**
   * Implementation of FeedsFetcher::fetch().
   */
  public function fetch(FeedsSource $source) {
    require_once('sites/all/libraries/nusoap/nusoap.php');
    require_once(drupal_get_path('module', 'feeds_soap_fetcher').'/Array2XML/Array2XML.php');

    $client = new nusoap_client($this->config['endpoint']);

    $err = $client->getError();
    if ($err) {
      $err_msg = '<h2>Constructor error</h2><pre>' . $err . '</pre>'.
	      '<h2>Debug</h2><pre>' . htmlspecialchars($client->getDebug(), ENT_QUOTES) . '</pre>';
	    throw new Exception($err_msg);
    }
    
    $envelope = $this->config['envelope'];
    $envelope = format_string($envelope, array(
      '!yesterday' => date('Y-m-d', strtotime('-1 day')),
      '!today' => date('Y-m-d'),
      '!tomorrow' => date('Y-m-d', strtotime('+1 day')),
    ));

    // Send envelop and set timeout to 60.
    $result = $client->send($envelope, '', 0, 60);
    
    if ($client->fault) {
	    $err_msg = '<h2>Fault</h2><pre>' . print_r($result, TRUE) . '</pre>';
	    throw new Exception($err_msg);
    } else {
	    $err = $client->getError();
	    if ($err) {
		    $err_msg = '<h2>Error</h2><pre>' . $err . '</pre>';
		    throw new Exception($err_msg);
	    } else {
		    drupal_set_message('<h2>Result</h2><pre>' . print_r($result, TRUE) . '</pre>');
	    }
    }

    $xml = Array2XML::createXML('soap', $result);

    $xml = $xml->saveXML();

    $xml = (mb_detect_encoding($xml, mb_detect_order(), true) === 'UTF-8' ? $xml : mb_convert_encoding($xml, 'UTF-8', 'ISO-8859-4'));

    return new FeedsFetcherResult($xml);
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'endpoint' => '',
      'envelope' => '',
    );
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form['endpoint'] = array(
      '#type' => 'textfield',
      '#title' => t('SOAP server endpoint URL'),
      '#size' => 60,
      '#maxlength' => 256,
      '#description' => t('Enter the absolute endpoint URL of the SOAP Server service. If WSDL is being used (see SOAPFetcher settings), this will be the URL to retrieve the WSDL.'),
      '#default_value' => $this->config['endpoint'],
      '#required' => TRUE,
    );

    $form['envelope'] = array(
      '#type' => 'textarea',
      '#title' => 'Envelope XML',
      '#default_value' => $this->config['envelope'],
      '#description' => 'You can use these tokens (Y-m-d):<br />!yesterday<br />!today<br />!tomorrow'
    );

    return $form;
  }


  /**
   * Expose source form.
   */
  public function sourceForm($source_config) {
    $form = array();
    // HACK: the hidden field is required to allow Feeds to process the import
    $form['source'] = array('#type' => 'hidden', '#value' => 'hack_to_allow_import');

    $form['info'] = array(
      '#type' => 'item',
      '#value' => t('Will import from %endpoint', array('%endpoint' => $this->config['endpoint'])),
    );
    return $form;
  }
}
