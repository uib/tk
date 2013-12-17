<?php
/**
 * @file
 * tk.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tk_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:<front>
  $menu_links['navigation:<front>'] = array(
    'menu_name' => 'navigation',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Nyttige tjenester for deg som er...',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-10',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Nyttige tjenester for deg som er...');


  return $menu_links;
}
