//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPForegroundObserverDelegate.h"
#import "SPTCanvasLoadStateTrackerObserver.h"
#import "SPTFeatureFlagSignalObserver.h"
#import "SPTGaiaDeviceStateManagerObserver.h"
#import "SPTNowPlayingStateObserver.h"
#import "SPTPlayerObserver.h"

@class NSString, NSURL, SPForegroundObserver, SPTCanvasLoadStateTracker, SPTCanvasTrackCheckerImplementation, SPTPlayerState;

@interface SPTCanvasLogger : NSObject <SPForegroundObserverDelegate, SPTFeatureFlagSignalObserver, SPTNowPlayingStateObserver, SPTPlayerObserver, SPTGaiaDeviceStateManagerObserver, SPTCanvasLoadStateTrackerObserver>
{
    _Bool _isPlayingRemotely;
    _Bool _dataSaverEnabled;
    NSString *_currentVisualState;
    id <SPTLogCenter> _logCenter;
    SPTCanvasTrackCheckerImplementation *_trackChecker;
    SPTCanvasLoadStateTracker *_loadStateTracker;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <SPTNowPlayingStateObservable> _nowPlayingStateObservable;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTGaiaDeviceStateManager> _gaiaStateManager;
    SPForegroundObserver *_foregroundObserver;
    SPTPlayerState *_currentPlayerState;
    NSString *_currentAppState;
    NSString *_currentAudioState;
    NSURL *_currentTrackURI;
    NSString *_currentPageSource;
    id <SPTFeatureFlagSignal> _dataSaverFeatureFlagSignal;
}

+ (id)appStateForForegroundObserver:(id)arg1;
+ (id)visualStateForNowPlayingManager:(id)arg1;
+ (id)pageSourceWithNowPlayingManager:(id)arg1;
@property(nonatomic, getter=isDataSaverEnabled) _Bool dataSaverEnabled; // @synthesize dataSaverEnabled=_dataSaverEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> dataSaverFeatureFlagSignal; // @synthesize dataSaverFeatureFlagSignal=_dataSaverFeatureFlagSignal;
@property(nonatomic) _Bool isPlayingRemotely; // @synthesize isPlayingRemotely=_isPlayingRemotely;
@property(retain, nonatomic) NSString *currentPageSource; // @synthesize currentPageSource=_currentPageSource;
@property(retain, nonatomic) NSURL *currentTrackURI; // @synthesize currentTrackURI=_currentTrackURI;
@property(retain, nonatomic) NSString *currentAudioState; // @synthesize currentAudioState=_currentAudioState;
@property(retain, nonatomic) NSString *currentAppState; // @synthesize currentAppState=_currentAppState;
@property(retain, nonatomic) SPTPlayerState *currentPlayerState; // @synthesize currentPlayerState=_currentPlayerState;
@property(readonly, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(readonly, nonatomic) __weak id <SPTGaiaDeviceStateManager> gaiaStateManager; // @synthesize gaiaStateManager=_gaiaStateManager;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) id <SPTNowPlayingStateObservable> nowPlayingStateObservable; // @synthesize nowPlayingStateObservable=_nowPlayingStateObservable;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) SPTCanvasLoadStateTracker *loadStateTracker; // @synthesize loadStateTracker=_loadStateTracker;
@property(readonly, nonatomic) SPTCanvasTrackCheckerImplementation *trackChecker; // @synthesize trackChecker=_trackChecker;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)audioStateForPlayerState:(id)arg1;
- (id)canvasIdForPlayerState:(id)arg1;
- (_Bool)isPlayerStatePlaying:(id)arg1;
- (void)logStateChangeForPlaybackId:(id)arg1 canvasId:(id)arg2 entityUri:(id)arg3 trackTime:(double)arg4 trackTotalTime:(double)arg5 visualState:(id)arg6 audioState:(id)arg7 appFocusState:(id)arg8 loadState:(id)arg9 pageSource:(id)arg10 isRemote:(_Bool)arg11;
- (void)logWithPlayerState:(id)arg1 audioState:(id)arg2;
- (void)logTrackDidEndWithPlayerState:(id)arg1;
- (void)logTrackDidStartWithPlayerState:(id)arg1;
- (void)logWithPlayerState:(id)arg1;
- (void)logCurrentState;
- (_Bool)shouldLogWithPlayerState:(id)arg1;
- (void)deviceStateManager:(id)arg1 playingRemotelyDidChange:(_Bool)arg2;
- (void)nowPlayingBarViewControllerDidAppearInContainerViewController:(id)arg1;
- (void)headUnitViewDidAppear:(id)arg1 inContainerViewController:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)foregroundObserverDidHibernate:(id)arg1;
- (void)foregroundObserverDidAwake:(id)arg1;
- (void)updateAppStateWithForegroundObserver:(id)arg1;
- (void)loadStateUpdater:(id)arg1 didUpdateforCanvasId:(id)arg2;
- (void)removeObservers;
- (void)addObservers;
@property(retain, nonatomic) NSString *currentVisualState; // @synthesize currentVisualState=_currentVisualState;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 canvasTrackChecker:(id)arg2 loadStateTracker:(id)arg3 nowPlayingManager:(id)arg4 nowPlayingStateObservable:(id)arg5 playerFeature:(id)arg6 gaiaStateManager:(id)arg7 dataSaverFeatureFlagSignal:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
