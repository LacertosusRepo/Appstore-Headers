//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKDevice, NSString;

@protocol GCKDiscoveryManagerListener <NSObject>

@optional
- (void)didRemoveDevice:(GCKDevice *)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemoveDeviceAtIndex:(unsigned long long)arg1;
- (void)didUpdateDevice:(GCKDevice *)arg1 atIndex:(unsigned long long)arg2 andMoveToIndex:(unsigned long long)arg3;
- (void)didUpdateDevice:(GCKDevice *)arg1 atIndex:(unsigned long long)arg2;
- (void)didInsertDevice:(GCKDevice *)arg1 atIndex:(unsigned long long)arg2;
- (void)didUpdateDeviceList;
- (void)willUpdateDeviceList;
- (void)didStartDiscoveryForDeviceCategory:(NSString *)arg1;
@end

