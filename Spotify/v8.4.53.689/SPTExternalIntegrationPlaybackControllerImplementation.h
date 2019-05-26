//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationPlaybackController.h"
#import "SPTPlayerObserver.h"

@class NSSet, NSString, SPTExternalIntegrationPlatformLoggerImplementation, SPTExternalIntegrationPlayQueueContentFactory, SPTObserverManager, SPTPlayerState;

@interface SPTExternalIntegrationPlaybackControllerImplementation : NSObject <SPTPlayerObserver, SPTExternalIntegrationPlaybackController>
{
    id <SPTAudioSessionController> _audioSessionController;
    NSSet *_playbackCoordinatorRegistry;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    SPTExternalIntegrationPlatformLoggerImplementation *_logger;
    SPTObserverManager *_observerManager;
    id <SPTPlayer> _player;
    SPTExternalIntegrationPlayQueueContentFactory *_queueContentFactory;
}

@property(readonly, nonatomic) SPTExternalIntegrationPlayQueueContentFactory *queueContentFactory; // @synthesize queueContentFactory=_queueContentFactory;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) SPTExternalIntegrationPlatformLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(retain, nonatomic) NSSet *playbackCoordinatorRegistry; // @synthesize playbackCoordinatorRegistry=_playbackCoordinatorRegistry;
@property(readonly, nonatomic) id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
- (void).cxx_destruct;
- (id)playbackCoordinatorForURI:(id)arg1;
- (void)getFilteredPlayQueueWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enqueueTrackWithURI:(id)arg1 accessorySessionID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekTo:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)player:(id)arg1 didEncounterError:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
@property(readonly, nonatomic) SPTPlayerState *playerState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)skipToPreviousTrackWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)skipToNextTrackWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setRepeatTrack:(_Bool)arg1 repeatContext:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)disableRepeatWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)repeatTrackWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)repeatContextWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableShuffleWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enableShuffleWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resumeWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pauseWithAccessorySessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)initiatePlaybackWithURI:(id)arg1 options:(id)arg2 origin:(id)arg3 requestOptions:(id)arg4 accessorySessionID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 currentAccessory:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 origin:(id)arg3 currentAccessory:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)canPlayContentWithURI:(id)arg1;
- (void)playContent:(id)arg1 withOptions:(id)arg2 accessorySessionID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canPlayContent:(id)arg1;
- (void)dealloc;
- (id)initWithAudioSessionController:(id)arg1 debugLog:(id)arg2 logger:(id)arg3 playbackCoordinatorRegistry:(id)arg4 player:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
