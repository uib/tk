<?php
/**
 * @file
 * gdpr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gdpr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gdpr_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gdpr_node_info() {
  $items = array(
    'gdpr_controller' => array(
      'name' => t('Behandlingsansvarlig'),
      'base' => 'node_content',
      'description' => t('Dette er definert som "Den som bestemmer formålet med behandlingen av personopplysninger og hvilke hjelpemidler som skal brukes".  I praksis registrerer vi virksomheter her, som impliserer at virksomhetens øverste administrative leder er behandlingsansvarlig. Systemer som UiB har tatt i bruk vil ha "Universitetet i Bergen" som behandlingsansvarlig.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
    'gdpr_processing' => array(
      'name' => t('Behandling av personopplysninger'),
      'base' => 'node_content',
      'description' => t('Innsamling, sammenstilling og prosessering av opplysninger som kan knyttes til enkeltpersoner.'),
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => t('Vær påpasselig!'),
    ),
    'gdpr_processor' => array(
      'name' => t('Databehandler'),
      'base' => 'node_content',
      'description' => t('Den som behandler personopplysninger på oppdrag fra den behandlingsansvarlige. Dette er vanligvis en virksomhet.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
