<?php

$ita = array();

# Discover who the persons at ITA are
$persons = simplexml_load_file("http://sebra.uib.no/sws/persons?placeid=221000");
foreach ($persons->person as $person) {
  $name = (string)$person->name;
  if (stripos($name, 'test')) {
    print "* Ignoring $name\n";
    continue;
  }
  $ita[(string)$person->id] = array(
    'name' => (string)$person->name,
  );
}

# Unfortunately we did not get the email address that way
foreach (array_keys($ita) as $uname) {
  #print "$uname\n";
  $person = simplexml_load_file("http://sebra.uib.no/sws/person?id=$uname");
  $ita[$uname]['mail'] = (string)$person->epost;
}

# Look them up
foreach ($ita as $uname => $info) {
  $u = user_load_by_name($uname);
  if ($u) {
    print "Found $uname by uname\n";
  }
  else {
    $email = $info['mail'];
    $u = user_load_by_mail($email);
    if ($u) {
      print "Found $uname by email $email\n";
    }
    else {
      $email = str_replace('@uib.', '@adm.uib.', $email);
      $u = user_load_by_mail($email);
      if ($u) {
	print "Found $uname by email $email\n";
      }
    }
  }
  if ($u) {
      user_save($u, array(
	'name' => $uname,
	'mail' => $info['mail'],
	'field_full_name' => array('und' => array(array('value' => $info['name']))),
      ));
  }
  else {
    $u = user_save(NULL, array(
      'name' => $uname,
      'mail' => $info['mail'],
      'status' => 1,
      'roles' => array(
        '4' => 'ita',
      ),
      'field_full_name' => array('und' => array(array('value' => $info['name']))),
    ));
    print "Created $uname as user/$u->uid\n";
  }
}
