//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL, UIButton, UIViewController;

@protocol _TtP24ResponsiveShuffleFeature40SPTResponsiveShuffleOnboardingController_
- (void)banTappedWithTrackURI:(NSURL *)arg1;
- (void)unheartTappedWithTrackURI:(NSURL *)arg1;
- (void)heartTappedWithTrackURI:(NSURL *)arg1;
- (void)registerBanWithButton:(UIButton *)arg1;
- (void)registerHeartWithButton:(UIButton *)arg1;
- (void)registerTopLevelViewController:(UIViewController *)arg1;
@property(nonatomic, readonly) _Bool shouldShowDefaultConfirmation;
@end

