//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTVideoPlayerOverlayViewController.h"

#import "YTAnnotationsViewControllerDelegate.h"
#import "YTAutonavEndscreenControllerDelegate.h"
#import "YTContentVideoPlayerOverlayProtocol.h"
#import "YTContentVideoPlayerStoryboard.h"
#import "YTCreatorEndscreenControllerDelegate.h"
#import "YTDoubleTapToSeekControllerDelegate.h"
#import "YTInlinePlayerBarAccessibilityDelegate.h"
#import "YTInnerTubeCollectionAppearanceResponderProvider.h"
#import "YTLiveOfflineSlateDelegate.h"
#import "YTPlayerBarControllerDelegate.h"
#import "YTRelatedVideosViewControllerDelegate.h"
#import "YTVideoZoomOverlayControllerDelegate.h"

@class GIMMe, MLNerdStatsPlaybackData, NSString, UIViewController<YTRendererController>, YTAnnotationsViewController, YTAutonavEndscreenController, YTCowatchPlayerOverlayView, YTCreatorEndscreenViewController, YTDoubleTapToSeekController, YTHotConfig, YTIPlayerOverlayRenderer, YTLiveOfflineSlateViewController, YTPaidContentViewController, YTPlayerBarController, YTPlayerHeartbeatController, YTPlayerResponse, YTRelatedVideosViewController, YTVideoZoomOverlayController;

@interface YTCowatchPlayerOverlayViewController : YTVideoPlayerOverlayViewController <YTAnnotationsViewControllerDelegate, YTCreatorEndscreenControllerDelegate, YTDoubleTapToSeekControllerDelegate, YTInlinePlayerBarAccessibilityDelegate, YTInnerTubeCollectionAppearanceResponderProvider, YTLiveOfflineSlateDelegate, YTPlayerBarControllerDelegate, YTRelatedVideosViewControllerDelegate, YTVideoZoomOverlayControllerDelegate, YTAutonavEndscreenControllerDelegate, YTContentVideoPlayerOverlayProtocol, YTContentVideoPlayerStoryboard>
{
    YTHotConfig *_hotConfig;
    YTLiveOfflineSlateViewController *_liveOfflineSlateViewController;
    YTPlayerResponse *_playerResponse;
    YTIPlayerOverlayRenderer *_playerOverlayRenderer;
    YTPlayerHeartbeatController *_heartbeatController;
    YTDoubleTapToSeekController *_doubleTapToSeekController;
    YTVideoZoomOverlayController *_videoZoomOverlayController;
    long long _preDTTSPlayerState;
    _Bool _liveOfflineSlateShowing;
    _Bool _liveChatShowing;
    _Bool _attemptToAutoEnableCaptionsOnNextMute;
    _Bool _showPlayButtonForEmptyPlayerState;
    _Bool _storyboardEnabled;
    _Bool _doubleTapToSeeking;
    _Bool _hovercardVisible;
    _Bool _controlsHiddenBeforeModal;
    _Bool _scrubbing;
    id <YTContentVideoPlayerOverlayDelegate> _delegate;
    YTAnnotationsViewController *_annotationsViewController;
    YTAutonavEndscreenController *_autonavEndscreenController;
    YTRelatedVideosViewController *_relatedVideosViewController;
    YTCreatorEndscreenViewController *_creatorEndscreenViewController;
    double _totalTime;
    double _minimumSeekableTime;
    double _maximumSeekableTime;
    long long _emptyStatePlaybackButton;
    YTPlayerBarController *_playerBarController;
    YTPaidContentViewController *_paidContentViewController;
    UIViewController<YTRendererController> *_chatOverlayViewController;
}

