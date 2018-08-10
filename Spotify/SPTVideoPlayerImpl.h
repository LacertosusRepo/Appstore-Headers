//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationDriverDistractionObserver.h"
#import "SPTVideoPlaybackSessionDelegate.h"
#import "SPTVideoPlayer.h"
#import "SPTVideoSurfaceManagerDataSource.h"

@class NSMutableOrderedSet, NSString, SPTObserverManager, SPTVideoAudioStackMediaSynchronizer, SPTVideoKeyframeLoaderImpl, SPTVideoPlaybackSession, SPTVideoPlaybackSessionFactory, SPTVideoPlayerSource, SPTVideoPreferences, SPTVideoSubtitleFactoryImpl, SPTVideoSurfaceManagerImpl, UIView<SPTVideoSurface>;

@interface SPTVideoPlayerImpl : NSObject <SPTVideoPlaybackSessionDelegate, SPTVideoSurfaceManagerDataSource, SPTExternalIntegrationDriverDistractionObserver, SPTVideoPlayer>
{
    _Bool _repeat;
    _Bool _muted;
    _Bool _shouldResumeOnActive;
    _Bool _allowRoyaltyVideos;
    _Bool _allowMultipleSurfaces;
    UIView<SPTVideoSurface> *_surfaceView;
    id <SPTVideoSubtitle> _preferredSubtitle;
    id <SPTVideoContextPlayerDelegate> _delegate;
    SPTVideoPlaybackSessionFactory *_sessionFactory;
    SPTVideoSubtitleFactoryImpl *_subtitleFactory;
    id <SPTAudioPlayerMediaClockService> _audioPlayerMediaClockService;
    id <SPTLogCenter> _logCenter;
    NSString *_featureIdentifier;
    SPTVideoPreferences *_videoPreferences;
    SPTVideoKeyframeLoaderImpl *_keyframeLoader;
    SPTVideoSurfaceManagerImpl *_surfaceManager;
    SPTVideoPlaybackSession *_currentSession;
    SPTVideoAudioStackMediaSynchronizer *_audioStackMediaSynchronizer;
    SPTVideoPlayerSource *_playerSource;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    id <SPTVideoPlaybackRequestFactory> _playbackRequestFactory;
    NSMutableOrderedSet *_observerFactories;
    SPTObserverManager *_playbackEventObserverManager;
}

@property(nonatomic) _Bool allowMultipleSurfaces; // @synthesize allowMultipleSurfaces=_allowMultipleSurfaces;
@property(nonatomic) _Bool allowRoyaltyVideos; // @synthesize allowRoyaltyVideos=_allowRoyaltyVideos;
@property(nonatomic) _Bool shouldResumeOnActive; // @synthesize shouldResumeOnActive=_shouldResumeOnActive;
@property(retain, nonatomic) SPTObserverManager *playbackEventObserverManager; // @synthesize playbackEventObserverManager=_playbackEventObserverManager;
@property(retain, nonatomic) NSMutableOrderedSet *observerFactories; // @synthesize observerFactories=_observerFactories;
@property(retain, nonatomic) id <SPTVideoPlaybackRequestFactory> playbackRequestFactory; // @synthesize playbackRequestFactory=_playbackRequestFactory;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(retain, nonatomic) SPTVideoAudioStackMediaSynchronizer *audioStackMediaSynchronizer; // @synthesize audioStackMediaSynchronizer=_audioStackMediaSynchronizer;
@property(retain, nonatomic) SPTVideoPlaybackSession *currentSession; // @synthesize currentSession=_currentSession;
@property(retain, nonatomic) SPTVideoSurfaceManagerImpl *surfaceManager; // @synthesize surfaceManager=_surfaceManager;
@property(retain, nonatomic) SPTVideoKeyframeLoaderImpl *keyframeLoader; // @synthesize keyframeLoader=_keyframeLoader;
@property(retain, nonatomic) SPTVideoPreferences *videoPreferences; // @synthesize videoPreferences=_videoPreferences;
@property(retain, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTAudioPlayerMediaClockService> audioPlayerMediaClockService; // @synthesize audioPlayerMediaClockService=_audioPlayerMediaClockService;
@property(retain, nonatomic) SPTVideoSubtitleFactoryImpl *subtitleFactory; // @synthesize subtitleFactory=_subtitleFactory;
@property(retain, nonatomic) SPTVideoPlaybackSessionFactory *sessionFactory; // @synthesize sessionFactory=_sessionFactory;
@property(nonatomic) __weak id <SPTVideoContextPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool repeat; // @synthesize repeat=_repeat;
- (void).cxx_destruct;
- (void)externalIntegrationDriverDistractionController:(id)arg1 didChangeEnabledState:(_Bool)arg2;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)willResignActive;
- (id)availableSubtitles;
- (id)selectedSubtitle;
@property(retain, nonatomic) id <SPTVideoSubtitle> preferredSubtitle; // @synthesize preferredSubtitle=_preferredSubtitle;
- (void)removePlaybackEventObserver:(id)arg1;
- (void)addPlaybackEventObserver:(id)arg1;
- (void)videoPlaybackSession:(id)arg1 didEncounterUnrecoverableError:(id)arg2;
- (void)videoPlaybackSessionDidFinish:(id)arg1;
- (void)videoPlaybackSession:(id)arg1 stateDidChange:(id)arg2;
- (void)videoPlaybackSession:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlaybackSessionDidStart:(id)arg1;
- (void)surfaceWillHaveNoPlayer;
- (void)fullscreenSurfaceIsVisible:(_Bool)arg1;
- (double)currentPlayingVideoAspectRatioForSurfaceManager:(id)arg1;
- (id)currentlyPlayingIdentityForSurfaceManager:(id)arg1;
- (void)registerPlaybackEventObserverFactoryBlock:(CDUnknownBlockType)arg1;
- (void)registerPlaybackEventObserverFactory:(id)arg1;
- (void)loadLoggerFactories;
- (void)stopWithReason:(id)arg1 nextIdentity:(id)arg2;
- (void)prefetchTracks:(id)arg1;
- (void)loadSessionWithIdentity:(id)arg1;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *surfaceView; // @synthesize surfaceView=_surfaceView;
- (id)provideSurfaceManager;
- (id)providePlaybackRequestFactory;
- (id)providePlayerSource;
- (void)stopWithReason:(id)arg1;
- (void)stop;
- (void)seekTo:(double)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double currentTime;
@property(nonatomic) float playbackRate;
@property(nonatomic, getter=isPaused) _Bool paused;
- (void)resume;
- (void)pause;
- (void)playVideoWithPlaybackRequest:(id)arg1;
- (void)dealloc;
- (id)initWithPlaybackSessionFactory:(id)arg1 logCenter:(id)arg2 featureIdentifier:(id)arg3 driverDistraction:(id)arg4 videoPreferences:(id)arg5 keyframeLoader:(id)arg6 playbackRequestFactory:(id)arg7 subtitleFactory:(id)arg8 audioPlayerMediaClockService:(id)arg9 allowRoyaltyVideos:(_Bool)arg10 allowMultipleSurfaces:(_Bool)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
