//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTFreeTierTasteOnboardingTrackSwipeViewModel, UIColor;

@protocol SPTFreeTierTasteOnboardingTrackSwipeViewModelDelegate <NSObject>
- (void)trackSwipeViewModel:(SPTFreeTierTasteOnboardingTrackSwipeViewModel *)arg1 negativeFeedbackButtonIsHighlighted:(_Bool)arg2 alpha:(double)arg3;
- (void)trackSwipeViewModel:(SPTFreeTierTasteOnboardingTrackSwipeViewModel *)arg1 positiveFeedbackButtonIsHighlighted:(_Bool)arg2 alpha:(double)arg3;
- (void)trackSwipeViewModelDidCancel:(SPTFreeTierTasteOnboardingTrackSwipeViewModel *)arg1;
- (void)trackSwipeViewModelDidCompleteMinimumFeedback:(SPTFreeTierTasteOnboardingTrackSwipeViewModel *)arg1;
- (void)trackSwipeViewModel:(SPTFreeTierTasteOnboardingTrackSwipeViewModel *)arg1 didChangeCurrentColor:(UIColor *)arg2;
- (void)trackSwipeViewModelDidChangeCurrentItem:(SPTFreeTierTasteOnboardingTrackSwipeViewModel *)arg1;
- (void)trackSwipeViewModelDidLoadInitialItems:(SPTFreeTierTasteOnboardingTrackSwipeViewModel *)arg1;
@end
