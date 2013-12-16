<?php

create_terms();

/**
 * Fill in some taxonomy terms
 */
function create_terms() {
  $roles = taxonomy_vocabulary_machine_name_load("service_roles");

  $term_names = array(
    "Ny på UiB",
    "Student",
    "Ansatt",
    "Gjest",
    "Ekstern",
    "Pensjonist",
    "Sluttet",
  );

  foreach ($term_names as $term_name) {
    $term = new stdClass();
    $term->vid = $roles->vid;
    $term->name = $term_name;
    taxonomy_term_save($term);
  }
}
