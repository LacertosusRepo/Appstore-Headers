//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTCoreLoginControllerLoginDelegate-Protocol.h"

@class NSError, NSString;
@protocol SPTCoreLoginController;

@protocol SPTCoreLoginControllerDelegate <SPTCoreLoginControllerLoginDelegate>
- (NSString *)core:(id <SPTCoreLoginController>)arg1 localizedDescriptionForLoginErrorCode:(int)arg2;
- (void)coreDidLogout:(id <SPTCoreLoginController>)arg1;
- (void)coreDidRelogin:(id <SPTCoreLoginController>)arg1 withError:(NSError *)arg2 isPermanent:(_Bool)arg3;
@end

