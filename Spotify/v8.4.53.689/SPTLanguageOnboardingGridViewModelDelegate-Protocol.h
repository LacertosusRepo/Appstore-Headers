//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTLanguageOnboardingGridViewModel;

@protocol SPTLanguageOnboardingGridViewModelDelegate <NSObject>
- (void)viewModel:(SPTLanguageOnboardingGridViewModel *)arg1 didReachRequiredSelectedNumberOfLanguages:(_Bool)arg2;
- (void)viewModel:(SPTLanguageOnboardingGridViewModel *)arg1 isOffline:(_Bool)arg2;
- (void)viewModel:(SPTLanguageOnboardingGridViewModel *)arg1 didStartLoading:(_Bool)arg2;
- (void)viewModel:(SPTLanguageOnboardingGridViewModel *)arg1 didUpdateLanguageSelectionAtIndex:(unsigned long long)arg2;
- (void)viewModel:(SPTLanguageOnboardingGridViewModel *)arg1 didFailToUpdateSelectedLanguages:(NSError *)arg2;
- (void)viewModelDidUpdateSelectedLanguages:(SPTLanguageOnboardingGridViewModel *)arg1;
- (void)viewModel:(SPTLanguageOnboardingGridViewModel *)arg1 didFailFetchingLanguages:(NSError *)arg2;
- (void)viewModelDidFetchLanguages:(SPTLanguageOnboardingGridViewModel *)arg1;
@end

