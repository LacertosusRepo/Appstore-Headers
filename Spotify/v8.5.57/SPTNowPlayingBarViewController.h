//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTBarInteractiveTransitionParticipant-Protocol.h"
#import "SPTNowPlayingDurationUnitViewModelDelegate-Protocol.h"
#import "SPTNowPlayingDurationViewV2DataSource-Protocol.h"
#import "SPTNowPlayingUnitProviderObserver-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTNowPlayingBarLeftAccessoryUnitProvider, SPTNowPlayingBarLogger, SPTNowPlayingBarModel, SPTNowPlayingDurationViewV2, SPTNowPlayingLogger, SPTTheme, UIView;
@protocol SPTNowPlayingDurationUnitViewModel, SPTNowPlayingManager, SPTNowPlayingTestManager, SPTPageContainer;

@interface SPTNowPlayingBarViewController : UIViewController <SPTNowPlayingUnitProviderObserver, SPTNowPlayingDurationViewV2DataSource, SPTNowPlayingDurationUnitViewModelDelegate, SPTBarInteractiveTransitionParticipant, SPTPageController>
{
    SPTTheme *_theme;
    SPTNowPlayingBarModel *_model;
    id <SPTNowPlayingManager> _nowPlayingManager;
    UIViewController *_barViewController;
    SPTNowPlayingBarLeftAccessoryUnitProvider *_leftAccessoryUnitProvider;
    UIView *_animationView;
    id <SPTNowPlayingDurationUnitViewModel> _viewModel;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingLogger *_logger;
    SPTNowPlayingBarLogger *_barLogger;
    UIView *_backgroundView;
    SPTNowPlayingDurationViewV2 *_durationView;
    UIView *_contentView;
    UIView *_leadingView;
    UIView *_bottomSeparatorView;
}

@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *leadingView; // @synthesize leadingView=_leadingView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTNowPlayingDurationViewV2 *durationView; // @synthesize durationView=_durationView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SPTNowPlayingBarLogger *barLogger; // @synthesize barLogger=_barLogger;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingDurationUnitViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(readonly, nonatomic) SPTNowPlayingBarLeftAccessoryUnitProvider *leftAccessoryUnitProvider; // @synthesize leftAccessoryUnitProvider=_leftAccessoryUnitProvider;
@property(readonly, nonatomic) UIViewController *barViewController; // @synthesize barViewController=_barViewController;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) SPTNowPlayingBarModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (struct CGSize)preferredContentSize;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)addViewController:(id)arg1 toView:(id)arg2;
- (void)provider:(id)arg1 willReplaceViewController:(id)arg2 with:(id)arg3;
- (_Bool)shouldShowBar;
- (id)backgroundViewForBarTransition:(id)arg1;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (void)trackMetadataDidFinishUpdating;
- (void)trackMetadataDidMove:(_Bool)arg1;
- (void)trackPositionDidChange;
- (void)handleTap:(id)arg1;
- (void)setupTapGestureRecognizer;
- (void)setupBottomSeparatorView;
- (void)setupLeadingView;
- (void)setupContentView;
- (void)setupBackgroundView;
- (void)setupDurationView;
- (void)setupContentViewConstraints;
- (void)setupConstraints;
- (void)setupUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 model:(id)arg2 nowPlayingManager:(id)arg3 barViewController:(id)arg4 leftAccessoryUnitProvider:(id)arg5 animationView:(id)arg6 durationViewModel:(id)arg7 testManager:(id)arg8 logger:(id)arg9 barLogger:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
