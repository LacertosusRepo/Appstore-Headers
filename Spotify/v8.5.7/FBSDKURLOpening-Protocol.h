//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIApplication;

@protocol FBSDKURLOpening <NSObject>
- (_Bool)isAuthenticationURL:(NSURL *)arg1;
- (void)applicationDidBecomeActive:(UIApplication *)arg1;
- (_Bool)canOpenURL:(NSURL *)arg1 forApplication:(UIApplication *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
- (_Bool)application:(UIApplication *)arg1 openURL:(NSURL *)arg2 sourceApplication:(NSString *)arg3 annotation:(id)arg4;
@end

