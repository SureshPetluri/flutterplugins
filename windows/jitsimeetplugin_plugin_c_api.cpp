#include "include/jitsimeetplugin/jitsimeetplugin_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "jitsimeetplugin_plugin.h"

void JitsimeetpluginPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  jitsimeetplugin::JitsimeetpluginPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
