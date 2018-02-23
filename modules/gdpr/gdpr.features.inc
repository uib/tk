<?php
/**
 * @file
 * gdpr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gdpr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gdpr_node_info() {
  $items = array(
    'gdpr_controller' => array(
      'name' => t('Behandlingsansvarlig'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
    'gdpr_processing' => array(
      'name' => t('Behandling av persondata'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => '',
    ),
    'gdpr_processor' => array(
      'name' => t('Databehandler'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
