<?php

$q = new EntityFieldQuery();

$result = $q
  ->entityCondition('entity_type', 'user')
  ->execute();
$uids = array_keys($result['user']);
$users = user_load_multiple($uids);

foreach ($users as $user) {
  if (strpos($user->name, " ") === FALSE)
    continue;
  print "$user->uid $user->name\n";

  # Try to find the right user
  $q = new EntityFieldQuery();
  $result = $q
    ->entityCondition('entity_type', 'user')
    ->fieldCondition('field_full_name', 'value', $user->name, '=')
    ->execute();
  print_r($result);
}
