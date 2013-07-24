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
  );
  return $items;
}
