//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol SPTPushNotificationAction <NSObject>
- (_Bool)handlePushNotificationActionForIdentifier:(NSString *)arg1 URL:(NSURL *)arg2 completionBlock:(void (^)(void))arg3;
@end
