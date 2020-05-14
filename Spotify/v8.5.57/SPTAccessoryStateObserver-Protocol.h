//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTAccessory;
@protocol SPTAccessoryStateManager;

@protocol SPTAccessoryStateObserver <NSObject>

@optional
- (void)accessoryStateManager:(id <SPTAccessoryStateManager>)arg1 accessoryDidDisconnect:(SPTAccessory *)arg2;
- (void)accessoryStateManager:(id <SPTAccessoryStateManager>)arg1 accessoryDidConnect:(SPTAccessory *)arg2;
@end

