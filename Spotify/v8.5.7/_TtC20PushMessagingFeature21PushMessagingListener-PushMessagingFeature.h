//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC20PushMessagingFeature21PushMessagingListener.h"

#import "SPTThirdPartyNotificationsTracker-Protocol.h"

@interface _TtC20PushMessagingFeature21PushMessagingListener (PushMessagingFeature) <SPTThirdPartyNotificationsTracker>
- (void)handleNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleNotificationWithResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleIncomingRemoteNotification:(id)arg1;
- (void)setPushNotificationsDeviceToken:(id)arg1;
@end
