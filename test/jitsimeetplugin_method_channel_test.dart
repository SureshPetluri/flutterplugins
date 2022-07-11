import 'package:flutter/services.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:jitsimeetplugin/jitsi_meet_platform_interface/method_channel_jitsi_meet.dart';

void main() {
  MethodChannelJitsiMeet platform = MethodChannelJitsiMeet();
  const MethodChannel channel = MethodChannel('jitsimeetplugin');

  TestWidgetsFlutterBinding.ensureInitialized();

  setUp(() {
    channel.setMockMethodCallHandler((MethodCall methodCall) async {
      return '42';
    });
  });

  tearDown(() {
    channel.setMockMethodCallHandler(null);
  });

  // test('getPlatformVersion', () async {
  //   expect(await platform.getPlatformVersion(), '42');
  // });
}
