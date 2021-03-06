//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAudioDriverControllerObserver.h"
#import "SPTAudioDriverObserver.h"
#import "SPTAudioSessionController.h"
#import "SPTFeatureFlagSignalObserver.h"
#import "SPTPlayerObserver.h"

@class AVAudioSession, NSString, SPTObserverManager, SPTPlayerState;

@interface SPTAudioSessionControllerImpl : NSObject <SPTPlayerObserver, SPTAudioDriverControllerObserver, SPTAudioDriverObserver, SPTFeatureFlagSignalObserver, SPTAudioSessionController>
{
    _Bool _active;
    _Bool _interrupted;
    _Bool _shouldResumePlaybackAfterInterruption;
    _Bool _autoLockDisabled;
    id <SPTAudioSessionControllerDelegate> _delegate;
    id <SPTPlayer> _player;
    id <SPTAudioDriverController> _audioDriverController;
    CDUnknownBlockType _isLocalPlaybackEnabled;
    AVAudioSession *_audioSession;
    long long _lockActiveCount;
    SPTPlayerState *_lastPlayerState;
    unsigned long long _backgroundTaskIdentifier;
    id <SPTAutoLockOverrideToken> _autoLockOverride;
    SPTObserverManager *_observerManager;
    id <SPTFeatureFlagSignal> _featureFlagSignal;
}

@property(nonatomic, getter=isAutoLockDisabled) _Bool autoLockDisabled; // @synthesize autoLockDisabled=_autoLockDisabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> featureFlagSignal; // @synthesize featureFlagSignal=_featureFlagSignal;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property _Bool shouldResumePlaybackAfterInterruption; // @synthesize shouldResumePlaybackAfterInterruption=_shouldResumePlaybackAfterInterruption;
@property _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(retain) id <SPTAutoLockOverrideToken> autoLockOverride; // @synthesize autoLockOverride=_autoLockOverride;
@property unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property long long lockActiveCount; // @synthesize lockActiveCount=_lockActiveCount;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(copy) CDUnknownBlockType isLocalPlaybackEnabled; // @synthesize isLocalPlaybackEnabled=_isLocalPlaybackEnabled;
@property(retain, nonatomic) id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTAudioSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)refreshAudioSessionConfiguration:(id *)arg1;
- (id)observerNotifierProxy;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)audioDriverWillStartRunning:(id)arg1;
- (void)audioDriverDidStopRunning:(id)arg1;
- (void)audioDriverDidStartRunning:(id)arg1;
- (void)audioDriverController:(id)arg1 didRemoveAudioDriver:(id)arg2;
- (void)audioDriverController:(id)arg1 didAddAudioDriver:(id)arg2;
- (void)deactivate;
- (_Bool)configureAudioSessionCategories:(id *)arg1;
- (_Bool)internalActivateAudioSession:(id *)arg1;
- (_Bool)activate:(id *)arg1;
- (void)updateState;
- (_Bool)audioSessionDelegateAllowsModifyingAudioSession;
- (_Bool)routeDescription:(id)arg1 matchesPortType:(id)arg2;
- (_Bool)hasActiveAudioDriver;
- (void)setAudioDriversSuspended:(_Bool)arg1;
- (void)unlockActiveAudioSession:(id)arg1;
- (void)lockActiveAudioSession:(id)arg1;
- (void)noteExplictPauseCommandIssued;
- (id)activateAudioSession;
- (void)invalidate;
- (void)signalHasReceivedState:(long long)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 audioDriverController:(id)arg2 isLocalPlaybackEnabled:(CDUnknownBlockType)arg3 audioSession:(id)arg4 featureFlagBuilder:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

