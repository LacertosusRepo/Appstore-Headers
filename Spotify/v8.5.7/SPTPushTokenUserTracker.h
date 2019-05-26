//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPushTokenUserTracker-Protocol.h"

@class NSString, SPTPushTokenBroadcasterImplementation;

@interface SPTPushTokenUserTracker : NSObject <SPTPushTokenUserTracker>
{
    _Bool enableUserTracker;
    NSString *_trackerUserID;
    SPTPushTokenBroadcasterImplementation *_pushTokenBroadcaster;
}

@property(readonly, nonatomic) SPTPushTokenBroadcasterImplementation *pushTokenBroadcaster; // @synthesize pushTokenBroadcaster=_pushTokenBroadcaster;
@property(copy, nonatomic) NSString *trackerUserID; // @synthesize trackerUserID=_trackerUserID;
@property(nonatomic, getter=shouldEnableUserTracker) _Bool enableUserTracker; // @synthesize enableUserTracker;
- (void).cxx_destruct;
- (void)userDidLogout;
- (void)userDidLoginWithProductState:(id)arg1;
- (void)handleIncomingRemoteNotification:(id)arg1;
- (void)setPushNotificationsDeviceToken:(id)arg1;
- (id)initWithPushTokenBroadcaster:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

