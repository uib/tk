#!/bin/sh

(cd drupal && drush sql-drop)
perl -pe 's/tk_(user|admin)/postgres/g; s/\b(pg_catalog\.)"nb_NO"/$1"no_NO"/ if $^O eq "darwin";' tk.sql  | (cd drupal && drush sqlc)
(cd drupal && drush vset ldap_servers_require_ssl_for_credentails 0)
