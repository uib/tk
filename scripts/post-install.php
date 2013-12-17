<?php

create_terms();
create_sample_content();

/**
 * Fill in some taxonomy terms
 */
function create_terms() {
  $vocabulary_terms = array(
    "service_roles" => array(
      "Ny på UiB",
      "Student",
      "Ansatt",
      "Gjest",
      "Ekstern",
      "Pensjonist",
      "Sluttet",
    ),
    "service_business_levels" => array(
      "Undervisning",
      "Forsking",
      "Formidling",
      "Allmennheten",
      "Administrasjon",
    ),
  );

  foreach ($vocabulary_terms as $vocabulary_name => $term_names) {
    $vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name);
    foreach ($term_names as $term_name) {
      $term = new stdClass();
      $term->vid = $vocabulary->vid;
      $term->name = $term_name;
      taxonomy_term_save($term);
    }
  }
}

function notify_created_node($node) {
  print "Created $node->type $node->title as node $node->nid\n";
}

/**
 * Create some sample content useful for testing
 */
function create_sample_content() {
  $brita = new stdClass();
  $brita->type = "support_contact";
  $brita->title = "BRITA";
  node_save($brita);
  notify_created_node($brita);

  $ita = new stdClass();
  $ita->type = "service_owner";
  $ita->title = "IT-avdelingen";
  $ita->field_kode['und'][0]['value'] = 'ita';
  node_save($ita);
  notify_created_node($ita);

  $services = array(
    "iPhone 5C",
    "iPhone 5S",
    "Galaxy S4",
    "Galaxy Note 3",
    "Lumia 520",
    "Xperia Z1",
  );

  foreach ($services as $service_name) {
    $service = new stdClass();
    $service->type = "service";
    $service->title = $service_name;
    $service->field_summary['und'][0]['value'] = file_get_contents("http://loripsum.net/api/plaintext/1/short");
    $service->field_description['und'][0]['value'] = file_get_contents("http://loripsum.net/api/plaintext/5");
    $service->field_support_contact['und'][0]['target_id'] = $brita->nid;
    $service->field_service_owner['und'][0]['target_id'] = $ita->nid;
    $service->field_operator['und'][0]['target_id'] = 1; // admin
    $service->field_service_state['und'][0]['value'] = 'prod';
    $service->field_usergroup['und'][0]['value'] = 'andre';
    node_save($service);
    notify_created_node($service);
  }
}
