//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTPhoneNumberSignupValidateOtpContainerView, UIButton;

@protocol SPTPhoneNumberSignupValidateOtpContainerViewDelegate <NSObject>
- (void)didEndEditing:(SPTPhoneNumberSignupValidateOtpContainerView *)arg1;
- (void)resendSMSButtonPressed:(UIButton *)arg1;
- (void)editPhoneNumberButtonPressed:(UIButton *)arg1;
- (void)otpContainerView:(SPTPhoneNumberSignupValidateOtpContainerView *)arg1 didUpdatePassword:(NSString *)arg2;
@end

