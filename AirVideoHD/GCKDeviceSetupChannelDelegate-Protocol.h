//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKDeviceConfiguration, GCKDeviceSetupChannel, NSError;

@protocol GCKDeviceSetupChannelDelegate <NSObject>
- (void)deviceSetupChannel:(GCKDeviceSetupChannel *)arg1 didFailToReceiveDeviceConfigurationWithID:(long long)arg2 error:(NSError *)arg3;
- (void)deviceSetupChannel:(GCKDeviceSetupChannel *)arg1 didReceiveDeviceConfiguration:(GCKDeviceConfiguration *)arg2;
@end

