//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSError, UNNotification, UNNotificationResponse;

@protocol SPTThirdPartyNotificationsTracker <NSObject>
- (void)setPushNotificationsDeviceToken:(NSData *)arg1;

@optional
- (void)handleNotificationWithResponse:(UNNotificationResponse *)arg1 completionHandler:(void (^)(void))arg2;
- (void)handleNotification:(UNNotification *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
- (void)handleIncomingRemoteNotification:(NSDictionary *)arg1;
- (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)arg1;
@end

