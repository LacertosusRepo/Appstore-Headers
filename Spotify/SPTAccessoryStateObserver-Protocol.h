//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTAccessory;

@protocol SPTAccessoryStateObserver <NSObject>

@optional
- (void)accessoryStateManager:(id <SPTAccessoryStateManager>)arg1 accessoryDidDisconnect:(SPTAccessory *)arg2;
- (void)accessoryStateManager:(id <SPTAccessoryStateManager>)arg1 accessoryDidConnect:(SPTAccessory *)arg2;
@end

