//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTSignupPasswordFieldValidationViewModel;

@protocol SPTSignupPasswordFieldValidationViewModelDelegate <NSObject>
- (void)viewModel:(SPTSignupPasswordFieldValidationViewModel *)arg1 didEndFullValidationWithError:(NSError *)arg2;
- (void)viewModelDidBeginFullValidation:(SPTSignupPasswordFieldValidationViewModel *)arg1;
- (void)viewModel:(SPTSignupPasswordFieldValidationViewModel *)arg1 didValidateLocalyWithResult:(_Bool)arg2;
@end
