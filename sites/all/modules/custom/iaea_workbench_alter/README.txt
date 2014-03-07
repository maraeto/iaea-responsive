The standard workbench provides views in code. They are convenient for a 
starting point, but not for support, as adding changes needs to happen manually
in code and that is hard because of the complex view data structure.

The solution implemented in this module is to:
 - Clone the original views.
 - Disable the original views.
 - Add new views (as needed).
 - Add custom access permissions (as needed for the new views).
 - Export the cloned + new views in features for easier maintenance.
 - Remap the old views to the new ones in the workbench pages.

All workbench-related views and configurations are stored in
iaea_configuration_workbench feature.

By default workbench moderation stable does not have features integration for
exporting states and transitions between them, so the module is patched with
https://drupal.org/node/1314508.