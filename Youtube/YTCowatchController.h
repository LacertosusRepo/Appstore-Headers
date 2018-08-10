//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YCHPlaybackEventsProvider.h"
#import "YTActiveVideoProvider.h"
#import "YTActiveVideoReportingRendererProvider.h"
#import "YTCowatchControllerAutoplayDelegate.h"
#import "YTOfflineabilityResponderProvider.h"
#import "YTPlaybackControllerEventsDelegate.h"
#import "YTPlaybackControllerUIDelegate.h"
#import "YTPlaybackDebugDataProvider.h"
#import "YTPlaylistPanelControllerPlaybackDelegate.h"
#import "YTResponder.h"
#import "YTSpeedyGResponderProvider.h"
#import "YTWatchControllerProtocol.h"
#import "YTWatchNextStateResponderProvider.h"
#import "YTYouThereControllerDelegate.h"

@class GIMMe, NSHashTable, NSMutableDictionary, NSString, YTCowatchPlaybackViewController, YTDelayedWatchNextService, YTICommand, YTIMenuRenderer, YTIVideoReportingSupportedRenderers, YTIWatchNextResponse, YTInnerTubeControllerFactory, YTPlaybackDebugData, YTPlayerResponse, YTPlayerWatchNextOrderingController, YTShareEndpointController, YTVideoQualityPromoController, YTWatchNextViewController, YTYouThereController;

@interface YTCowatchController : NSObject <YCHPlaybackEventsProvider, YTPlaybackControllerUIDelegate, YTSpeedyGResponderProvider, YTYouThereControllerDelegate, YTActiveVideoProvider, YTActiveVideoReportingRendererProvider, YTOfflineabilityResponderProvider, YTCowatchControllerAutoplayDelegate, YTPlaybackControllerEventsDelegate, YTPlaybackDebugDataProvider, YTPlaylistPanelControllerPlaybackDelegate, YTResponder, YTWatchControllerProtocol, YTWatchNextStateResponderProvider>
{
    id <YTWatchNextResultsControllerProtocol> _watchNextResultsController;
    YTICommand *_navigationEndpoint;
    int _watchEndpointSource;
    YTPlaybackDebugData *_savedPlaybackDebugData;
    YTPlayerResponse *_savedPlayerResponse;
    _Bool _watchNextResponseLoaded;
    NSHashTable *_offlineabilityObservers;
    NSHashTable *_speedyGObservers;
    NSHashTable *_playbackEventsObservers;
    YTVideoQualityPromoController *_videoQualityPromoController;
    YTIVideoReportingSupportedRenderers *_videoReportingRenderers;
    YTIMenuRenderer *_addToMenuRenderer;
    id <YTWatchFlowControllerProtocol> _watchFlowController;
    id <YTAdInnerTubeConfig> _adInnerTubeConfig;
    YTPlayerWatchNextOrderingController *_orderingController;
    YTDelayedWatchNextService *_delayedWatchNextService;
    YTYouThereController *_youThereController;
    YTIWatchNextResponse *_lastInitialWatchNextResponse;
    _Bool _pausedBeforePlayback;
    id <YTCrashRestoreVideoProtocol> _crashRestoreVideoController;
    id <YTWatchUIStateResponderProvider> _watchUIStateResponderProvider;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTWatchControllerDelegate> _watchControllerDelegate;
    id <YTServices> _services;
    id <YTDataServices> _dataServices;
    id <YTPlayerServices> _playerServices;
    id <YTShareServices> _shareServices;
    id <MDXServices> _MDXServices;
    YTInnerTubeControllerFactory *_innerTubeControllerFactory;
    YTCowatchPlaybackViewController *_playerViewController;
    YTWatchNextViewController *_watchNextViewController;
    unsigned long long _watchPlaylistEndpointRequestID;
    YTShareEndpointController *_shareEndpointController;
    YTICommand *_watchTransitionNavigationEndpoint;
    YTICommand *_shareEndpoint;
    YTICommand *_sharePrivateEndpoint;
    id <YTInfoCardContainerProtocol> _watchNextInfoCardContainer;
    NSMutableDictionary *_inlinedTransitions;
}

