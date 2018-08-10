//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MLPlayerDelegate.h"
#import "YTAudioSessionRouteChangeObserver.h"
#import "YTAudioTrackSwitchDelegate.h"
#import "YTContentVideoPlayerOverlayDelegate.h"
#import "YTCowatchLicenseCheckerDelegate.h"
#import "YTCowatchPlaybackObserver.h"
#import "YTCowatchSingleVideoControllerDelegate.h"
#import "YTCowatchVideoResolverDelegate.h"
#import "YTLiveStreamStatusCheckerDelegate.h"
#import "YTPlaybackController.h"
#import "YTPlayerHeartbeatControllerDelegate.h"
#import "YTPlayerViewDelegate.h"
#import "YTPlayerVisibilityProvider.h"
#import "YTSystemNotificationsObserver.h"
#import "YTVideoQualitySwitchDelegate.h"

@class GIMMe, MLAudioSession, MLPlayerPool, NSError, NSString, UIViewController<YTContentVideoPlayerOverlayProtocol>, UIViewController<YTPlayerOverlayProtocol>, UIViewController<YTVideoPlayerOverlayProtocol>, YTAudioTrackSwitchController, YTCPN, YTCowatchLicenseChecker, YTCowatchPlaybackData, YTCowatchSingleVideoController, YTCowatchVideoResolver, YTIWatchNextResponse, YTInteractionLoggingProxyButton, YTLiveStreamStatusChecker, YTPlaybackConfig, YTPlaybackLockScreenController, YTPlayerHeartbeatController, YTPlayerResponse, YTPlayerTransition, YTPlayerView, YTTimedAction, YTVarispeedSwitchController, YTVideoQualitySwitchController;

@interface YTCowatchPlaybackViewController : UIViewController <YTAudioSessionRouteChangeObserver, MLPlayerDelegate, YTAudioTrackSwitchDelegate, YTContentVideoPlayerOverlayDelegate, YTCowatchLicenseCheckerDelegate, YTLiveStreamStatusCheckerDelegate, YTPlayerHeartbeatControllerDelegate, YTPlayerViewDelegate, YTPlayerVisibilityProvider, YTCowatchSingleVideoControllerDelegate, YTSystemNotificationsObserver, YTVideoQualitySwitchDelegate, YTCowatchVideoResolverDelegate, YTCowatchPlaybackObserver, YTPlaybackController>
{
    YTCowatchSingleVideoController *_videoController;
    MLPlayerPool *_playerPool;
    YTPlayerView *_playerView;
    id <YTPlayerOverlayFactory> _playerOverlayFactory;
    UIViewController<YTPlayerOverlayProtocol> *_activePlayerOverlay;
    UIViewController<YTContentVideoPlayerOverlayProtocol> *_contentVideoPlayerOverlay;
    YTPlayerHeartbeatController *_heartbeatController;
    YTLiveStreamStatusChecker *_liveStreamStatusChecker;
    YTCowatchLicenseChecker *_licenseChecker;
    double _savedMediaTime;
    id <YTPlayerViewControllerConfig> _config;
    YTPlayerTransition *_playerTransition;
    YTCowatchPlaybackData *_contentPlaybackData;
    NSError *_error;
    _Bool _shouldResumePlaybackWhenActive;
    _Bool _hasFocus;
    _Bool _wasPlayingBeforeSuspend;
    _Bool _userScrubbing;
    _Bool _startPlayback;
    _Bool _playbackInSyncWithLivePlayhead;
    _Bool _pinchToRotateEnabled;
    _Bool _isVisible;
    int _audioSessionTaskID;
    double _expansionCoefficient;
    unsigned long long _consecutiveFailedPlaybacks;
    _Bool _inlinePlaybackActive;
    long long _inlinePlaybackLayout;
    _Bool _audioOnlyModeActive;
    _Bool _userAudioOnlyModeActive;
    _Bool _blackoutActive;
    _Bool _externalPlaybackAllowed;
    MLAudioSession *_audioSession;
    _Bool _audioFromNonBuiltInSpeaker;
    _Bool _audioFromVSSCapableDevice;
    _Bool _audioCastingActive;
    id <YTStoryboardController> _storyboardController;
    YTPlaybackLockScreenController *_lockScreenController;
    int _playerViewLayout;
    double _seekTime;
    YTIWatchNextResponse *_watchNextResponse;
    YTCowatchVideoResolver *_activeVideoResolver;
    YTCowatchVideoResolver *_earlyFetchVideoResolver;
    double _minimumSeekableTime;
    YTPlaybackConfig *_playbackConfig;
    _Bool _seeking;
    double _seekingTime;
    YTTimedAction *_checkReadyTimedAction;
    YTInteractionLoggingProxyButton *_dragDropProxyButton;
    _Bool _hasNextVideo;
    _Bool _hasPreviousVideo;
    _Bool _playlistControlsHidden;
    _Bool _transitioningPlayerViewLayout;
    _Bool _externalPlaybackActive;
    int _state;
    UIViewController<YTVideoPlayerOverlayProtocol> *_activeVideoPlayerOverlay;
    YTAudioTrackSwitchController *_audioTrackController;
    id <YTPlaybackControllerEventsDelegate> _eventsDelegate;
    id <YTResponder> _parentResponder;
    id <YTPlaybackControllerUIDelegate> _UIDelegate;
    YTVideoQualitySwitchController *_videoQualityController;
    GIMMe *_gimme;
    id <YTCowatchControllerAutoplayDelegate> _autoplayDelegate;
}

