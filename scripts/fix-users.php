<?php

$q = new EntityFieldQuery();

$result = $q
  ->entityCondition('entity_type', 'user')
  ->propertyCondition('status', 1)
  ->execute();
$uids = array_keys($result['user']);
$users = user_load_multiple($uids);

foreach ($users as $user) {
  if (strpos($user->name, " ") === FALSE)
    continue;

  # Try to find the right user
  $alt_user = NULL;
  $q = new EntityFieldQuery();
  $result = $q
    ->entityCondition('entity_type', 'user')
    ->propertyCondition('uid', $user->uid, '!=')
    ->propertyCondition('status', 1)
    ->fieldCondition('field_full_name', 'value', $user->name, '=')
    ->execute();
  if (isset($result['user'])) {
    $alt_users = user_load_multiple(array_keys($result['user']));
    $alt_user = array_pop($alt_users);
  }

  $nids = nodes_related_to($user->uid);
  if (!$nids) {
    print "0 $user->uid $user->name\n";
    user_save($user, array(
      'status' => 0,
    ));
    continue;
  }
  $c = count($nids);
  if ($alt_user) {
    print "! $user->uid $user->name --> $alt_user->uid $alt_user->name ($c)\n";
  }
  else {
    print "? $user->uid $user->name ($c)\n";
  }
}

function nodes_related_to($uid) {
  $nids = db_query('select nid from {node} where uid = :uid',
    array(
      ':uid' => $uid,
  ))->fetchCol();
  $nids += db_query('select entity_id from {field_data_field_operator} where field_operator_target_id = :uid',
    array(
      ':uid' => $uid,
  ))->fetchCol();
  $nids += db_query('select entity_id from {field_data_field_operator} where field_operator_target_id = :uid',
    array(
      ':uid' => $uid,
  ))->fetchCol();
  $nids += db_query('select entity_id from {field_data_field_ower_contact} where field_ower_contact_target_id = :uid',
    array(
      ':uid' => $uid,
  ))->fetchCol();
  return $nids;
}
