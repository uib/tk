<?php

create_terms();

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
