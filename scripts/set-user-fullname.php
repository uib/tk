<?php

$q = new EntityFieldQuery();

$result = $q
  ->entityCondition('entity_type', 'user')
  ->propertyCondition('status', 1)
  ->execute();
$uids = array_keys($result['user']);
$users = user_load_multiple($uids);

foreach ($users as $user) {
    if (empty($user->field_full_name['und'][0]['value'])) {
	print "$user->name...\n";
	$person = @simplexml_load_file("http://sebra.uib.no/sws/person?id=$user->name");
	if (!$person) {
	    print "$user->name not found in Sebra\n";
	    continue;
	}
	user_save($user,
	    array(
		'field_full_name' => array('und' => array(array('value' => (string)$person->name . ' ' . (string)$person->surname))),
	    )
	);
	print "  updated\n";
    }
    else {
	#print "$user->name " . $user->field_full_name['und'][0]['value'] . "\n";
    }
}
