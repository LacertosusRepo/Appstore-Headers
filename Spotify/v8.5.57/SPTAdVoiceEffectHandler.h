//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAdVoiceCosmosEffectHandler, SPTAdVoiceLogEffectHandler, SPTAdVoicePlayCueEffectHandler, SPTAdVoicePlayerEffectHandler, SPTAdVoiceSpeechRecognitionCommandEffectHandler, SPTAdVoiceStartDelayTimerEffectHandler;

@interface SPTAdVoiceEffectHandler : NSObject
{
    SPTAdVoiceCosmosEffectHandler *_cosmosEffectHandler;
    SPTAdVoiceLogEffectHandler *_voiceLogEffectHandler;
    SPTAdVoicePlayCueEffectHandler *_playCueEffectHandler;
    SPTAdVoicePlayerEffectHandler *_playerEffectHandler;
    SPTAdVoiceSpeechRecognitionCommandEffectHandler *_speechRecognitionEffectHandler;
    SPTAdVoiceStartDelayTimerEffectHandler *_startDelayTimerEffectHandler;
}

@property(readonly, nonatomic) SPTAdVoiceStartDelayTimerEffectHandler *startDelayTimerEffectHandler; // @synthesize startDelayTimerEffectHandler=_startDelayTimerEffectHandler;
@property(readonly, nonatomic) SPTAdVoiceSpeechRecognitionCommandEffectHandler *speechRecognitionEffectHandler; // @synthesize speechRecognitionEffectHandler=_speechRecognitionEffectHandler;
@property(readonly, nonatomic) SPTAdVoicePlayerEffectHandler *playerEffectHandler; // @synthesize playerEffectHandler=_playerEffectHandler;
@property(readonly, nonatomic) SPTAdVoicePlayCueEffectHandler *playCueEffectHandler; // @synthesize playCueEffectHandler=_playCueEffectHandler;
@property(readonly, nonatomic) SPTAdVoiceLogEffectHandler *voiceLogEffectHandler; // @synthesize voiceLogEffectHandler=_voiceLogEffectHandler;
@property(readonly, nonatomic) SPTAdVoiceCosmosEffectHandler *cosmosEffectHandler; // @synthesize cosmosEffectHandler=_cosmosEffectHandler;
- (void).cxx_destruct;
- (CDUnknownBlockType)postAdVoiceLogWithPositionWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postAdVoiceLogWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postMicOnWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postSpeechErrorWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)postSpeechReceivedWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)clearAdSlotsWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)skipToNextTrackWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)playCueWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)playContextURIWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)speechRecognitionCommandWithEventSink:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)startDelayTimerWithEventSink:(CDUnknownBlockType)arg1;
- (void)handleEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)initWithSpeechRecognitionCommandEffectHandler:(id)arg1 playerEffectHandler:(id)arg2 playCueEffectHandler:(id)arg3 startDelayTimerEffectHandler:(id)arg4 cosmosEffectHandler:(id)arg5 voiceLogEffectHandler:(id)arg6;

@end

