//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <jitsimeetplugin/jitsimeetplugin_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) jitsimeetplugin_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "JitsimeetpluginPlugin");
  jitsimeetplugin_plugin_register_with_registrar(jitsimeetplugin_registrar);
}
