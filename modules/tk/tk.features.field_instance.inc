<?php
/**
 * @file
 * tk.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tk_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-service-field_availability'.
  $field_instances['node-service-field_availability'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Når kan bruker forvente at tjenesten kan brukes. Feltet vises for alle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_availability',
    'label' => 'Normalt tilgjengelig',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-service-field_cmdb_id'.
  $field_instances['node-service-field_cmdb_id'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvis tjenesten også er definert i <a href="https://bs.uib.no/?module=cmdb&action=view">CMDB</a> så kan den knyttes til tjenestekatalogen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cmdb_id',
    'label' => 'CMDB id',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-service-field_cost'.
  $field_instances['node-service-field_cost'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Brukeren må betale for tilgang til noen tjenester. Feltet vises til alle.',
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
    'field_name' => 'field_cost',
    'label' => 'Hva koster tjenesten',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-service-field_criticality'.
  $field_instances['node-service-field_criticality'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => 'Her har du mulighet for å vekte hvor viktig tjenesten er.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
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
    'field_name' => 'field_criticality',
    'label' => 'Kritikalitet',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-service-field_demand'.
  $field_instances['node-service-field_demand'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Beskriv eventuelle krav for å kunne bruke tjenesten (hardware, software, målgrupper, etc). Feltet vises til alle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_demand',
    'label' => 'Hva er nødvendig for å bruke tjenesten',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-service-field_description'.
  $field_instances['node-service-field_description'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Beskriv de viktigste egenskapene og funksjonene ved tjenesten og annen nyttig informasjon til sluttbrukere. Feltet vises til alle.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Utvidet beskrivelse (hva er inkludert)',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-service-field_documentation_link'.
  $field_instances['node-service-field_documentation_link'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Dette lenker til brukerens dokumentasjonen av tjenesten. Feltet vises til alle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_documentation_link',
    'label' => 'Mer informasjon',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-service-field_edit_state'.
  $field_instances['node-service-field_edit_state'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 'draft',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_edit_state',
    'label' => 'Registreringsstatus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'node-service-field_field_howto_orde'.
  $field_instances['node-service-field_field_howto_orde'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Forklar for brukeren hva som må gjøres for å bestille tilgang for tjenesten.  Feltet brukes ikke for åpne tjenester.  Feltet vises til all.',
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
    'field_name' => 'field_field_howto_orde',
    'label' => 'Hvordan bestille',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-service-field_home_link'.
  $field_instances['node-service-field_home_link'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For tjenester tilgjengelig over webben. Her fyller man inn en lenke siden hvor tjenesten kan aksesseres. Feltet vises til alle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_home_link',
    'label' => 'Her finner du tjenesten',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-service-field_information_class'.
  $field_instances['node-service-field_information_class'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvordan klassifiseres informasjonen som lagres i tjenesten i henhold til <a href="http://regler.app.uib.no/regler/Del-4-OEkonomi-eiendom-og-IKT/4.3-Informasjons-og-kommunikasjonsteknologi/Styringssystem-for-informasjonssikkerhet-Gjennomfoerende-del">SIS</a>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_information_class',
    'label' => 'Informasjonsklasse',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'node-service-field_internal_notes'.
  $field_instances['node-service-field_internal_notes'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_internal_notes',
    'label' => 'Interne merknader',
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'node-service-field_operator'.
  $field_instances['node-service-field_operator'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Angi hvilke personer som har ansvar for den tekniske driften av tjenesten.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_operator',
    'label' => 'Driftsansvarlige',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-service-field_ower_contact'.
  $field_instances['node-service-field_ower_contact'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvilken person hos systemeier forvalter i praksis ansvaret for tjenesten.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ower_contact',
    'label' => 'Kontaktperson systemeier',
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
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-service-field_quality'.
  $field_instances['node-service-field_quality'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 'Oppetid:
Responstid:
Leveringstid:',
        'format' => 'plain_text',
      ),
    ),
    'deleted' => 0,
    'description' => 'Dette feltet er ikke i bruk og vises ikke til noen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_quality',
    'label' => 'Kvalitetsmål',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-service-field_ros_date'.
  $field_instances['node-service-field_ros_date'] = array(
    'bundle' => 'service',
    'deleted' => 0,
    'description' => 'Alle produksjonsatte tjenester skal ha ROS-analyse som ikke er mer en 2 år gammel.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
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
    'field_name' => 'field_ros_date',
    'label' => 'Dato for siste gjennomførte ROS-analyse',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '-2:+0',
      ),
      'type' => 'date_popup',
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'node-service-field_ros_link'.
  $field_instances['node-service-field_ros_link'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Lenke til dokumentasjon for siste ROS-analyse gjort for tjenesten.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_ros_link',
    'label' => 'Hvor finnes ROS-analysen',
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
      'title' => 'none',
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'node-service-field_ros_revision_date'.
  $field_instances['node-service-field_ros_revision_date'] = array(
    'bundle' => 'service',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
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
    'field_name' => 'field_ros_revision_date',
    'label' => 'Dato for revisjon av ROS-analyse',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+0',
      ),
      'type' => 'date_popup',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'node-service-field_service_classification'.
  $field_instances['node-service-field_service_classification'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Styrer hvilke kategorier tjenesten listes opp under.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_service_classification',
    'label' => 'Klassifisering',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'node-service-field_service_levels'.
  $field_instances['node-service-field_service_levels'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Brukes kun når IT-avdelingen er driftsleverandør. Angi de nivåene IT-avdelingen er ansvarlig for. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_levels',
    'label' => 'Ytelser',
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

  // Exported field_instance: 'node-service-field_service_owner'.
  $field_instances['node-service-field_service_owner'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvilken avdeling er eier systemet. Feltet vises til alle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_owner',
    'label' => 'Systemeier',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-service-field_service_rotation'.
  $field_instances['node-service-field_service_rotation'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 'novakt',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_service_rotation',
    'label' => 'Vaktordning',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-service-field_service_state'.
  $field_instances['node-service-field_service_state'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 'prod',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_state',
    'label' => 'Livssyklus',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-service-field_service_status'.
  $field_instances['node-service-field_service_status'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 'normal',
      ),
    ),
    'deleted' => 0,
    'description' => 'Feltet er ikke tatt i bruk enda.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_service_status',
    'label' => 'Driftsstatus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'node-service-field_service_supplier'.
  $field_instances['node-service-field_service_supplier'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 'ita',
      ),
    ),
    'deleted' => 0,
    'description' => 'Hvilken avdeling/leverandør drifter tjenesten teknisk. Feltet vises til alle.',
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
    'field_name' => 'field_service_supplier',
    'label' => 'Driftsleverandør',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-service-field_service_type'.
  $field_instances['node-service-field_service_type'] = array(
    'bundle' => 'service',
    'default_value' => array(
      0 => array(
        'value' => 'cfs',
      ),
    ),
    'deleted' => 0,
    'description' => 'Klassifiserer om tjenesten er en tjeneste vi tilbyr til brukere eller om det er en «underliggende»/teknisk tjeneste.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_service_type',
    'label' => 'Tjenestetype',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-service-field_summary'.
  $field_instances['node-service-field_summary'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kort beskrivelse av innholdet i tjenesten (ingress).  Brukes sammen med navnet på tjenesten i lister. Feltet vises til alle.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_summary',
    'label' => 'Beskrivelse',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 1,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-service-field_support_contact'.
  $field_instances['node-service-field_support_contact'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Hvor skal brukeren henvende seg for å få hjelp med tjenesten.  Feltet vises for alle.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'use_content_language' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_support_contact',
    'label' => 'Brukerstøtte',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-service-field_supporting_systems'.
  $field_instances['node-service-field_supporting_systems'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Objekter i CMDB som tjenesten er avhengig av i form av en kommaseparert liste. Det er å foretrekke å registrere CMDB-id og så la avhengighetene være definert i CMDB.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_supporting_systems',
    'label' => 'Hva er tjenesten avhengig av (CMDB)',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'node-service-field_user_group'.
  $field_instances['node-service-field_user_group'] = array(
    'bundle' => 'service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Kryss av for målgruppene for tjenesten.  Feltet vises til alle.',
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
    'field_name' => 'field_user_group',
    'label' => 'Tilgjengelig for',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-service_owner-field_kode'.
  $field_instances['node-service_owner-field_kode'] = array(
    'bundle' => 'service_owner',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
    'field_name' => 'field_kode',
    'label' => 'Identifikator',
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-support_contact-field_adress'.
  $field_instances['node-support_contact-field_adress'] = array(
    'bundle' => 'support_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
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
    'field_name' => 'field_adress',
    'label' => 'Addresse',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-support_contact-field_opening'.
  $field_instances['node-support_contact-field_opening'] = array(
    'bundle' => 'support_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_opening',
    'label' => 'Åpningstid',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-support_contact-field_phone'.
  $field_instances['node-support_contact-field_phone'] = array(
    'bundle' => 'support_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_phone',
    'label' => 'Telefon',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-support_contact-field_www'.
  $field_instances['node-support_contact-field_www'] = array(
    'bundle' => 'support_contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_short',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_www',
    'label' => 'Her kan du melde inn feil',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
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
      'title' => 'required',
      'title_label_use_field_label' => FALSE,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-service_business_levels-field_icon_name'.
  $field_instances['taxonomy_term-service_business_levels-field_icon_name'] = array(
    'bundle' => 'service_business_levels',
    'default_value' => array(
      0 => array(
        'value' => 'default_icon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Ikonnavnene man kan velge mellom er dokumentert <a href="http://fontawesome.io/icons/">Font Awesome siden</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_icon_name',
    'label' => 'Icon name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-service_classes-field_icon_name'.
  $field_instances['taxonomy_term-service_classes-field_icon_name'] = array(
    'bundle' => 'service_classes',
    'default_value' => array(
      0 => array(
        'value' => 'default_icon',
      ),
    ),
    'deleted' => 0,
    'description' => 'Ikonnavnene man kan velge mellom er dokumentert <a href="http://fontawesome.io/icons/">Font Awesome siden</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_icon_name',
    'label' => 'Icon name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'taxonomy_term-service_roles-field_side_text'.
  $field_instances['taxonomy_term-service_roles-field_side_text'] = array(
    'bundle' => 'service_roles',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_side_text',
    'label' => 'Side text',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-service_roles-field_top_text'.
  $field_instances['taxonomy_term-service_roles-field_top_text'] = array(
    'bundle' => 'service_roles',
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
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_top_text',
    'label' => 'Top text',
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Addresse');
  t('Alle produksjonsatte tjenester skal ha ROS-analyse som ikke er mer en 2 år gammel.');
  t('Angi hvilke personer som har ansvar for den tekniske driften av tjenesten.');
  t('Beskriv de viktigste egenskapene og funksjonene ved tjenesten og annen nyttig informasjon til sluttbrukere. Feltet vises til alle.');
  t('Beskriv eventuelle krav for å kunne bruke tjenesten (hardware, software, målgrupper, etc). Feltet vises til alle.');
  t('Beskrivelse');
  t('Brukeren må betale for tilgang til noen tjenester. Feltet vises til alle.');
  t('Brukerstøtte');
  t('Brukes kun når IT-avdelingen er driftsleverandør. Angi de nivåene IT-avdelingen er ansvarlig for. ');
  t('CMDB id');
  t('Dato for revisjon av ROS-analyse');
  t('Dato for siste gjennomførte ROS-analyse');
  t('Dette feltet er ikke i bruk og vises ikke til noen.');
  t('Dette lenker til brukerens dokumentasjonen av tjenesten. Feltet vises til alle.');
  t('Driftsansvarlige');
  t('Driftsleverandør');
  t('Driftsstatus');
  t('Feltet er ikke tatt i bruk enda.');
  t('For tjenester tilgjengelig over webben. Her fyller man inn en lenke siden hvor tjenesten kan aksesseres. Feltet vises til alle.');
  t('Forklar for brukeren hva som må gjøres for å bestille tilgang for tjenesten.  Feltet brukes ikke for åpne tjenester.  Feltet vises til all.');
  t('Her finner du tjenesten');
  t('Her har du mulighet for å vekte hvor viktig tjenesten er.');
  t('Her kan du melde inn feil');
  t('Hva er nødvendig for å bruke tjenesten');
  t('Hva er tjenesten avhengig av (CMDB)');
  t('Hva koster tjenesten');
  t('Hvilken avdeling er eier systemet. Feltet vises til alle.');
  t('Hvilken avdeling/leverandør drifter tjenesten teknisk. Feltet vises til alle.');
  t('Hvilken person hos systemeier forvalter i praksis ansvaret for tjenesten.');
  t('Hvis tjenesten også er definert i <a href="https://bs.uib.no/?module=cmdb&action=view">CMDB</a> så kan den knyttes til tjenestekatalogen.');
  t('Hvor finnes ROS-analysen');
  t('Hvor skal brukeren henvende seg for å få hjelp med tjenesten.  Feltet vises for alle.');
  t('Hvordan bestille');
  t('Hvordan klassifiseres informasjonen som lagres i tjenesten i henhold til <a href="http://regler.app.uib.no/regler/Del-4-OEkonomi-eiendom-og-IKT/4.3-Informasjons-og-kommunikasjonsteknologi/Styringssystem-for-informasjonssikkerhet-Gjennomfoerende-del">SIS</a>');
  t('Icon name');
  t('Identifikator');
  t('Ikonnavnene man kan velge mellom er dokumentert <a href="http://fontawesome.io/icons/">Font Awesome siden</a>.');
  t('Informasjonsklasse');
  t('Interne merknader');
  t('Klassifiserer om tjenesten er en tjeneste vi tilbyr til brukere eller om det er en «underliggende»/teknisk tjeneste.');
  t('Klassifisering');
  t('Kontaktperson systemeier');
  t('Kort beskrivelse av innholdet i tjenesten (ingress).  Brukes sammen med navnet på tjenesten i lister. Feltet vises til alle.');
  t('Kritikalitet');
  t('Kryss av for målgruppene for tjenesten.  Feltet vises til alle.');
  t('Kvalitetsmål');
  t('Lenke til dokumentasjon for siste ROS-analyse gjort for tjenesten.');
  t('Livssyklus');
  t('Mer informasjon');
  t('Normalt tilgjengelig');
  t('Når kan bruker forvente at tjenesten kan brukes. Feltet vises for alle.');
  t('Objekter i CMDB som tjenesten er avhengig av i form av en kommaseparert liste. Det er å foretrekke å registrere CMDB-id og så la avhengighetene være definert i CMDB.');
  t('Registreringsstatus');
  t('Side text');
  t('Styrer hvilke kategorier tjenesten listes opp under.');
  t('Systemeier');
  t('Telefon');
  t('Tilgjengelig for');
  t('Tjenestetype');
  t('Top text');
  t('Utvidet beskrivelse (hva er inkludert)');
  t('Vaktordning');
  t('Ytelser');
  t('Åpningstid');

  return $field_instances;
}
