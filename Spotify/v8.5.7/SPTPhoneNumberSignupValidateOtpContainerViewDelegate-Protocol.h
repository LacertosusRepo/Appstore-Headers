//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTPhoneNumberSignupValidateOtpContainerView, UIButton;

@protocol SPTPhoneNumberSignupValidateOtpContainerViewDelegate <NSObject>
- (void)resendSMSButtonPressed:(UIButton *)arg1;
- (void)editPhoneNumberButtonPressed:(UIButton *)arg1;
- (void)nextButtonPressed:(UIButton *)arg1;
- (void)otpContainerView:(SPTPhoneNumberSignupValidateOtpContainerView *)arg1 didUpdatePassword:(NSString *)arg2;
@end