@property(nonatomic) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(readonly, nonatomic) UIViewController<YTRendererController> *chatOverlayViewController; // @synthesize chatOverlayViewController=_chatOverlayViewController;
@property(retain, nonatomic) YTPaidContentViewController *paidContentViewController; // @synthesize paidContentViewController=_paidContentViewController;
@property(nonatomic) _Bool controlsHiddenBeforeModal; // @synthesize controlsHiddenBeforeModal=_controlsHiddenBeforeModal;
@property(readonly, nonatomic) YTPlayerBarController *playerBarController; // @synthesize playerBarController=_playerBarController;
@property(nonatomic) long long emptyStatePlaybackButton; // @synthesize emptyStatePlaybackButton=_emptyStatePlaybackButton;
@property(nonatomic) double maximumSeekableTime; // @synthesize maximumSeekableTime=_maximumSeekableTime;
@property(nonatomic) double minimumSeekableTime; // @synthesize minimumSeekableTime=_minimumSeekableTime;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(retain, nonatomic) YTCreatorEndscreenViewController *creatorEndscreenViewController; // @synthesize creatorEndscreenViewController=_creatorEndscreenViewController;
@property(readonly, nonatomic) YTRelatedVideosViewController *relatedVideosViewController; // @synthesize relatedVideosViewController=_relatedVideosViewController;
@property(retain, nonatomic) YTAutonavEndscreenController *autonavEndscreenController; // @synthesize autonavEndscreenController=_autonavEndscreenController;
@property(retain, nonatomic) YTAnnotationsViewController *annotationsViewController; // @synthesize annotationsViewController=_annotationsViewController;
@property(readonly, nonatomic, getter=isHovercardVisible) _Bool hovercardVisible; // @synthesize hovercardVisible=_hovercardVisible;
@property(nonatomic) __weak id <YTPlayerOverlayDelegate> delegate;
- (void).cxx_destruct;
- (void)updateVideoZoomControllerEnabled;
- (void)updatePlaybackButtonForEmptyState;
- (void)maybeAutoEnableCaptions;
- (void)volumeDidChange:(id)arg1;
- (long long)defaultVideoControlsVisibility;
- (long long)defaultVideoControlsBehavior;
- (void)didPressShare:(id)arg1;
- (void)didPressChat:(id)arg1;
- (void)didPressAddTo:(id)arg1;
- (void)setAutonavController:(id)arg1;
- (void)removeCreatorEndscreenViewController;
- (void)removePaidContentViewController;
- (void)setCreatorEndscreenWithPlayerData:(id)arg1;
- (void)setAnnotationsWithPlayerData:(id)arg1;
- (void)setPaidContentWithPlayerData:(id)arg1;
@property(readonly, nonatomic) YTCowatchPlayerOverlayView *contentVideoPlayerOverlayView;
- (_Bool)isFullscreen;
- (void)adjustPlayerBarPositionForRelatedVideos;
- (void)updateRelatedVideos;
- (void)updateTopRightButtonsAnimated:(_Bool)arg1;
- (void)updateChatOverlay;
- (id)chatButtonWithEnableImage:(id)arg1 disableImage:(id)arg2;
- (_Bool)canScrubForPlayerState:(long long)arg1;
- (_Bool)canDoubleTapForPlayerState:(long long)arg1;
- (_Bool)shouldShowRecoverableErrorMessage;
- (_Bool)shouldShowScrubUserEducation;
- (void)updatePanGestureRecognizerEnabledForHiddenControls;
- (_Bool)isCurrentVideoVerticallyCropped;
@property(nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical;
- (void)didPressCardboardButton;
- (void)didPressPlayerBarReplay;
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)didScrubPlayerBarToTime:(double)arg1;
- (void)didPressPlayerBarNext;
- (void)didTogglePlayPause;
- (void)didPressLiveSync;
- (void)didPressToggleFullscreen;
- (void)didEndPlayerBarScrubbing;
- (void)didStartPlayerBarScrubbing;
- (void)videoZoomEnded;
- (void)videoZoomBegan;
- (void)setRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (_Bool)innerTubeCollectionViewShowsVerticalScrollIndicator;
- (id)innerTubeCollectionViewBackgroundColor;
- (int)innerTubeCollectionStatusViewStyle;
- (void)didEndDoubleTapToSeek;
- (void)willStartDoubleTapToSeek;
- (_Bool)canDoubleTapForCurrentPlayerState;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)playbackDidFinish;
- (void)setCreatorEndscreenVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPlayerBarCardboardButtonEnabled:(_Bool)arg1;
- (void)setPlayerHeartbeatController:(id)arg1;
- (void)setMarkers:(id)arg1;
- (void)setPlayerViewLayout:(int)arg1;
- (void)liveOfflineSlateWillChangeToShowing:(_Bool)arg1;
- (void)relatedVideosWillChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)hovercardHidden;
- (void)hovercardShown;
- (void)seekToEnd;
- (void)playerControlsBehaviorDidChange:(id)arg1;
- (void)playerControlsVisibilityDidChange:(id)arg1;
- (void)showEndscreenControlsInPlayerBar:(_Bool)arg1 nextButton:(_Bool)arg2 secondsLabel:(_Bool)arg3;
- (void)didHideAutonavEndscreen;
- (void)callToActionAnnotationStateDidUpdate:(int)arg1;
- (void)setFeaturedChannelWatermarkImageView:(id)arg1;
- (id)storyboardControllerDelegate;
@property(nonatomic, getter=isStoryboardEnabled) _Bool storyboardEnabled;
- (void)drawerDidClose;
- (void)setVideoRect:(struct CGRect)arg1;
- (void)userDidStopScrubbing;
- (void)playerControlsWillShow;
- (void)playerControlsWillHide;
- (void)playerControlsDidHide;
- (void)playerStateDidChangeToState:(long long)arg1;
- (void)setAirPlayAllowed:(_Bool)arg1;
- (void)setDownloadedTime:(double)arg1;
- (void)setMinimumSeekableTime:(double)arg1 maximumSeekableTime:(double)arg2;
- (void)setMediaTime:(double)arg1;
- (void)setPlaybackInSyncWithLivePlayhead:(_Bool)arg1;
- (void)setCowatchBlocking:(_Bool)arg1;
- (struct CGRect)playerRenderingViewCustomFrameForFullscreenSize:(struct CGSize)arg1;
- (void)setTitle:(id)arg1;
- (void)updateVideoControlsBehavior;
- (_Bool)isAutonavEndscreenReady;
- (_Bool)isAutonavEndscreenActivated;
- (void)updateControlsVisibilityOnBackgroundTap;
- (void)setMediaTimeForEndscreen:(double)arg1;
- (void)resetAndShowLoading:(_Bool)arg1;
- (void)setInitialChatStateForResponse:(id)arg1 chatButton:(id)arg2;
- (void)setWatchNextResponse:(id)arg1;
- (void)setPlayerResponse:(id)arg1 CPN:(id)arg2;
- (void)removeSplashScreenViewIfPlayerIsLoaded:(long long)arg1;
- (void)setPlayerRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setSplashScreenViewCustomFrame:(struct CGRect)arg1;
- (void)setSplashScreenView:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1 contentVideoPlayerOverlayViewBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(nonatomic) _Bool MDXPlaybackActive;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool disallowQualitySwitch;
@property(nonatomic) _Bool externalPlaybackActive;
@property(nonatomic) int foregroundAudioOnlyPlaybackReason;
@property(nonatomic) __weak GIMMe *gimme;
@property(nonatomic) _Bool hasNextVideo;
@property(nonatomic) _Bool hasPreviousVideo;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) MLNerdStatsPlaybackData *nerdStatsPlaybackData;
@property(readonly, nonatomic) long long playerState;
@property(nonatomic, getter=arePlaylistControlsHidden) _Bool playlistControlsHidden;
@property(readonly) Class superclass;
@property(nonatomic, getter=isUserScrubbing) _Bool userScrubbing;

@end

