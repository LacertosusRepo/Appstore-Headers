//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoiceAudioRecorderDelegate.h"
#import "SPTVoiceSpeechRecognitionDataLoaderDelegate.h"

@class NSString, SPTVoiceSpeechRecognitionDataLoader;

@interface SPTVoiceRecognitionTask : NSObject <SPTVoiceAudioRecorderDelegate, SPTVoiceSpeechRecognitionDataLoaderDelegate>
{
    id <SPTVoiceRecognitionTaskDelegate> _delegate;
    unsigned long long _state;
    id <SPTVoiceAudioRecorder> _audioRecorder;
    SPTVoiceSpeechRecognitionDataLoader *_speechRecognitionDataLoader;
}

@property(readonly, nonatomic) SPTVoiceSpeechRecognitionDataLoader *speechRecognitionDataLoader; // @synthesize speechRecognitionDataLoader=_speechRecognitionDataLoader;
@property(readonly, nonatomic) id <SPTVoiceAudioRecorder> audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTVoiceRecognitionTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioRecorder:(id)arg1 didChangeMeanAudioLevel:(float)arg2 peakLevel:(float)arg3;
- (void)audioRecorder:(id)arg1 didFailWithError:(id)arg2;
- (void)audioRecorder:(id)arg1 didRecordAudioChunk:(void *)arg2 ofSize:(unsigned int)arg3;
- (void)audioRecorderDidStartRecording:(id)arg1;
- (void)speechRecognitionDataLoader:(id)arg1 didFailWithError:(id)arg2;
- (void)speechRecognitionDataLoader:(id)arg1 didFinishWithResult:(id)arg2;
- (void)speechRecognitionDataLoader:(id)arg1 didUpdateTranscript:(id)arg2;
- (void)speechRecognitionDataLoaderDidReceiveFinalTranscription:(id)arg1;
- (void)speechRecognitionDataLoaderDidReceiveEndOfSpeech:(id)arg1;
- (void)speechRecognitionDataLoaderDidReceiveReadyForSpeech:(id)arg1;
- (id)provideUtteranceIdentifier;
- (_Bool)transitionToFailedStateWithError:(id)arg1;
- (_Bool)transitionToState:(unsigned long long)arg1;
- (_Bool)shouldAllowTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)stopRecordingIfNecessary;
- (void)startRecording;
- (void)teardown;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithSpeechRecognitionDataLoader:(id)arg1 audioRecorder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

