//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTSignupBirthDateViewModel;

@protocol SPTSignupBirthDateViewModelDelegate <NSObject>
- (void)viewModel:(SPTSignupBirthDateViewModel *)arg1 didFinishValidationWithError:(NSError *)arg2;
- (void)viewModelDidBeginValidation:(SPTSignupBirthDateViewModel *)arg1;
@end

