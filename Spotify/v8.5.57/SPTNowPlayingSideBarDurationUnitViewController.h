//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingDurationUnitViewModelDelegate-Protocol.h"
#import "SPTNowPlayingDurationViewV2DataSource-Protocol.h"
#import "SPTNowPlayingDurationViewV2Delegate-Protocol.h"
#import "SPTNowPlayingSliderV2DataSource-Protocol.h"

@class NSString, SPTNowPlayingDurationUnitViewModelImplementation, SPTNowPlayingDurationViewV2, SPTTheme;
@protocol SPTNowPlayingContainingViewController;

@interface SPTNowPlayingSideBarDurationUnitViewController : UIViewController <SPTNowPlayingSliderV2DataSource, SPTNowPlayingDurationUnitViewModelDelegate, SPTNowPlayingDurationViewV2DataSource, SPTNowPlayingDurationViewV2Delegate, SPTNowPlayingContainedViewController>
{
    SPTTheme *_theme;
    SPTNowPlayingDurationUnitViewModelImplementation *_viewModel;
    SPTNowPlayingDurationViewV2 *_durationView;
}

@property(retain, nonatomic) SPTNowPlayingDurationViewV2 *durationView; // @synthesize durationView=_durationView;
@property(readonly, nonatomic) SPTNowPlayingDurationUnitViewModelImplementation *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)updateLabelsVisibility;
- (void)hideLabels;
- (void)hideLabelsAfterTrackChangeTime;
- (void)showLabelsTemporarily;
- (void)nowPlayingDurationViewDidTapSlider:(id)arg1;
- (void)nowPlayingDurationViewDidEndScrubbing:(id)arg1;
- (void)nowPlayingDurationViewProgressDidChange:(id)arg1;
- (void)nowPlayingDurationViewDidScrub:(id)arg1;
- (void)nowPlayingDurationViewDidBeginScrubbing:(id)arg1;
- (void)nowPlayingDurationViewToggleTimeRemainingLabel:(id)arg1;
- (void)nowPlayingDurationViewToggleAlwaysShowDurationLabels:(id)arg1;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (struct CGSize)preferredContentSize;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)setupConstraints;
- (void)setupDurationView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

