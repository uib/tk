<?php
/**
 * @file
 * tk.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tk_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-services';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Tjenesteoversikt';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['separator'] = ';';
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = '|';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relasjon: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_support_contact_target_id']['id'] = 'field_support_contact_target_id';
  $handler->display->display_options['relationships']['field_support_contact_target_id']['table'] = 'field_data_field_support_contact';
  $handler->display->display_options['relationships']['field_support_contact_target_id']['field'] = 'field_support_contact_target_id';
  /* Relasjon: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_service_owner_target_id']['id'] = 'field_service_owner_target_id';
  $handler->display->display_options['relationships']['field_service_owner_target_id']['table'] = 'field_data_field_service_owner';
  $handler->display->display_options['relationships']['field_service_owner_target_id']['field'] = 'field_service_owner_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tjeneste';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Innhold: Kritikalitet */
  $handler->display->display_options['fields']['field_criticality']['id'] = 'field_criticality';
  $handler->display->display_options['fields']['field_criticality']['table'] = 'field_data_field_criticality';
  $handler->display->display_options['fields']['field_criticality']['field'] = 'field_criticality';
  /* Felt: Innhold: Brukergrupper */
  $handler->display->display_options['fields']['field_usergroup']['id'] = 'field_usergroup';
  $handler->display->display_options['fields']['field_usergroup']['table'] = 'field_data_field_usergroup';
  $handler->display->display_options['fields']['field_usergroup']['field'] = 'field_usergroup';
  $handler->display->display_options['fields']['field_usergroup']['delta_offset'] = '0';
  /* Felt: Innhold: Krav */
  $handler->display->display_options['fields']['field_demand']['id'] = 'field_demand';
  $handler->display->display_options['fields']['field_demand']['table'] = 'field_data_field_demand';
  $handler->display->display_options['fields']['field_demand']['field'] = 'field_demand';
  /* Felt: Innhold: Tilgjengelighet */
  $handler->display->display_options['fields']['field_availability']['id'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['field_availability']['field'] = 'field_availability';
  /* Felt: Innhold: Utvidet beskrivelse */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_support_contact_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Support';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_service_owner_target_id';
  $handler->display->display_options['fields']['nid_2']['label'] = 'Systemeier';
  $handler->display->display_options['path'] = 'data/tk.csv';
  $translatables['all_services'] = array(
    t('Master'),
    t('All Services'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('« første'),
    t('‹ forrige'),
    t('neste ›'),
    t('siste »'),
    t('Page'),
    t('Data export'),
    t('Innhold entity referenced from field_support_contact'),
    t('Innhold entity referenced from field_service_owner'),
    t('NID'),
    t('Tjeneste'),
    t('Kritikalitet'),
    t('Brukergrupper'),
    t('Krav'),
    t('Tilgjengelighet'),
    t('Utvidet beskrivelse'),
    t('Support'),
    t('Systemeier'),
  );
  $export['all_services'] = $view;

  return $export;
}
