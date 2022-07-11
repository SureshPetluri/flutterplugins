#import "JitsimeetpluginPlugin.h"
#if __has_include(<jitsimeetplugin/jitsimeetplugin-Swift.h>)
#import <jitsimeetplugin/jitsimeetplugin-Swift.h>
#else
// Support project import fallback if the generated compatibility header
// is not copied when this plugin is created as a library.
// https://forums.swift.org/t/swift-static-libraries-dont-copy-generated-objective-c-header/19816
#import "jitsimeetplugin-Swift.h"
#endif

@implementation JitsimeetpluginPlugin
+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  [SwiftJitsiMeetPlugin registerWithRegistrar:registrar];
}
@end
