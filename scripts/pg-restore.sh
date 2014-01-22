#!/bin/sh

perl -pe 's/tk_(user|admin)/user1/g' tk.database.sql  | (cd drupal && drush sqlc)
(cd drupal && drush vset ldap_servers_require_ssl_for_credentails 0)
