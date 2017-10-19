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
  $view->human_name = 'All Services A-Å';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Services';
  $handler->display->display_options['css_class'] = 'view-letter-index';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: First letter of service title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'First letter of service title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['empty'] = '?';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Beskrivelse */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: All teasers */
  $handler = $view->new_display('page', 'All teasers', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Tjenesteoversikt';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  /* Filter criterion: Content: Tjenestetype (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_value']['field'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['value'] = array(
    'cfs' => 'cfs',
  );
  /* Filter criterion: Content: Registreringsstatus (field_edit_state) */
  $handler->display->display_options['filters']['field_edit_state_value']['id'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['filters']['field_edit_state_value']['field'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['value'] = array(
    'accepted' => 'accepted',
  );
  /* Filter criterion: Content: Livssyklus (field_service_state) */
  $handler->display->display_options['filters']['field_service_state_value']['id'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['table'] = 'field_data_field_service_state';
  $handler->display->display_options['filters']['field_service_state_value']['field'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['value'] = array(
    'prod' => 'prod',
  );
  $handler->display->display_options['path'] = 'services/all';
  $handler->display->display_options['menu']['title'] = 'A-Å';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'A-Å';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export CSV */
  $handler = $view->new_display('views_data_export', 'Data export CSV', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = '<br>';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_support_contact_target_id']['id'] = 'field_support_contact_target_id';
  $handler->display->display_options['relationships']['field_support_contact_target_id']['table'] = 'field_data_field_support_contact';
  $handler->display->display_options['relationships']['field_support_contact_target_id']['field'] = 'field_support_contact_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_service_owner_target_id']['id'] = 'field_service_owner_target_id';
  $handler->display->display_options['relationships']['field_service_owner_target_id']['table'] = 'field_data_field_service_owner';
  $handler->display->display_options['relationships']['field_service_owner_target_id']['field'] = 'field_service_owner_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tjeneste';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Kritikalitet */
  $handler->display->display_options['fields']['field_criticality']['id'] = 'field_criticality';
  $handler->display->display_options['fields']['field_criticality']['table'] = 'field_data_field_criticality';
  $handler->display->display_options['fields']['field_criticality']['field'] = 'field_criticality';
  /* Field: Content: Hva er nødvendig for å bruke tjenesten */
  $handler->display->display_options['fields']['field_demand']['id'] = 'field_demand';
  $handler->display->display_options['fields']['field_demand']['table'] = 'field_data_field_demand';
  $handler->display->display_options['fields']['field_demand']['field'] = 'field_demand';
  /* Field: Content: Normalt tilgjengelig */
  $handler->display->display_options['fields']['field_availability']['id'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['field_availability']['field'] = 'field_availability';
  /* Field: Content: Utvidet beskrivelse (hva er inkludert) */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_support_contact_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Support';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_service_owner_target_id';
  $handler->display->display_options['fields']['nid_2']['label'] = 'Systemeier';
  $handler->display->display_options['path'] = 'data/tk.csv';

  /* Display: All services (really!) */
  $handler = $view->new_display('page', 'All services (really!)', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any service content';
  $handler->display->display_options['path'] = 'services/all-really';
  $translatables['all_services'] = array(
    t('Master'),
    t('All Services'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('?'),
    t('All teasers'),
    t('Tjenesteoversikt'),
    t('more'),
    t('Data export CSV'),
    t('Content entity referenced from field_support_contact'),
    t('Content entity referenced from field_service_owner'),
    t('Nid'),
    t('Tjeneste'),
    t('Kritikalitet'),
    t('Hva er nødvendig for å bruke tjenesten'),
    t('Normalt tilgjengelig'),
    t('Utvidet beskrivelse (hva er inkludert)'),
    t('Support'),
    t('Systemeier'),
    t('All services (really!)'),
  );
  $export['all_services'] = $view;

  $view = new view();
  $view->name = 'classfications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Klassifikasjon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
    'name_1' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['separator'] = ':';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['classfications'] = array(
    t('Master'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Entity Reference'),
    t('more'),
  );
  $export['classfications'] = $view;

  $view = new view();
  $view->name = 'service_classes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Tjenesteklasser — forside';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '60';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Denne katalogen skal gi oversikt over IT-tjenester som tilbys ved Universitetet i Bergen.
Katalogen er under arbeid. Beskrivelsene må kvalitetssikres med eieravdelingene. 
UiBs hovedområder er listet menyen oppe og i tillegg finner du ulike kategorier under. Et utvalg tjenester er vist på førstesiden, men du finner alle ved å klikke på de respektive kategoriene. Du kan også gå direkte til den <a href="/services/all">alfabetiske opplistingen</a>.<br><br>';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_service_classification_node']['id'] = 'reverse_field_service_classification_node';
  $handler->display->display_options['relationships']['reverse_field_service_classification_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_service_classification_node']['field'] = 'reverse_field_service_classification_node';
  $handler->display->display_options['relationships']['reverse_field_service_classification_node']['label'] = 'Services';
  /* Field: Taxonomy term: Icon name */
  $handler->display->display_options['fields']['field_icon_name']['id'] = 'field_icon_name';
  $handler->display->display_options['fields']['field_icon_name']['table'] = 'field_data_field_icon_name';
  $handler->display->display_options['fields']['field_icon_name']['field'] = 'field_icon_name';
  $handler->display->display_options['fields']['field_icon_name']['label'] = '';
  $handler->display->display_options['fields']['field_icon_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<i class="fa fa-[field_icon_name]"></i> [name] <span class="see-more">(vis flere)</span>';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_service_classification_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy vocabulary: Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  /* Sort criterion: Taxonomy term: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_service_classification_node';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'service_classes' => 'service_classes',
    'service_business_levels' => 'service_business_levels',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['relationship'] = 'reverse_field_service_classification_node';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Registreringsstatus (field_edit_state) */
  $handler->display->display_options['filters']['field_edit_state_value']['id'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['filters']['field_edit_state_value']['field'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['relationship'] = 'reverse_field_service_classification_node';
  $handler->display->display_options['filters']['field_edit_state_value']['value'] = array(
    'accepted' => 'accepted',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'service-classes';
  $translatables['service_classes'] = array(
    t('Master'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Denne katalogen skal gi oversikt over IT-tjenester som tilbys ved Universitetet i Bergen.
Katalogen er under arbeid. Beskrivelsene må kvalitetssikres med eieravdelingene. 
UiBs hovedområder er listet menyen oppe og i tillegg finner du ulike kategorier under. Et utvalg tjenester er vist på førstesiden, men du finner alle ved å klikke på de respektive kategoriene. Du kan også gå direkte til den <a href="/services/all">alfabetiske opplistingen</a>.<br><br>'),
    t('Services'),
    t('<i class="fa fa-[field_icon_name]"></i> [name] <span class="see-more">(vis flere)</span>'),
    t('Page'),
    t('more'),
  );
  $export['service_classes'] = $view;

  $view = new view();
  $view->name = 'service_owners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'service-owners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Systemansvarlige';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own service content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_full_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ower_contact_target_id']['id'] = 'field_ower_contact_target_id';
  $handler->display->display_options['relationships']['field_ower_contact_target_id']['table'] = 'field_data_field_ower_contact';
  $handler->display->display_options['relationships']['field_ower_contact_target_id']['field'] = 'field_ower_contact_target_id';
  $handler->display->display_options['relationships']['field_ower_contact_target_id']['label'] = 'Owner';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_service_owner_target_id']['id'] = 'field_service_owner_target_id';
  $handler->display->display_options['relationships']['field_service_owner_target_id']['table'] = 'field_data_field_service_owner';
  $handler->display->display_options['relationships']['field_service_owner_target_id']['field'] = 'field_service_owner_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_service_owner_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['empty'] = '⁉️ Ingen systemeier';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'field_ower_contact_target_id';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_name']['empty'] = '(mangler kontaktperson) 🙀';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title_1']['id'] = 'title_1';
  $handler->display->display_options['sorts']['title_1']['table'] = 'node';
  $handler->display->display_options['sorts']['title_1']['field'] = 'title';
  $handler->display->display_options['sorts']['title_1']['relationship'] = 'field_service_owner_target_id';
  /* Sort criterion: User: Full name (field_full_name) */
  $handler->display->display_options['sorts']['field_full_name_value']['id'] = 'field_full_name_value';
  $handler->display->display_options['sorts']['field_full_name_value']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['sorts']['field_full_name_value']['field'] = 'field_full_name_value';
  $handler->display->display_options['sorts']['field_full_name_value']['relationship'] = 'field_ower_contact_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: Systemavsvarlige */
  $handler = $view->new_display('page', 'Systemavsvarlige', 'page');
  $handler->display->display_options['path'] = 'services/owners';
  $handler->display->display_options['menu']['title'] = 'Driftsavsvarlige';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['service_owners'] = array(
    t('Master'),
    t('Systemansvarlige'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Owner'),
    t('Content entity referenced from field_service_owner'),
    t('⁉️ Ingen systemeier'),
    t('(mangler kontaktperson) 🙀'),
    t('Systemavsvarlige'),
  );
  $export['service_owners'] = $view;

  $view = new view();
  $view->name = 'service_review';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Service Review';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tjenestegjennomgang';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any service content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_edit_state',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Registreringsstatus */
  $handler->display->display_options['fields']['field_edit_state']['id'] = 'field_edit_state';
  $handler->display->display_options['fields']['field_edit_state']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['fields']['field_edit_state']['field'] = 'field_edit_state';
  $handler->display->display_options['fields']['field_edit_state']['label'] = '';
  $handler->display->display_options['fields']['field_edit_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_edit_state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_edit_state']['empty'] = 'Ukjent status';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Her finner du tjenesten */
  $handler->display->display_options['fields']['field_home_link']['id'] = 'field_home_link';
  $handler->display->display_options['fields']['field_home_link']['table'] = 'field_data_field_home_link';
  $handler->display->display_options['fields']['field_home_link']['field'] = 'field_home_link';
  $handler->display->display_options['fields']['field_home_link']['label'] = '';
  $handler->display->display_options['fields']['field_home_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_home_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_home_link']['alter']['text'] = '→ ([field_home_link])';
  $handler->display->display_options['fields']['field_home_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_home_link']['type'] = 'link_domain';
  $handler->display->display_options['fields']['field_home_link']['settings'] = array(
    'strip_www' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="/node/[nid]">[title]</a>
[field_home_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Livssyklus */
  $handler->display->display_options['fields']['field_service_state']['id'] = 'field_service_state';
  $handler->display->display_options['fields']['field_service_state']['table'] = 'field_data_field_service_state';
  $handler->display->display_options['fields']['field_service_state']['field'] = 'field_service_state';
  $handler->display->display_options['fields']['field_service_state']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_service_state']['empty'] = 'Ukjent';
  /* Field: Content: Interne merknader */
  $handler->display->display_options['fields']['field_internal_notes']['id'] = 'field_internal_notes';
  $handler->display->display_options['fields']['field_internal_notes']['table'] = 'field_data_field_internal_notes';
  $handler->display->display_options['fields']['field_internal_notes']['field'] = 'field_internal_notes';
  $handler->display->display_options['fields']['field_internal_notes']['label'] = '';
  $handler->display->display_options['fields']['field_internal_notes']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Registreringsstatus (field_edit_state) */
  $handler->display->display_options['sorts']['field_edit_state_value']['id'] = 'field_edit_state_value';
  $handler->display->display_options['sorts']['field_edit_state_value']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['sorts']['field_edit_state_value']['field'] = 'field_edit_state_value';
  $handler->display->display_options['sorts']['field_edit_state_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services/review';
  $handler->display->display_options['menu']['title'] = 'Gjennomgang';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['service_review'] = array(
    t('Master'),
    t('Tjenestegjennomgang'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Ukjent status'),
    t('→ ([field_home_link])'),
    t('<a href="/node/[nid]">[title]</a>
[field_home_link]'),
    t('Livssyklus'),
    t('Ukjent'),
    t('Page'),
  );
  $export['service_review'] = $view;

  $view = new view();
  $view->name = 'service_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'service-users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Driftansvarlige';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit own service content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_full_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_operator_target_id']['id'] = 'field_operator_target_id';
  $handler->display->display_options['relationships']['field_operator_target_id']['table'] = 'field_data_field_operator';
  $handler->display->display_options['relationships']['field_operator_target_id']['field'] = 'field_operator_target_id';
  $handler->display->display_options['relationships']['field_operator_target_id']['label'] = 'Driftsansvarlig';
  $handler->display->display_options['relationships']['field_operator_target_id']['required'] = TRUE;
  /* Field: User: Full name */
  $handler->display->display_options['fields']['field_full_name']['id'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['fields']['field_full_name']['field'] = 'field_full_name';
  $handler->display->display_options['fields']['field_full_name']['relationship'] = 'field_operator_target_id';
  $handler->display->display_options['fields']['field_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_full_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Full name (field_full_name) */
  $handler->display->display_options['sorts']['field_full_name_value']['id'] = 'field_full_name_value';
  $handler->display->display_options['sorts']['field_full_name_value']['table'] = 'field_data_field_full_name';
  $handler->display->display_options['sorts']['field_full_name_value']['field'] = 'field_full_name_value';
  $handler->display->display_options['sorts']['field_full_name_value']['relationship'] = 'field_operator_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: Driftsavsvarlige */
  $handler = $view->new_display('page', 'Driftsavsvarlige', 'page');
  $handler->display->display_options['path'] = 'services/ops';
  $handler->display->display_options['menu']['title'] = 'Driftsavsvarlige';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['service_users'] = array(
    t('Master'),
    t('Driftansvarlige'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Driftsansvarlig'),
    t('Driftsavsvarlige'),
  );
  $export['service_users'] = $view;

  $view = new view();
  $view->name = 'services_by_category';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'services_by_category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alle tjenestene gruppert etter kategori';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_service_classification_target_id']['id'] = 'field_service_classification_target_id';
  $handler->display->display_options['relationships']['field_service_classification_target_id']['table'] = 'field_data_field_service_classification';
  $handler->display->display_options['relationships']['field_service_classification_target_id']['field'] = 'field_service_classification_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Icon name */
  $handler->display->display_options['fields']['field_icon_name']['id'] = 'field_icon_name';
  $handler->display->display_options['fields']['field_icon_name']['table'] = 'field_data_field_icon_name';
  $handler->display->display_options['fields']['field_icon_name']['field'] = 'field_icon_name';
  $handler->display->display_options['fields']['field_icon_name']['relationship'] = 'field_service_classification_target_id';
  $handler->display->display_options['fields']['field_icon_name']['label'] = '';
  $handler->display->display_options['fields']['field_icon_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_service_classification_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<i class="fa fa-[field_icon_name]"></i> [name]';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_service_classification_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Tjenestetype (field_service_type) */
  $handler->display->display_options['sorts']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['sorts']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['sorts']['field_service_type_value']['field'] = 'field_service_type_value';
  /* Sort criterion: Content: Klassifisering (field_service_classification) */
  $handler->display->display_options['sorts']['field_service_classification_target_id']['id'] = 'field_service_classification_target_id';
  $handler->display->display_options['sorts']['field_service_classification_target_id']['table'] = 'field_data_field_service_classification';
  $handler->display->display_options['sorts']['field_service_classification_target_id']['field'] = 'field_service_classification_target_id';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  /* Filter criterion: Content: Tjenestetype (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_value']['field'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['value'] = array(
    'cfs' => 'cfs',
  );
  /* Filter criterion: Content: Registreringsstatus (field_edit_state) */
  $handler->display->display_options['filters']['field_edit_state_value']['id'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['filters']['field_edit_state_value']['field'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['value'] = array(
    'accepted' => 'accepted',
  );
  /* Filter criterion: Content: Livssyklus (field_service_state) */
  $handler->display->display_options['filters']['field_service_state_value']['id'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['table'] = 'field_data_field_service_state';
  $handler->display->display_options['filters']['field_service_state_value']['field'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['value'] = array(
    'prod' => 'prod',
  );
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['relationship'] = 'field_service_classification_target_id';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'service_classes' => 'service_classes',
    'service_business_levels' => 'service_business_levels',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services/by-category';
  $handler->display->display_options['menu']['title'] = 'By category';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['services_by_category'] = array(
    t('Master'),
    t('Alle tjenestene gruppert etter kategori'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Taxonomy term entity referenced from field_service_classification'),
    t('<i class="fa fa-[field_icon_name]"></i> [name]'),
    t('Page'),
  );
  $export['services_by_category'] = $view;

  $view = new view();
  $view->name = 'services_full_text';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'services-full-text';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'full-text';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  /* Filter criterion: Content: Tjenestetype (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_value']['field'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['value'] = array(
    'cfs' => 'cfs',
  );
  /* Filter criterion: Content: Registreringsstatus (field_edit_state) */
  $handler->display->display_options['filters']['field_edit_state_value']['id'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['filters']['field_edit_state_value']['field'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['value'] = array(
    'accepted' => 'accepted',
  );
  /* Filter criterion: Content: Livssyklus (field_service_state) */
  $handler->display->display_options['filters']['field_service_state_value']['id'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['table'] = 'field_data_field_service_state';
  $handler->display->display_options['filters']['field_service_state_value']['field'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['value'] = array(
    'prod' => 'prod',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'services/all-full-text';
  $translatables['services_full_text'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['services_full_text'] = $view;

  $view = new view();
  $view->name = 'supporting_services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Supporting Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Understøttende tjenester';
  $handler->display->display_options['css_class'] = 'view-letter-index';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any service content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Denne siden lister opp alle registrerte tjenester som vi tilbyr for å understøtte de tilbydte tjenestene.  Det kan være tjenester som er interne for IT-avdelingen, eller tjenester som bare brukes av innholds&shy;redaktørene for en tilbydt tjenestene.  Denne siden er <i>ikke</i> offentlig.';
  /* Field: First letter of title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'First letter of title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Beskrivelse */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  /* Filter criterion: Content: Tjenestetype (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_value']['field'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_service_type_value']['value'] = array(
    'cfs' => 'cfs',
  );

  /* Display: Not public service page */
  $handler = $view->new_display('page', 'Not public service page', 'page');
  $handler->display->display_options['path'] = 'services/supporting';

  /* Display: Not production page */
  $handler = $view->new_display('page', 'Not production page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Ikke i produksjon';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Denne siden lister opp alle registrerte tjenester ikke er i produksjon. De kan enten være under utvikling eller utfaset. Denne siden er <i>ikke</i> offentlig.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );
  /* Filter criterion: Content: Livssyklus (field_service_state) */
  $handler->display->display_options['filters']['field_service_state_value']['id'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['table'] = 'field_data_field_service_state';
  $handler->display->display_options['filters']['field_service_state_value']['field'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_service_state_value']['value'] = array(
    'prod' => 'prod',
  );
  $handler->display->display_options['path'] = 'services/not-prod';
  $translatables['supporting_services'] = array(
    t('Master'),
    t('Understøttende tjenester'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Denne siden lister opp alle registrerte tjenester som vi tilbyr for å understøtte de tilbydte tjenestene.  Det kan være tjenester som er interne for IT-avdelingen, eller tjenester som bare brukes av innholds&shy;redaktørene for en tilbydt tjenestene.  Denne siden er <i>ikke</i> offentlig.'),
    t('Not public service page'),
    t('Not production page'),
    t('Ikke i produksjon'),
    t('Denne siden lister opp alle registrerte tjenester ikke er i produksjon. De kan enten være under utvikling eller utfaset. Denne siden er <i>ikke</i> offentlig.'),
  );
  $export['supporting_services'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_service';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'taxonomy_term_service';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-letter-index';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: First letter of title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'First letter of title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Beskrivelse */
  $handler->display->display_options['fields']['field_summary']['id'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['table'] = 'field_data_field_summary';
  $handler->display->display_options['fields']['field_summary']['field'] = 'field_summary';
  $handler->display->display_options['fields']['field_summary']['label'] = '';
  $handler->display->display_options['fields']['field_summary']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Tjenestetype (field_service_type) */
  $handler->display->display_options['filters']['field_service_type_value']['id'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['filters']['field_service_type_value']['field'] = 'field_service_type_value';
  $handler->display->display_options['filters']['field_service_type_value']['value'] = array(
    'cfs' => 'cfs',
  );
  /* Filter criterion: Content: Livssyklus (field_service_state) */
  $handler->display->display_options['filters']['field_service_state_value']['id'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['table'] = 'field_data_field_service_state';
  $handler->display->display_options['filters']['field_service_state_value']['field'] = 'field_service_state_value';
  $handler->display->display_options['filters']['field_service_state_value']['value'] = array(
    'prod' => 'prod',
  );
  /* Filter criterion: Content: Registreringsstatus (field_edit_state) */
  $handler->display->display_options['filters']['field_edit_state_value']['id'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['filters']['field_edit_state_value']['field'] = 'field_edit_state_value';
  $handler->display->display_options['filters']['field_edit_state_value']['value'] = array(
    'accepted' => 'accepted',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $translatables['taxonomy_term_service'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('%1'),
    t('Page'),
  );
  $export['taxonomy_term_service'] = $view;

  $view = new view();
  $view->name = 'tk_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Data exports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tjenester';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_cmdb_id' => 'field_cmdb_id',
    'field_operator' => 'field_operator',
    'field_service_supplier' => 'field_service_supplier',
    'field_documentation_link' => 'field_documentation_link',
    'field_home_link' => 'field_home_link',
    'field_cost' => 'field_cost',
    'field_service_type' => 'field_service_type',
    'field_cmdb_id_1' => 'field_cmdb_id_1',
    'field_user_group' => 'field_user_group',
    'field_service_classification' => 'field_service_classification',
    'field_criticality' => 'field_criticality',
    'field_service_state' => 'field_service_state',
    'field_availability' => 'field_availability',
    'field_edit_state' => 'field_edit_state',
    'field_service_rotation' => 'field_service_rotation',
    'field_service_levels' => 'field_service_levels',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmdb_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_operator' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_supplier' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_documentation_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_home_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cost' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cmdb_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_group' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_classification' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_criticality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_availability' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_edit_state' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_rotation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_service_levels' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tjenestenavn';
  /* Field: Content: Driftsansvarlige */
  $handler->display->display_options['fields']['field_operator']['id'] = 'field_operator';
  $handler->display->display_options['fields']['field_operator']['table'] = 'field_data_field_operator';
  $handler->display->display_options['fields']['field_operator']['field'] = 'field_operator';
  $handler->display->display_options['fields']['field_operator']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_operator']['delta_offset'] = '0';
  /* Field: Content: Driftsleverandør */
  $handler->display->display_options['fields']['field_service_supplier']['id'] = 'field_service_supplier';
  $handler->display->display_options['fields']['field_service_supplier']['table'] = 'field_data_field_service_supplier';
  $handler->display->display_options['fields']['field_service_supplier']['field'] = 'field_service_supplier';
  /* Field: Content: Mer informasjon */
  $handler->display->display_options['fields']['field_documentation_link']['id'] = 'field_documentation_link';
  $handler->display->display_options['fields']['field_documentation_link']['table'] = 'field_data_field_documentation_link';
  $handler->display->display_options['fields']['field_documentation_link']['field'] = 'field_documentation_link';
  $handler->display->display_options['fields']['field_documentation_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_documentation_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_documentation_link']['type'] = 'link_absolute';
  /* Field: Content: Her finner du tjenesten */
  $handler->display->display_options['fields']['field_home_link']['id'] = 'field_home_link';
  $handler->display->display_options['fields']['field_home_link']['table'] = 'field_data_field_home_link';
  $handler->display->display_options['fields']['field_home_link']['field'] = 'field_home_link';
  $handler->display->display_options['fields']['field_home_link']['click_sort_column'] = 'url';
  /* Field: Content: Hva koster tjenesten */
  $handler->display->display_options['fields']['field_cost']['id'] = 'field_cost';
  $handler->display->display_options['fields']['field_cost']['table'] = 'field_data_field_cost';
  $handler->display->display_options['fields']['field_cost']['field'] = 'field_cost';
  /* Field: Content: Tjenestetype */
  $handler->display->display_options['fields']['field_service_type']['id'] = 'field_service_type';
  $handler->display->display_options['fields']['field_service_type']['table'] = 'field_data_field_service_type';
  $handler->display->display_options['fields']['field_service_type']['field'] = 'field_service_type';
  /* Field: Content: CMDB id */
  $handler->display->display_options['fields']['field_cmdb_id_1']['id'] = 'field_cmdb_id_1';
  $handler->display->display_options['fields']['field_cmdb_id_1']['table'] = 'field_data_field_cmdb_id';
  $handler->display->display_options['fields']['field_cmdb_id_1']['field'] = 'field_cmdb_id';
  $handler->display->display_options['fields']['field_cmdb_id_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Tilgjengelig for */
  $handler->display->display_options['fields']['field_user_group']['id'] = 'field_user_group';
  $handler->display->display_options['fields']['field_user_group']['table'] = 'field_data_field_user_group';
  $handler->display->display_options['fields']['field_user_group']['field'] = 'field_user_group';
  $handler->display->display_options['fields']['field_user_group']['delta_offset'] = '0';
  /* Field: Content: Klassifisering */
  $handler->display->display_options['fields']['field_service_classification']['id'] = 'field_service_classification';
  $handler->display->display_options['fields']['field_service_classification']['table'] = 'field_data_field_service_classification';
  $handler->display->display_options['fields']['field_service_classification']['field'] = 'field_service_classification';
  $handler->display->display_options['fields']['field_service_classification']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_service_classification']['delta_offset'] = '0';
  /* Field: Content: Kritikalitet */
  $handler->display->display_options['fields']['field_criticality']['id'] = 'field_criticality';
  $handler->display->display_options['fields']['field_criticality']['table'] = 'field_data_field_criticality';
  $handler->display->display_options['fields']['field_criticality']['field'] = 'field_criticality';
  /* Field: Content: Livssyklus */
  $handler->display->display_options['fields']['field_service_state']['id'] = 'field_service_state';
  $handler->display->display_options['fields']['field_service_state']['table'] = 'field_data_field_service_state';
  $handler->display->display_options['fields']['field_service_state']['field'] = 'field_service_state';
  /* Field: Content: Normalt tilgjengelig */
  $handler->display->display_options['fields']['field_availability']['id'] = 'field_availability';
  $handler->display->display_options['fields']['field_availability']['table'] = 'field_data_field_availability';
  $handler->display->display_options['fields']['field_availability']['field'] = 'field_availability';
  /* Field: Content: Registreringsstatus */
  $handler->display->display_options['fields']['field_edit_state']['id'] = 'field_edit_state';
  $handler->display->display_options['fields']['field_edit_state']['table'] = 'field_data_field_edit_state';
  $handler->display->display_options['fields']['field_edit_state']['field'] = 'field_edit_state';
  /* Field: Content: Vaktordning */
  $handler->display->display_options['fields']['field_service_rotation']['id'] = 'field_service_rotation';
  $handler->display->display_options['fields']['field_service_rotation']['table'] = 'field_data_field_service_rotation';
  $handler->display->display_options['fields']['field_service_rotation']['field'] = 'field_service_rotation';
  /* Field: Content: Ytelser */
  $handler->display->display_options['fields']['field_service_levels']['id'] = 'field_service_levels';
  $handler->display->display_options['fields']['field_service_levels']['table'] = 'field_data_field_service_levels';
  $handler->display->display_options['fields']['field_service_levels']['field'] = 'field_service_levels';
  $handler->display->display_options['fields']['field_service_levels']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'data';

  /* Display: Data export XLS */
  $handler = $view->new_display('views_data_export', 'Data export XLS', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'data/tk.xls';
  $translatables['tk_data'] = array(
    t('Master'),
    t('Tjenester'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Tjenestenavn'),
    t('Driftsansvarlige'),
    t('Driftsleverandør'),
    t('Mer informasjon'),
    t('Her finner du tjenesten'),
    t('Hva koster tjenesten'),
    t('Tjenestetype'),
    t('CMDB id'),
    t('Tilgjengelig for'),
    t('Klassifisering'),
    t('Kritikalitet'),
    t('Livssyklus'),
    t('Normalt tilgjengelig'),
    t('Registreringsstatus'),
    t('Vaktordning'),
    t('Ytelser'),
    t('Published'),
    t('Page'),
    t('Data export XLS'),
  );
  $export['tk_data'] = $view;

  return $export;
}
