//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKDeviceInformation, GCKDiscoveryChannel, GCKError;

@protocol GCKDiscoveryChannelDelegate <NSObject>
- (void)deviceDiscoveryChannel:(GCKDiscoveryChannel *)arg1 didFailToReceiveDeviceConfigurationWithID:(long long)arg2 error:(GCKError *)arg3;
- (void)deviceDiscoveryChannel:(GCKDiscoveryChannel *)arg1 didReceiveDeviceInformation:(GCKDeviceInformation *)arg2 requestID:(long long)arg3;
@end

