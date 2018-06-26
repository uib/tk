<?php
/**
 * @file
 * gdpr.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gdpr_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gdpr_processing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'gdpr-processing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Behandling av personopplysninger';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_gdpr_controller',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_gdpr_controller' => 'field_gdpr_controller',
    'field_gdpr_service' => 'field_gdpr_service',
    'title' => 'title',
    'field_gdpr_processor' => 'field_gdpr_processor',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_gdpr_controller' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gdpr_service' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gdpr_processor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Lenke tilbake';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = 'Tilbake til <a href="/gdpr">GDPR oversikten</a>.';
  $handler->display->display_options['footer']['area']['format'] = 'markdown';
  /* Field: Content: Behandlingsansvarlig */
  $handler->display->display_options['fields']['field_gdpr_controller']['id'] = 'field_gdpr_controller';
  $handler->display->display_options['fields']['field_gdpr_controller']['table'] = 'field_data_field_gdpr_controller';
  $handler->display->display_options['fields']['field_gdpr_controller']['field'] = 'field_gdpr_controller';
  $handler->display->display_options['fields']['field_gdpr_controller']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gdpr_controller']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Behandling';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Tjeneste */
  $handler->display->display_options['fields']['field_gdpr_service']['id'] = 'field_gdpr_service';
  $handler->display->display_options['fields']['field_gdpr_service']['table'] = 'field_data_field_gdpr_service';
  $handler->display->display_options['fields']['field_gdpr_service']['field'] = 'field_gdpr_service';
  $handler->display->display_options['fields']['field_gdpr_service']['empty'] = '(Ingen)';
  $handler->display->display_options['fields']['field_gdpr_service']['settings'] = array(
    'bypass_access' => 0,
    'link' => 1,
  );
  /* Field: Content: Databehandler */
  $handler->display->display_options['fields']['field_gdpr_processor']['id'] = 'field_gdpr_processor';
  $handler->display->display_options['fields']['field_gdpr_processor']['table'] = 'field_data_field_gdpr_processor';
  $handler->display->display_options['fields']['field_gdpr_processor']['field'] = 'field_gdpr_processor';
  $handler->display->display_options['fields']['field_gdpr_processor']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gdpr_processing' => 'gdpr_processing',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gdpr/processing';
  $translatables['gdpr_processing'] = array(
    t('Master'),
    t('Behandling av personopplysninger'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Lenke tilbake'),
    t('Tilbake til <a href="/gdpr">GDPR oversikten</a>.'),
    t('Behandlingsansvarlig'),
    t('Behandling'),
    t('Tjeneste'),
    t('(Ingen)'),
    t('Databehandler'),
    t('Page'),
  );
  $export['gdpr_processing'] = $view;

  return $export;
}
