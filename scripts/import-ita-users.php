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
      $edit = array();
      if ($u->status != 1)
	$edit['status'] = 1;
      if ($u->field_full_name['und'][0]['value'] != $info['name'])
        $edit['field_full_name'] = array('und' => array(array('value' => $info['name'])));
      if (!isset($u->roles[4])) {
	$roles = $u->roles;
	$roles[4] = 'ita';
	$edit['roles'] = $roles;
      }

      if ($edit) {
	print "Updating $uname: " . implode(' ', array_keys($edit)) . "\n";
	user_save($u, $edit);
      }
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
