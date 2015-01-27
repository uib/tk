<?php

$users = drush_get_arguments();
array_shift($users);
array_shift($users);

foreach ($users as $uname) {
    $account = user_load_by_name($uname);
    if ($account) {
	print "$uname - $account->name ($account->uid) already present\n";
	continue;
    }
    $person = @simplexml_load_file("http://sebra.uib.no/sws/person?id=$uname");
    if (!$person) {
	print "$uname not found in Sebra\n";
	continue;
    }
    $new = array( 'name' => $uname,
	'mail' => (string)$person->epost,
	'status' => 1,
	'field_full_name' => array('und' => array(array('value' => (string)$person->name . ' ' . (string)$person->surname))),
    );
    $account = user_save(NULL, $new);
}
