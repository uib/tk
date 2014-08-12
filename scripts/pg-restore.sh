#!/bin/sh

(cd drupal && drush sql-drop)
perl -pe 's/tk_(user|admin)/postgres/g' tk.database.sql  | (cd drupal && drush sqlc)
(cd drupal && drush vset ldap_servers_require_ssl_for_credentails 0)