@property(retain, nonatomic) NSMutableDictionary *inlinedTransitions; // @synthesize inlinedTransitions=_inlinedTransitions;
@property(readonly, nonatomic) id <YTInfoCardContainerProtocol> watchNextInfoCardContainer; // @synthesize watchNextInfoCardContainer=_watchNextInfoCardContainer;
@property(retain, nonatomic) YTICommand *sharePrivateEndpoint; // @synthesize sharePrivateEndpoint=_sharePrivateEndpoint;
@property(retain, nonatomic) YTICommand *shareEndpoint; // @synthesize shareEndpoint=_shareEndpoint;
@property(retain, nonatomic) YTICommand *watchTransitionNavigationEndpoint; // @synthesize watchTransitionNavigationEndpoint=_watchTransitionNavigationEndpoint;
@property(retain, nonatomic) YTShareEndpointController *shareEndpointController; // @synthesize shareEndpointController=_shareEndpointController;
@property(readonly, nonatomic) unsigned long long watchPlaylistEndpointRequestID; // @synthesize watchPlaylistEndpointRequestID=_watchPlaylistEndpointRequestID;
@property(readonly, nonatomic) YTWatchNextViewController *watchNextViewController; // @synthesize watchNextViewController=_watchNextViewController;
@property(readonly, nonatomic) YTCowatchPlaybackViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) YTInnerTubeControllerFactory *innerTubeControllerFactory; // @synthesize innerTubeControllerFactory=_innerTubeControllerFactory;
@property(readonly, nonatomic) __weak id <MDXServices> MDXServices; // @synthesize MDXServices=_MDXServices;
@property(readonly, nonatomic) __weak id <YTShareServices> shareServices; // @synthesize shareServices=_shareServices;
@property(readonly, nonatomic) __weak id <YTPlayerServices> playerServices; // @synthesize playerServices=_playerServices;
@property(readonly, nonatomic) __weak id <YTDataServices> dataServices; // @synthesize dataServices=_dataServices;
@property(readonly, nonatomic) __weak id <YTServices> services; // @synthesize services=_services;
@property(nonatomic) __weak id <YTWatchControllerDelegate> watchControllerDelegate; // @synthesize watchControllerDelegate=_watchControllerDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)displayFirstMealbarInPlayerResponse:(id)arg1 withTriggerCondition:(int)arg2;
- (id)navigationEndpoint;
- (void)setCrashRestoreVideoParameters:(int)arg1;
- (_Bool)isCompanionAdLoaded;
- (void)loadCompanionAd:(id)arg1;
- (void)setAdWatchNextResponse:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)handleWatchNavigationEndpointResponderEvent:(id)arg1;
- (_Bool)handleNavigationEndpointResponderEvent:(id)arg1;
- (void)notifyOfflineabilityObserversDidChange;
- (void)loadWatchNextInfoCardControllers;
- (id)getPlayerResponseAppInfoCard;
- (_Bool)isShowingLiveChat;
- (void)showLiveChat:(_Bool)arg1;
- (void)loadCompanionFromPlayerResponse;
- (_Bool)handleOfflineButtonEvent:(id)arg1;
- (void)notifySpeedyGObservers;
- (void)maybeCreateAndSetYouThereControllerWithPlayerResponse:(id)arg1;
- (id)watchNextServiceForNavEndpoint:(id)arg1;
- (void)createWatchNextViewControllerIfNeeded;
- (void)destroyWatchNextViewController;
- (void)claimPlayerViewController;
- (id)createPlayerViewController;
- (void)removeCompanionAd;
- (void)resetPlayerViewControllerStartPlayback:(_Bool)arg1 latencyLogger:(id)arg2;
- (void)updatePlayerControllerControls;
- (id)CSN;
- (void)setWatchFlowController:(id)arg1;
- (void)prepareWithWatchNextResponse:(id)arg1;
- (id)currentMediaTimeEndpoint;
- (id)resign;
- (void)applyWatchTransition:(id)arg1 startPlayback:(_Bool)arg2;
- (void)maybeAutoplayFollowingFinishedVideo;
- (_Bool)shouldExitFullscreenOnFinish;
- (void)fetchWatchEndpointForWatchTransition:(id)arg1 startPlayback:(_Bool)arg2;
- (_Bool)isMDXActive;
- (void)exitFullScreenIfRequired;
- (id)currentCSN;
- (void)youThereControllerDidTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (_Bool)isPlaybackVideoPlayingAd;
- (_Bool)isPlaybackVideoPlaying;
- (double)contentVideoMediaTime;
- (void)removePlaybackEventsObserver:(id)arg1;
- (void)addPlaybackEventsObserver:(id)arg1;
- (void)addOfflineabilityChangeObserver:(id)arg1;
- (void)addSpeedyGObserver:(id)arg1;
- (_Bool)playlistShuffleEnabledOnLoad;
- (void)setAutoplay:(id)arg1 autonav:(id)arg2 playlistPanel:(id)arg3 playlistUIDelegate:(id)arg4 infoCardContainer:(id)arg5 liveChatContainer:(id)arg6 watchNextResults:(id)arg7 descriptionDetails:(id)arg8 currentEndpoint:(id)arg9 videoReportingRenderers:(id)arg10 addToMenuRenderer:(id)arg11 shareEndpoint:(id)arg12 surveyRenderer:(id)arg13 watchNextResponse:(id)arg14;
- (id)activeVideoReportingRenderer;
- (void)showAddToMenuFromView:(id)arg1;
- (void)adDidComplete:(long long)arg1;
- (void)hideWatch;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)playbackControllerDidPressPause;
- (void)playbackControllerDidPressReplay;
- (void)playbackControllerDidPressPlay;
- (void)playbackRouteDidChange;
- (void)playbackControllerCurrentVideoAspectRatioDidChange:(double)arg1;
- (void)playbackControllerDidPressCopyDebugInfo;
- (void)playbackControllerDidFinishPlayingAd;
- (void)playbackControllerDidReceivePlayerResponse:(id)arg1;
- (void)playbackControllerWillFailWithError:(id)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(id)arg1;
- (void)playbackControllerDidPause;
- (void)playbackControllerDidPlay;
- (void)playbackControllerStateDidChange;
- (void)playbackControllerDidFinishPlayback;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)maybeAutoplayFollowingFailedPlayback;
- (id)playbackDebugData;
- (_Bool)isActiveVideoPlayable;
- (unsigned long long)activeVideoIndex;
- (id)activePlaylistID;
- (double)activeVideoMediaTime;
- (id)activeVideoID;
- (_Bool)shouldReloadVideoForWatchTransition:(id)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
- (void)handleChangePlaybackPositionCommand:(id)arg1;
- (void)handleNextTrackCommand:(id)arg1;
- (void)handlePreviousTrackCommand:(id)arg1;
- (void)handlePauseCommand:(id)arg1;
- (void)handlePlayCommand:(id)arg1;
- (void)handleTogglePlayPauseCommand:(id)arg1;
- (void)noopHandler:(id)arg1;
- (void)clearNavEndpoint;
- (void)reloadWatchNextIfNecessary;
- (void)reloadStartPlayback:(_Bool)arg1;
- (void)reload;
- (void)setWatchTransition:(id)arg1 startPlayback:(_Bool)arg2;
- (void)setWatchTransition:(id)arg1;
- (void)prepareForWatchTransition:(id)arg1 expectedLayout:(id)arg2;
- (id)parentCSN;
- (void)dealloc;
- (id)initWithWatchFlowController:(id)arg1 parentResponder:(id)arg2 handleRemoteCommands:(_Bool)arg3;
- (id)initWithWatchFlowController:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
