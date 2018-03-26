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

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_access_transfer'.
  $field_instances['node-gdpr_processing-field_gdpr_access_transfer'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Andre som har tilgang  eller blir opplysningene overført til andre, herunder kategorier av mottakere? ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_access_transfer',
    'label' => 'Tilgang/overføring',
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_comment'.
  $field_instances['node-gdpr_processing-field_gdpr_comment'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ytterligere kommentarer som ikke er dekket andre steder i skjemaet.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_comment',
    'label' => 'Kommentarer',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_controller'.
  $field_instances['node-gdpr_processing-field_gdpr_controller'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => array(
      0 => array(
        'target_id' => 324,
      ),
    ),
    'deleted' => 0,
    'description' => 'Den som bestemmer formålet med behandlingen av personopplysninger og hvilke hjelpemidler som skal brukes. Systemer som UiB har tatt i bruk vil vanligvis ha "Universitetet i Bergen" satt som behandlingsansvarlig. Dette impliserer at administrerende direktør ved UiB er behandlingsansvarlig i lovens forstand.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 13,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_controller_org'.
  $field_instances['node-gdpr_processing-field_gdpr_controller_org'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Hvilken organisasjonsenhet er internt sett ansvarlig for behandlingen',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_controller_org',
    'label' => 'Internt ansvarlig',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_controller_person'.
  $field_instances['node-gdpr_processing-field_gdpr_controller_person'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Hvilken bruker hos behandlingsansvarlig har blitt delegert oppgavene med å følge opp behandlingen. For behandling tilknyttet tjenester vil dette som oftest være samme person som er kontaktperson hos systemeier.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 15,
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
    'label' => 'Kontaktperson for behandlingen',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 4,
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
        'weight' => 20,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
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
        'weight' => 21,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_data_special'.
  $field_instances['node-gdpr_processing-field_gdpr_data_special'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => array(
      0 => array(
        'value' => '?',
      ),
    ),
    'deleted' => 0,
    'description' => 'Behandles det særlige katetorier opplysninger (sensitive opplysninger)?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_special',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_data_special_lawfulne'.
  $field_instances['node-gdpr_processing-field_gdpr_data_special_lawfulne'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Grunnlag for behandlingen etter artikkel 9 i personvernforordningen. Sensitive data må <em>ikke</em> behandles uten at minst én av disse grunnene gjelder.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_special_lawfulne',
    'label' => 'Grunnlag for behandling av sensitive opplysninger',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_data_special_type'.
  $field_instances['node-gdpr_processing-field_gdpr_data_special_type'] = array(
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
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_data_special_type',
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
      'weight' => 16,
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
        'weight' => 23,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_delete_policy'.
  $field_instances['node-gdpr_processing-field_gdpr_delete_policy'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Rutiner for sletting av opplysningene, evnt. planlagte tidsfrister for sletting (om mulig)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_delete_policy',
    'label' => 'Slettting',
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
      'weight' => 13,
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
        'weight' => 16,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_documentation_link'.
  $field_instances['node-gdpr_processing-field_gdpr_documentation_link'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvor dokumenatasjon og eventuelt mer informasjon om behandlingen finnes.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_documentation_link',
    'label' => 'Dokumentasjon',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_dpia'.
  $field_instances['node-gdpr_processing-field_gdpr_dpia'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => array(
      0 => array(
        'value' => '?',
      ),
    ),
    'deleted' => 0,
    'description' => 'Er det gjennomført vurdering av personvern-konsekvenser (DPIA)? Hvis dette ikke er nødvendig sett denne til N/A.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_dpia',
    'label' => 'Personvernkonsekvenser vurdert',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 18,
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
        'weight' => 18,
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
      'weight' => 7,
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
        'weight' => 19,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_measures'.
  $field_instances['node-gdpr_processing-field_gdpr_measures'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Generell beskrivelse av de tekniske og/eller organisatoriske tiltak for behandlingen (om mulig)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_measures',
    'label' => 'Tiltak',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_processor'.
  $field_instances['node-gdpr_processing-field_gdpr_processor'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => array(
      0 => array(
        'target_id' => 326,
      ),
    ),
    'default_value_function' => '',
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
        'weight' => 30,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_processor',
    'label' => 'Databehandler',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
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
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-gdpr_processing-field_gdpr_processor_contract'.
  $field_instances['node-gdpr_processing-field_gdpr_processor_contract'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => array(
      0 => array(
        'value' => '?',
      ),
    ),
    'deleted' => 0,
    'description' => 'Foreligger det en formell avtale mellom behandlingsansvarlige og databehandleren?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_processor_contract',
    'label' => 'Databehandleravtale',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
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
        'weight' => 17,
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-gdpr_processing-field_gdpr_service'.
  $field_instances['node-gdpr_processing-field_gdpr_service'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => 'I hvilken tjeneste foregår behandlingen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_service',
    'label' => 'Tjeneste',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'disable',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
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
  // 'node-gdpr_processing-field_gdpr_subject_informed'.
  $field_instances['node-gdpr_processing-field_gdpr_subject_informed'] = array(
    'bundle' => 'gdpr_processing',
    'default_value' => array(
      0 => array(
        'value' => '?',
      ),
    ),
    'deleted' => 0,
    'description' => 'Er de registrerte informert i henhold til artikkel 13 og 14 ved innsamling av opplysningene?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_gdpr_subject_informed',
    'label' => 'Informasjon gitt til de registrerte',
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
  t('Andre som har tilgang  eller blir opplysningene overført til andre, herunder kategorier av mottakere? ');
  t('Behandingssted');
  t('Behandles det særlige katetorier opplysninger (sensitive opplysninger)?');
  t('Behandlingsansvarlig');
  t('Behandlingsgrunnlag');
  t('Beskriv formålet med behandlingen, herunder hvorfor personopplysningene ble samlet inn, hvordan disse var tiltenkt behandlet, hvem de var tiltenkt utlevert til mv.');
  t('Beskrivelse');
  t('Beskrivelse av opplysninger som behandles, herunder omfanget av behandlingen, hvem som skal behandle (om det ikke fremgår andre steder) mv. ');
  t('Databehandler');
  t('Databehandleravtale');
  t('Den som bestemmer formålet med behandlingen av personopplysninger og hvilke hjelpemidler som skal brukes. Systemer som UiB har tatt i bruk vil vanligvis ha "Universitetet i Bergen" satt som behandlingsansvarlig. Dette impliserer at administrerende direktør ved UiB er behandlingsansvarlig i lovens forstand.');
  t('Dokumentasjon');
  t('Er de registrerte informert i henhold til artikkel 13 og 14 ved innsamling av opplysningene?');
  t('Er det gjennomført vurdering av personvern-konsekvenser (DPIA)? Hvis dette ikke er nødvendig sett denne til N/A.');
  t('Foreligger det en formell avtale mellom behandlingsansvarlige og databehandleren?');
  t('Foreligger personopplysningene i strukturert maskinlesbar form?');
  t('Formålet med behandlingen');
  t('Generell beskrivelse av de tekniske og/eller organisatoriske tiltak for behandlingen (om mulig)');
  t('Grunnlag for behandling av sensitive opplysninger');
  t('Grunnlag for behandlingen etter artikkel 9 i personvernforordningen. Sensitive data må <em>ikke</em> behandles uten at minst én av disse grunnene gjelder.');
  t('Hvem eller hvor er opplysningene mottatt fra? Den registrerte eller andre. ');
  t('Hvilke opplysninger behandles? ');
  t('Hvilke personopplysninger/kategorier personopplysninger behandles, kategorier registrerte? Om mulig, ta også med noe om omfanget av data.');
  t('Hvilken bruker hos behandlingsansvarlig har blitt delegert oppgavene med å følge opp behandlingen. For behandling tilknyttet tjenester vil dette som oftest være samme person som er kontaktperson hos systemeier.');
  t('Hvilken organisasjonsenhet er internt sett ansvarlig for behandlingen');
  t('Hvor dokumenatasjon og eventuelt mer informasjon om behandlingen finnes.');
  t('Hvor lagres og behandlinges opplysningene fysisk sett, systemmessig, i juridisk enhet mv. ');
  t('I hvilken tjeneste foregår behandlingen.');
  t('Informasjon gitt til de registrerte');
  t('Internt ansvarlig');
  t('Kommentarer');
  t('Kontaktperson for behandlingen');
  t('Opphav');
  t('Personopplysninger');
  t('Personvernkonsekvenser vurdert');
  t('Rutiner for sletting av opplysningene, evnt. planlagte tidsfrister for sletting (om mulig)');
  t('Slettting');
  t('Strukturerte data');
  t('Særlige kategorier');
  t('Ta inn det lovmessige grunnlaget for å behandle personopplysningene. ');
  t('Tilgang/overføring');
  t('Tiltak');
  t('Tjeneste');
  t('Typer av sensitive opplysninger');
  t('Ytterligere kommentarer som ikke er dekket andre steder i skjemaet.');

  return $field_instances;
}
