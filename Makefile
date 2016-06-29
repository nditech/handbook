PROJECT_TYPE ?= profile
PROJECT_NAME ?= handbook
drush_make   ?= $(drush) -y make --working-copy --contrib-destination=profiles/handbook

help-handbook: help-drupal

include .mk/GNUmakefile
