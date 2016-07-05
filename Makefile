PROJECT_TYPE ?= profile
PROJECT_NAME ?= handbook
# Download projects to the profile's modules/themes directories
drush_make   ?= $(drush) -y make --working-copy --contrib-destination=profiles/handbook
# Add some debug output.
#drush_OPTIONS = --include=$(MK_DIR)/.local/drush --debug

help-handbook: help-drupal

include .mk/GNUmakefile
