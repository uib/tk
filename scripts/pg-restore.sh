#!/bin/sh

perl -pe 's/tk_(user|admin)/user1/g' tk.database.sql  | (cd drupal && drush sqlc)