@property(nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(nonatomic) __weak id <YTCowatchControllerAutoplayDelegate> autoplayDelegate; // @synthesize autoplayDelegate=_autoplayDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTVideoQualitySwitchController *videoQualityController; // @synthesize videoQualityController=_videoQualityController;
@property(nonatomic) __weak id <YTPlaybackControllerUIDelegate> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
@property(nonatomic, getter=isTransitioningPlayerViewLayout) _Bool transitioningPlayerViewLayout; // @synthesize transitioningPlayerViewLayout=_transitioningPlayerViewLayout;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool playlistControlsHidden; // @synthesize playlistControlsHidden=_playlistControlsHidden;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) _Bool hasPreviousVideo; // @synthesize hasPreviousVideo=_hasPreviousVideo;
@property(nonatomic) _Bool hasNextVideo; // @synthesize hasNextVideo=_hasNextVideo;
@property(nonatomic) __weak id <YTPlaybackControllerEventsDelegate> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
@property(readonly, nonatomic) UIViewController<YTContentVideoPlayerOverlayProtocol> *contentVideoPlayerOverlay; // @synthesize contentVideoPlayerOverlay=_contentVideoPlayerOverlay;
@property(readonly, nonatomic) YTAudioTrackSwitchController *audioTrackController; // @synthesize audioTrackController=_audioTrackController;
@property(readonly, nonatomic) UIViewController<YTVideoPlayerOverlayProtocol> *activeVideoPlayerOverlay; // @synthesize activeVideoPlayerOverlay=_activeVideoPlayerOverlay;
- (void).cxx_destruct;
- (_Bool)shouldScrubToTime:(double)arg1;
- (void)notifyLoggingControllersOfPlayerStatusChange;
- (void)shutdownNonLoggingPlaybackServices;
- (id)shutdownPlaybackServicesAndActiveVideoController;
- (void)activatePlayer;
- (void)applyWatchNextResponse;
- (void)setWatchNextResponse:(id)arg1;
- (_Bool)isAppInBackground;
- (_Bool)isLockScreenDisabled;
- (void)updateLockScreenController;
- (_Bool)isPlaybackBackgroundable;
- (void)updateExternalPlaybackAllowedForVideoController;
- (void)replayVideo;
- (void)storeCrashReportPlaybackData;
- (void)handleRemoteControlEvent:(long long)arg1;
- (void)togglePlayPause;
- (_Bool)canResumePlayback;
- (_Bool)isVideoFinished;
- (struct CGSize)playerViewportSize;
- (struct CGSize)playerSizeInPixels;
- (void)doneWithAudioSessionForPlayback;
- (void)activateAudioSessionForPlayback;
- (void)stopBackgroundPlayback;
- (void)setPlaybackControllerState:(int)arg1;
- (void)updatePlayerViewWithActivePlayerOverlay;
- (void)activateOverlay:(id)arg1 updatePlayerView:(_Bool)arg2;
- (void)clearOverlay:(id)arg1;
- (void)clearActivePlayerOverlay;
- (void)setAndActivateVideoController:(id)arg1;
- (void)loadPlayerWithPlaybackData:(id)arg1 singleVideo:(id)arg2;
- (void)prepareContentOverlay;
- (void)removeLiveStreamStatusChecker;
- (void)activateLiveStreamStatusChecker;
- (_Bool)isCurrentVideoLiveStreamWithStatusChecker;
- (void)loadOrRestoreMainVideo;
- (void)initializeOrFailForOfflineLiveStream;
- (void)initializeOrFailPlayback;
- (void)playIfPermitted;
- (id)playerStatus;
- (void)resetToState:(int)arg1;
@property(readonly, nonatomic) YTPlayerResponse *playerResponse;
- (void)setContentPlaybackData:(id)arg1;
- (void)playbackDidFailWithError:(id)arg1;
- (void)playerStateDidChangeToReadyToPlay;
- (void)updateActivePlayerOverlayTimes;
- (void)playerStateDidChangeToError;
- (void)playerStateDidChangeToPaused;
- (void)playerStateDidChangeToPlaying;
- (void)playerStateDidChangeToFinished;
- (void)playerStateDidChangeToLoadingContent;
- (void)setInfoCardsPlayerResponse:(id)arg1;
- (void)reloadPlayerResponseAndSaveMediaTime:(_Bool)arg1 startPlayback:(_Bool)arg2;
- (_Bool)shouldReloadPlayerResponse;
- (void)sendTimingEventWithType:(int)arg1 data:(id)arg2;
- (void)failWithReset:(_Bool)arg1 error:(id)arg2;
- (void)failWithError:(id)arg1;
- (id)createLicenseCheckerForPlayerResponse:(id)arg1;
- (id)videoController;
- (void)setAudioTrackController:(id)arg1;
- (void)setVideoQualityController:(id)arg1;
- (_Bool)shouldResumePlaybackWhenActive;
- (id)heartbeatController;
- (void)audioTrackDidChange:(id)arg1;
- (id)selectedAudioTrack;
- (void)appWillTerminate:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)maybeStopBackgroundPlayback;
- (void)appWillResignActive:(id)arg1;
- (void)outputRouteDidChange;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (_Bool)accessibilityPerformMagicTap;
- (id)videoFormatConstraintForVideoQualitySwitchController:(id)arg1;
- (void)videoQualitySwitchController:(id)arg1 didSelectFormatConstraint:(id)arg2;
- (id)selectedVideoFormatForVideoQualitySwitchController:(id)arg1;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
- (_Bool)isContentPanAllowedForPlayerView:(id)arg1;
- (void)playerViewViewportSizeDidChange:(id)arg1;
- (void)playerViewDidPinchToSmallscreen:(id)arg1;
- (void)playerViewDidPinchToFullscreen:(id)arg1;
- (void)playerViewDidDragDrop:(id)arg1;
- (id)dragDropShareURLForPlayerView:(id)arg1;
- (void)captionsDidFailWithError:(id)arg1;
- (void)captionDisplayControllerDidChange:(id)arg1;
- (void)availableCaptionTracksDidChange:(id)arg1;
- (void)activeCaptionTrackDidChange:(id)arg1;
- (void)playerDidSwitchToTimelineSection:(id)arg1;
- (void)playerRateDidChange:(float)arg1;
- (void)playerPeggedToLiveDidChange:(_Bool)arg1;
- (void)setAutonavController:(id)arg1;
- (void)audioRouteDidChange:(_Bool)arg1;
- (void)setInlinePlaybackLayout:(long long)arg1;
- (_Bool)isInlinePlaybackActive;
- (void)switchToInlinePlayback:(_Bool)arg1;
- (void)playerHasSelectableFormats:(id)arg1;
- (void)playerDidSelectVideoFormat:(id)arg1 audioFormat:(id)arg2 percentCached:(float)arg3;
- (void)playerExternalPlaybackActiveStateDidChange:(_Bool)arg1;
- (void)seekableTimeRangeDidChangeToMinimumTime:(double)arg1 maximumTime:(double)arg2;
- (void)bufferedMediaTimeDidChangeToTime:(double)arg1;
- (void)totalMediaTimeDidChangeToTime:(double)arg1;
- (void)currentTimeDidChange:(CDStruct_39925896)arg1;
- (void)playerForegroundAudioOnlyPlaybackReasonDidChange:(int)arg1;
- (void)refreshStreamingDataAndStartPlayback:(_Bool)arg1;
- (void)reloadPlayerAndStartPlayback:(_Bool)arg1;
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)userDidSelectCaptionTrack:(id)arg1;
- (void)didPressCopyDebugInfo;
- (void)didDismissModal;
- (void)didPressRewindWithTimeInterval:(double)arg1;
- (void)didPressFastForwardWithTimeInterval:(double)arg1;
- (void)didPressReplay;
- (void)didPressLiveSync;
- (void)didPressPlayerBarNext;
- (void)didPressPlayerBarReplay;
- (void)didTogglePlayPause;
- (void)didPressToggleFullscreen;
- (void)didStartScrubbing;
- (void)didScrubToProductionTime:(double)arg1;
- (void)didScrubToTime:(double)arg1;
- (void)didSeekToProductionTime:(double)arg1;
- (void)didSeekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
@property(readonly, nonatomic) YTVarispeedSwitchController *varispeedController;
- (void)liveStreamStatusChecker:(id)arg1 wantsToTransitionToStreamEndpoint:(id)arg2;
- (void)resetWithCurrentPlayerTransition;
- (void)heartbeatControllerDidReceiveUnplayableStatus:(id)arg1 forVideoID:(id)arg2;
- (void)liveStreamStatusCheckerWantsToStopPlayback:(id)arg1;
- (void)liveStreamStatusChecker:(id)arg1 wantsToReloadLiveStreamWithVideoID:(id)arg2;
- (void)licenseChecker:(id)arg1 failedHeartbeatForVideoID:(id)arg2 withError:(id)arg3;
@property(readonly, nonatomic) id <YTSingleVideoObservable> contentVideo;
@property(readonly, nonatomic) id <YTSingleVideoObservable> activeVideo;
- (id)currentAd;
- (id)contentPlayerMacroState;
- (id)lastKnownAdPlayerMacroState;
- (int)playerVisibility;
- (void)setRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)seekToEnd;
@property(nonatomic, getter=isExternalPlaybackAllowed) _Bool externalPlaybackAllowed;
- (void)setBlackoutActive:(_Bool)arg1;
- (void)setUserAudioOnlyModeActive:(_Bool)arg1;
- (_Bool)isShowingLiveChat;
- (void)showLiveChat:(_Bool)arg1;
- (void)showAddToMenuFromView:(id)arg1;
- (void)setPinchToRotateEnabled:(_Bool)arg1;
- (void)scrubToTime:(double)arg1;
- (void)setVolume:(float)arg1;
- (void)replay;
- (void)resumePlayback;
- (void)suspendPlayback;
- (_Bool)consecutiveFailedPlaybacksBelowAcceptanceThreshold;
- (_Bool)shouldAutoplayForFinishedVideo;
- (_Bool)shouldAutoplayForFailedPlayback;
- (_Bool)arePlayerControlsHidden;
- (id)selectedVideoFormat;
- (id)playbackDebugData;
- (void)didPressSkipAd;
- (void)didPressCompanionAd;
@property(readonly, nonatomic) _Bool isPlayingAdIntro;
@property(readonly, nonatomic) _Bool isPlayingAdSurvey;
@property(readonly, nonatomic) _Bool isPlayingAd;
@property(readonly, nonatomic) _Bool isPlaybackFinished;
- (_Bool)isCurrentVideoVerticallyCropped;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical;
@property(readonly, nonatomic) YTCPN *contentVideoCPN;
@property(readonly, nonatomic) double contentVideoMediaTime;
@property(readonly, nonatomic) double currentVideoMediaTime;
- (void)restoreToState:(id)arg1 playbackConfig:(id)arg2;
- (id)restorableState;
- (void)resetToLoading;
- (void)reset;
@property(readonly, nonatomic) NSString *currentVideoID;
- (id)playlistID;
@property(readonly, nonatomic) NSString *contentVideoID;
- (_Bool)handlesAutoplayingInternally;
- (void)autoplayForUnplayablePlayerResponseDidFail;
- (void)loadWithPlayerTransition:(id)arg1 playbackConfig:(id)arg2;
- (void)fetchPlayerDataAndResolveVideo;
- (void)loadWithPlayerTransition:(id)arg1 playbackConfig:(id)arg2 initialMediaTime:(double)arg3;
- (void)startEarlyPlayerDataFetchWithPlayerTransition:(id)arg1;
- (void)prepareToLoadWithPlayerTransition:(id)arg1 expectedLayout:(id)arg2;
@property(readonly, nonatomic) long long playerState;
- (void)willLoseFocus;
- (void)didGainFocus;
- (void)resetContentOverlayAndActivateAfterInlinePlaybackSwitch;
- (void)didReceiveLoadableMediaData:(id)arg1;
- (void)resetConsecutiveFailedPlaybacks;
- (void)resetConsecutiveFailedPlaybacksForVideoResolver:(id)arg1;
- (void)videoResolver:(id)arg1 didError:(id)arg2;
- (void)videoResolver:(id)arg1 didResolveVideoWithPlaybackData:(id)arg2 reason:(long long)arg3;
- (_Bool)isExternalPlaybackActiveForVideoResolver:(id)arg1;
- (int)playerVisibilityForVideoResolver:(id)arg1;
- (_Bool)shouldLogChangeToPlayingPlayerState;
- (void)singleVideoControllerBackgroundabilityDidChange:(id)arg1;
- (_Bool)detectAirplayAdSkipWithCurrentMediaTime:(double)arg1;
- (void)hideSpinner;
- (void)showSpinner;
- (void)didReceivePlaybackChange:(long long)arg1 timeMs:(long long)arg2;
@property(nonatomic, getter=isActivePlayback) _Bool activePlayback;
- (void)pauseVideoNoAnimation;
- (void)pauseVideo;
- (void)playVideo;
- (_Bool)checkIfReady;
- (void)playRequestedForVideo;
- (void)didPressPause;
- (void)didPressPlay;
- (void)didEndScrubbing;
@property(readonly, nonatomic) double currentVideoTotalMediaTime;
- (void)removeHeartbeatResponseHandler:(id)arg1;
- (void)addHeartbeatResponseHandler:(id)arg1;
@property(readonly, nonatomic) _Bool isVRModeActive;
- (void)dealloc;
- (id)playerSnapshotView;
- (id)internalPlaybackController;
@property(readonly, nonatomic) YTPlayerView *playerView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1 overlayFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
