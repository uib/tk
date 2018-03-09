<?php
/**
 * @file
 * gdpr.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gdpr_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-gdpr_controller-field_gdpr_description'.
  $field_instances['node-gdpr_controller-field_gdpr_description'] = array(
    'bundle' => 'gdpr_controller',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_description',
    'label' => 'Beskrivelse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_controller'.
  $field_instances['node-gdpr_processing-field_gdpr_controller'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_controller',
    'label' => 'Behandlingsansvarlig',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_controller_person'.
  $field_instances['node-gdpr_processing-field_gdpr_controller_person'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_controller_person',
    'label' => 'Internt ansvarlig',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_data_description'.
  $field_instances['node-gdpr_processing-field_gdpr_data_description'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvilke personopplysninger/kategorier personopplysninger behandles, kategorier registrerte? Om mulig, ta også med noe om omfanget av data.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_description',
    'label' => 'Personopplysninger',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_data_origin'.
  $field_instances['node-gdpr_processing-field_gdpr_data_origin'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvem eller hvor er opplysningene mottatt fra? Den registrerte eller andre. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_origin',
    'label' => 'Opphav',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_data_sensitive'.
  $field_instances['node-gdpr_processing-field_gdpr_data_sensitive'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Behandles det særlige katetorier opplysninger (sensitive opplysninger)? ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_sensitive',
    'label' => 'Særlige kategorier',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_data_sensitive_type'.
  $field_instances['node-gdpr_processing-field_gdpr_data_sensitive_type'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvilke opplysninger behandles? ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_sensitive_type',
    'label' => 'Typer av sensitive opplysninger',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_data_structured'.
  $field_instances['node-gdpr_processing-field_gdpr_data_structured'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => array(
      0 => array(
        'value' => '?',
      ),
    ),
    'deleted' => 0,
    'description' => 'Foreligger personopplysningene i strukturert maskinlesbar form?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_structured',
    'label' => 'Strukturerte data',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_description'.
  $field_instances['node-gdpr_processing-field_gdpr_description'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Beskrivelse av opplysninger som behandles, herunder omfanget av behandlingen, hvem som skal behandle (om det ikke fremgår andre steder) mv. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_description',
    'label' => 'Beskrivelse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_lawfulness'.
  $field_instances['node-gdpr_processing-field_gdpr_lawfulness'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ta inn det lovmessige grunnlaget for å behandle personopplysningene. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_lawfulness',
    'label' => 'Behandlingsgrunnlag',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_location'.
  $field_instances['node-gdpr_processing-field_gdpr_location'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvor lagres og behandlinges opplysningene fysisk sett, systemmessig, i juridisk enhet mv. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_location',
    'label' => 'Behandingssted',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_purpose'.
  $field_instances['node-gdpr_processing-field_gdpr_purpose'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Beskriv formålet med behandlingen, herunder hvorfor personopplysningene ble samlet inn, hvordan disse var tiltenkt behandlet, hvem de var tiltenkt utlevert til mv.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_purpose',
    'label' => 'Formålet med behandlingen',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-gdpr_processor-field_gdpr_description'.
  $field_instances['node-gdpr_processor-field_gdpr_description'] = array(
    'bundle' => 'gdpr_processor',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_description',
    'label' => 'Beskrivelse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Behandingssted');
  t('Behandles det særlige katetorier opplysninger (sensitive opplysninger)? ');
  t('Behandlingsansvarlig');
  t('Behandlingsgrunnlag');
  t('Beskriv formålet med behandlingen, herunder hvorfor personopplysningene ble samlet inn, hvordan disse var tiltenkt behandlet, hvem de var tiltenkt utlevert til mv.');
  t('Beskrivelse');
  t('Beskrivelse av opplysninger som behandles, herunder omfanget av behandlingen, hvem som skal behandle (om det ikke fremgår andre steder) mv. ');
  t('Foreligger personopplysningene i strukturert maskinlesbar form?');
  t('Formålet med behandlingen');
  t('Hvem eller hvor er opplysningene mottatt fra? Den registrerte eller andre. ');
  t('Hvilke opplysninger behandles? ');
  t('Hvilke personopplysninger/kategorier personopplysninger behandles, kategorier registrerte? Om mulig, ta også med noe om omfanget av data.');
  t('Hvor lagres og behandlinges opplysningene fysisk sett, systemmessig, i juridisk enhet mv. ');
  t('Internt ansvarlig');
  t('Opphav');
  t('Personopplysninger');
  t('Strukturerte data');
  t('Særlige kategorier');
  t('Ta inn det lovmessige grunnlaget for å behandle personopplysningene. ');
  t('Typer av sensitive opplysninger');

  return $field_instances;
}