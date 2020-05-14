//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTAuthCodeChallenge, SPTAuthSignupInfo;

@protocol SPTLoginPhoneNumberLoginStateDelegate <NSObject>
- (void)coreDidFailLoginWithError:(NSError *)arg1 legacyError:(NSError *)arg2;
- (void)coreDidReceiveSignupInformation:(SPTAuthSignupInfo *)arg1;
- (void)coreDidReceiveChallenge:(SPTAuthCodeChallenge *)arg1;
- (void)coreDidLogin;
@end
