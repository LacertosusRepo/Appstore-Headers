//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPhoneNumberSignupValidateOtpViewModel;

@protocol SPTPhoneNumberSignupValidateOtpViewModelDelegate <NSObject>
- (void)viewModelDidChangeNumberOfInputs:(SPTPhoneNumberSignupValidateOtpViewModel *)arg1;
- (void)viewModelSessionDidTimeout:(SPTPhoneNumberSignupValidateOtpViewModel *)arg1;
- (void)viewModelResendingSMSRequestedTooEarly:(SPTPhoneNumberSignupValidateOtpViewModel *)arg1;
- (void)viewModelWillStartResendingSMS:(SPTPhoneNumberSignupValidateOtpViewModel *)arg1;
@end

