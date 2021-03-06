//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, NSUserActivity, UIResponder;

@protocol SPTUserActivityController <NSObject>
- (void)restoreWebBrowsingURL:(NSURL *)arg1 restorationHandler:(void (^)(NSArray *))arg2;
- (void)restoreUserActivity:(NSUserActivity *)arg1 restorationHandler:(void (^)(NSArray *))arg2;
- (void)updateUserActivity:(NSUserActivity *)arg1;
- (void)registerUserActivityForResponder:(UIResponder *)arg1 uri:(NSURL *)arg2;
- (_Bool)isContinuityEnabled;
@end

