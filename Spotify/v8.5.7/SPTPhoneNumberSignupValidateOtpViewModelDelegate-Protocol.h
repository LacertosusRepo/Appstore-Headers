//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTPhoneNumberSignupValidateOtpViewModel;

@protocol SPTPhoneNumberSignupValidateOtpViewModelDelegate <NSObject>
- (void)viewModelDidResendOtp:(SPTPhoneNumberSignupValidateOtpViewModel *)arg1;
- (void)viewModelDidCompleteLogin:(SPTPhoneNumberSignupValidateOtpViewModel *)arg1;
- (void)presentErrorWithTitle:(NSString *)arg1 message:(NSString *)arg2;
@end

