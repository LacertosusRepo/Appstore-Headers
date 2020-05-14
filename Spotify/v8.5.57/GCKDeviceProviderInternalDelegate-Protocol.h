//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKDevice, GCKDeviceProvider;

@protocol GCKDeviceProviderInternalDelegate <NSObject>
- (void)deviceProvider:(GCKDeviceProvider *)arg1 didUpdateDevice:(GCKDevice *)arg2;
- (void)deviceProvider:(GCKDeviceProvider *)arg1 didUnpublishDevice:(GCKDevice *)arg2;
- (void)deviceProvider:(GCKDeviceProvider *)arg1 didPublishDevice:(GCKDevice *)arg2;
- (void)deviceProviderDidStartDiscovery:(GCKDeviceProvider *)arg1;
@end

