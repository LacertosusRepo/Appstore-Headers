//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceLibraryAudioSessionDelegate-Protocol.h"
#import "SPTVoiceLibraryNetworkStateObserver-Protocol.h"
#import "SPTVoiceLibraryRecognitionTaskDelegate-Protocol.h"
#import "SPTVoiceLibrarySession-Protocol.h"

@class NSString, SPTObserverManager, SPTVoiceLibraryRecognitionTask, SPTVoiceLibrarySessionHandlingOptions;
@protocol SPTPlayer, SPTVoiceLibraryAudioSession, SPTVoiceLibraryLogger, SPTVoiceLibraryMicrophonePermissionsState><SPTVoiceLibraryAudioRoute, SPTVoiceLibraryNetworkState, SPTVoiceLibraryRecognitionTaskFactory, SPTVoiceLibraryUtteranceIdentifierProvider;

@interface SPTVoiceLibrarySessionImplementation : NSObject <SPTVoiceLibraryRecognitionTaskDelegate, SPTVoiceLibraryNetworkStateObserver, SPTVoiceLibraryAudioSessionDelegate, SPTVoiceLibrarySession>
{
    _Bool _activeSession;
    id <SPTVoiceLibraryRecognitionTaskFactory> _voiceRecognitionTaskFactory;
    id <SPTPlayer> _player;
    SPTVoiceLibraryRecognitionTask *_voiceRecognitionTask;
    SPTObserverManager *_observerManager;
    id <SPTVoiceLibraryAudioSession> _audioSessionManager;
    id <SPTVoiceLibraryUtteranceIdentifierProvider> _utteranceIdProvider;
    SPTVoiceLibrarySessionHandlingOptions *_sessionHandlingOptions;
    NSString *_utteranceIdentifier;
    id <SPTVoiceLibraryMicrophonePermissionsState><SPTVoiceLibraryAudioRoute> _audioRouteHandler;
    id <SPTVoiceLibraryNetworkState> _networkHandler;
    id <SPTVoiceLibraryLogger> _logger;
}

@property(nonatomic) _Bool activeSession; // @synthesize activeSession=_activeSession;
@property(readonly, nonatomic) id <SPTVoiceLibraryLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTVoiceLibraryNetworkState> networkHandler; // @synthesize networkHandler=_networkHandler;
@property(readonly, nonatomic) id <SPTVoiceLibraryMicrophonePermissionsState><SPTVoiceLibraryAudioRoute> audioRouteHandler; // @synthesize audioRouteHandler=_audioRouteHandler;
@property(copy, nonatomic) NSString *utteranceIdentifier; // @synthesize utteranceIdentifier=_utteranceIdentifier;
@property(readonly, nonatomic) SPTVoiceLibrarySessionHandlingOptions *sessionHandlingOptions; // @synthesize sessionHandlingOptions=_sessionHandlingOptions;
@property(retain, nonatomic) id <SPTVoiceLibraryUtteranceIdentifierProvider> utteranceIdProvider; // @synthesize utteranceIdProvider=_utteranceIdProvider;
@property(readonly, nonatomic) id <SPTVoiceLibraryAudioSession> audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTVoiceLibraryRecognitionTask *voiceRecognitionTask; // @synthesize voiceRecognitionTask=_voiceRecognitionTask;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceLibraryRecognitionTaskFactory> voiceRecognitionTaskFactory; // @synthesize voiceRecognitionTaskFactory=_voiceRecognitionTaskFactory;
- (void).cxx_destruct;
- (_Bool)useDevelopmentEndpoint;
- (_Bool)useExternalAudioRecorder;
- (void)relinquishSupportForAudioRecording;
- (void)requestSupportForAudioRecording;
- (_Bool)pausePlaybackIfNeeded;
- (void)handleError:(id)arg1;
- (void)networkStateHandler:(id)arg1 didFailReachabilityWithError:(id)arg2;
- (void)voiceRecognitionTask:(id)arg1 didUpdateMeanAudioLevel:(float)arg2 rmsAudioLevel:(float)arg3 cdfScaledAudioLevel:(float)arg4;
- (void)voiceRecognitionTask:(id)arg1 didUpdateIntermediateResponse:(id)arg2;
- (void)voiceRecognitionTask:(id)arg1 didFailWithError:(id)arg2;
- (void)voiceRecognitionTask:(id)arg1 didReceiveFinalResponse:(id)arg2;
- (void)voiceRecognitionTaskDidStartListening:(id)arg1;
- (id)provideUtteranceId;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)stopListening;
- (void)startListening;
- (_Bool)checkSessionPrerequisites;
- (id)currentUtteranceId;
- (_Bool)hasActiveAudioSessionForAudioRecording;
- (void)dealloc;
- (id)initWithVoiceRecognitionTaskFactory:(id)arg1 audioSessionManager:(id)arg2 player:(id)arg3 utteranceIdProvider:(id)arg4 sessionHandlingOptions:(id)arg5 audioRouteHandler:(id)arg6 networkHandler:(id)arg7 logger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

