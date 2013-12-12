<?php
/**
 * @file
 * tk.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tk_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-roller.
  $menus['menu-roller'] = array(
    'menu_name' => 'menu-roller',
    'title' => 'Roller',
    'description' => '',
  );
  // Exported menu: menu-tjenesteorientert.
  $menus['menu-tjenesteorientert'] = array(
    'menu_name' => 'menu-tjenesteorientert',
    'title' => 'Tjenesteorientert',
    'description' => '',
  );
  // Exported menu: menu-virksomhetsnivaa.
  $menus['menu-virksomhetsnivaa'] = array(
    'menu_name' => 'menu-virksomhetsnivaa',
    'title' => 'Virksomhetsnivå',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Roller');
  t('Tjenesteorientert');
  t('Virksomhetsnivå');


  return $menus;
}
