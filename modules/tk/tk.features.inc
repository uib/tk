<?php
/**
 * @file
 * tk.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tk_ctools_plugin_api($module = NULL, $api = NULL) {
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
function tk_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tk_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Tjeneste'),
      'base' => 'node_content',
      'description' => t('Registrering av nye tjenester'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => t('Felt som er merket med (offentlig) vil være tilgjengelig for alle.  Andre felt vil være begrenset til bare å være synlig for ansatte på ITA eller i visse tilfeller de som har rollen Tjenesteansvarlig.'),
    ),
    'service_owner' => array(
      'name' => t('Systemeier'),
      'base' => 'node_content',
      'description' => t('Registrering av eier av en tjeneste. Navn på enhet, institusjon etc'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
    'support_contact' => array(
      'name' => t('Brukerstøtte'),
      'base' => 'node_content',
      'description' => t('Registrering av enhet der bruker skal henvende seg for å få hjelp (1.linje brukerstøtte) på en tjeneste.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
