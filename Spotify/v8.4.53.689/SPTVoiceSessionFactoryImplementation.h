//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoiceSessionFactory.h"

@class NSString, SPTVoiceDynamicCommandSuggestionsGenerator;

@interface SPTVoiceSessionFactoryImplementation : NSObject <SPTVoiceSessionFactory>
{
    id <SPTVoiceRecognitionTaskFactory> _voiceRecognitionTaskFactory;
    id <SPTVoiceCommandHandler> _voiceCommandHandler;
    id <SPTPlayer> _player;
    id <SPTVoiceUtteranceIdentifierProvider> _utteranceIdProvider;
    id <SPTVoiceAudioSession> _audioSessionManager;
    SPTVoiceDynamicCommandSuggestionsGenerator *_suggestionGenerator;
}

@property(readonly, nonatomic) SPTVoiceDynamicCommandSuggestionsGenerator *suggestionGenerator; // @synthesize suggestionGenerator=_suggestionGenerator;
@property(readonly, nonatomic) id <SPTVoiceAudioSession> audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(readonly, nonatomic) id <SPTVoiceUtteranceIdentifierProvider> utteranceIdProvider; // @synthesize utteranceIdProvider=_utteranceIdProvider;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTVoiceCommandHandler> voiceCommandHandler; // @synthesize voiceCommandHandler=_voiceCommandHandler;
@property(readonly, nonatomic) id <SPTVoiceRecognitionTaskFactory> voiceRecognitionTaskFactory; // @synthesize voiceRecognitionTaskFactory=_voiceRecognitionTaskFactory;
- (void).cxx_destruct;
- (id)createVoiceSessionWithInitialUtteranceId:(id)arg1;
- (id)createVoiceSession;
- (id)initWithVoiceRecognitionTaskFactory:(id)arg1 audioSessionManager:(id)arg2 voiceCommandHandler:(id)arg3 player:(id)arg4 utteranceIdProvider:(id)arg5 suggestionGenerator:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

