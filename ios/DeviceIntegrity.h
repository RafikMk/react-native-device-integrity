
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNDeviceIntegritySpec.h"

@interface DeviceIntegrity : NSObject <NativeDeviceIntegritySpec>
#else
#import <React/RCTBridgeModule.h>

@interface DeviceIntegrity : NSObject <RCTBridgeModule>
#endif

@end
