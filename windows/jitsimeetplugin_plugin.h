#ifndef FLUTTER_PLUGIN_JITSIMEETPLUGIN_PLUGIN_H_
#define FLUTTER_PLUGIN_JITSIMEETPLUGIN_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace jitsimeetplugin {

class JitsimeetpluginPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  JitsimeetpluginPlugin();

  virtual ~JitsimeetpluginPlugin();

  // Disallow copy and assign.
  JitsimeetpluginPlugin(const JitsimeetpluginPlugin&) = delete;
  JitsimeetpluginPlugin& operator=(const JitsimeetpluginPlugin&) = delete;

 private:
  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace jitsimeetplugin

#endif  // FLUTTER_PLUGIN_JITSIMEETPLUGIN_PLUGIN_H_
