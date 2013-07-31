<?php
/**
 * @file
 * tk.features.inc
 */

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
    'service' => array(
      'name' => t('Tjeneste'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => '',
    ),
    'support_contact' => array(
      'name' => t('Servicekontakt'),
      'base' => 'node_content',
      'description' => t('Hvor henvender bruker seg for å få service på en tjenesten.'),
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
