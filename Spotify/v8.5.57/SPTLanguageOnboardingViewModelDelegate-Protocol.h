//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTLanguageOnboardingViewModel;

@protocol SPTLanguageOnboardingViewModelDelegate <NSObject>
- (void)viewModel:(SPTLanguageOnboardingViewModel *)arg1 isOffline:(_Bool)arg2;
- (void)viewModel:(SPTLanguageOnboardingViewModel *)arg1 didDeselectLanguageAtIndex:(unsigned long long)arg2;
- (void)viewModel:(SPTLanguageOnboardingViewModel *)arg1 didSelectLanguageAtIndex:(unsigned long long)arg2;
- (void)viewModel:(SPTLanguageOnboardingViewModel *)arg1 didFailToUpdateSelectedLanguages:(NSError *)arg2;
- (void)viewModelDidUpdateSelectedLanguages:(SPTLanguageOnboardingViewModel *)arg1;
- (void)viewModel:(SPTLanguageOnboardingViewModel *)arg1 didFailFetchingLanguages:(NSError *)arg2;
- (void)viewModelDidFetchLanguages:(SPTLanguageOnboardingViewModel *)arg1;
@end

