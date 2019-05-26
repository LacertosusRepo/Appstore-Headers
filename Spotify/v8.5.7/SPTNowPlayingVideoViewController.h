//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingDurationViewDataSource-Protocol.h"
#import "SPTNowPlayingDurationViewDelegate-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"
#import "SPTNowPlayingTrackPositionObserver-Protocol.h"
#import "SPTNowPlayingVideoTimerDelegate-Protocol.h"
#import "SPTNowPlayingVideoViewDelegate-Protocol.h"

@class NSString, SPTNowPlayingBaseHeadUnitController, SPTNowPlayingLogger, SPTNowPlayingSkipLimitReachedMessageRequester, SPTNowPlayingVideoTimer, SPTNowPlayingVideoView, SPTNowPlayingVideoViewModel, SPTStatusBarToken, SPTTheme, UIView;
@protocol SPTLinkDispatcher, SPTLocalSettings, SPTNowPlayingVideoViewControllerDelegate, SPTPodcastContextMenuProvider, SPTQueueLogger, SPTVideoSurfaceManager;

@interface SPTNowPlayingVideoViewController : UIViewController <SPTNowPlayingDurationViewDataSource, SPTNowPlayingDurationViewDelegate, SPTNowPlayingTrackPositionObserver, SPTNowPlayingVideoViewDelegate, SPTNowPlayingVideoTimerDelegate, SPTNowPlayingTrackMetadataQueueObserver>
{
    _Bool _shouldNotifyDismissal;
    _Bool _visible;
    id <SPTNowPlayingVideoViewControllerDelegate> _delegate;
    UIView *_animationView;
    SPTTheme *_theme;
    SPTNowPlayingVideoViewModel *_viewModel;
    id <SPTVideoSurfaceManager> _videoSurfaceManager;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTNowPlayingBaseHeadUnitController *_headUnitController;
    id <SPTLocalSettings> _localSettings;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTNowPlayingVideoView *_videoView;
    SPTNowPlayingVideoTimer *_dismissControlsTimer;
    SPTStatusBarToken *_statusBarToken;
}

@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool shouldNotifyDismissal; // @synthesize shouldNotifyDismissal=_shouldNotifyDismissal;
@property(retain, nonatomic) SPTStatusBarToken *statusBarToken; // @synthesize statusBarToken=_statusBarToken;
@property(retain, nonatomic) SPTNowPlayingVideoTimer *dismissControlsTimer; // @synthesize dismissControlsTimer=_dismissControlsTimer;
@property(retain, nonatomic) SPTNowPlayingVideoView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTNowPlayingBaseHeadUnitController *headUnitController; // @synthesize headUnitController=_headUnitController;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) id <SPTVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) SPTNowPlayingVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) __weak id <SPTNowPlayingVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoTimerDidFire:(id)arg1;
- (void)videoViewSurfaceDidDetach:(id)arg1;
- (void)videoViewSurfaceDidAttach:(id)arg1;
- (void)videoView:(id)arg1 didChangeControlsVisibility:(_Bool)arg2;
- (void)trackMetadataQueueDidFinishUpdating:(id)arg1;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)durationView:(id)arg1 didChangeAlwaysShowDurationLabelsValue:(_Bool)arg2;
- (void)durationViewTappedSlider:(id)arg1;
- (void)durationViewTappedTimeRemainingLabel:(id)arg1;
- (void)durationViewEndedScrubbing:(id)arg1;
- (void)durationViewBeganScrubbing:(id)arg1;
- (void)durationView:(id)arg1 trackProgressChanged:(float)arg2;
- (_Bool)durationViewDisallowSeeking:(id)arg1;
- (double)durationViewAnimationSpeed:(id)arg1;
- (double)durationViewCurrentDuration:(id)arg1;
- (double)durationViewCurrentPosition:(id)arg1;
- (void)updateAuxiliaryAction;
- (void)updateLoadingState;
- (void)updateEntityLabels;
- (void)seekForwardAction:(id)arg1;
- (void)seekBackAction:(id)arg1;
- (void)openTrackClickURL;
- (void)showContextMenu;
- (void)dismissAction:(id)arg1;
- (void)touchInterceptedWithGestureRecognizer:(id)arg1;
- (void)addGestureRecognizers;
- (void)addFixedConstraints;
- (void)updateButtonStates;
- (void)hookupControls;
- (void)setupSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2 videoSurfaceManager:(id)arg3 podcastContextMenuProvider:(id)arg4 skipLimitReachedMessageRequester:(id)arg5 localSettings:(id)arg6 logger:(id)arg7 queueLogger:(id)arg8 animationView:(id)arg9 linkDispatcher:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
