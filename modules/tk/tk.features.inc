<?php
/**
 * @file
 * tk.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tk_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tk_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tk_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Artikkel'),
      'base' => 'node_content',
      'description' => t('Generelle informasjonssider for tjenestekatalogen.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'service' => array(
      'name' => t('Tjeneste'),
      'base' => 'node_content',
      'description' => t('Registrering av nye tjenester'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
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
  return $items;
}
