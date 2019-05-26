//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTVoiceCommand, SPTVoiceSpeechRecognitionDataLoader;

@protocol SPTVoiceSpeechRecognitionDataLoaderDelegate <NSObject>
- (void)speechRecognitionDataLoaderDidSendFirstAudioData:(SPTVoiceSpeechRecognitionDataLoader *)arg1;
- (void)speechRecognitionDataLoader:(SPTVoiceSpeechRecognitionDataLoader *)arg1 didFinishWithResult:(SPTVoiceCommand *)arg2;
- (void)speechRecognitionDataLoader:(SPTVoiceSpeechRecognitionDataLoader *)arg1 didUpdateTranscript:(NSString *)arg2;
- (void)speechRecognitionDataLoader:(SPTVoiceSpeechRecognitionDataLoader *)arg1 didFailWithError:(NSError *)arg2;
- (void)speechRecognitionDataLoaderDidReceiveReadyForSpeech:(SPTVoiceSpeechRecognitionDataLoader *)arg1;
- (void)speechRecognitionDataLoaderDidReceiveFinalTranscription:(SPTVoiceSpeechRecognitionDataLoader *)arg1;
- (void)speechRecognitionDataLoaderDidReceiveEndOfSpeech:(SPTVoiceSpeechRecognitionDataLoader *)arg1;
- (NSString *)provideUtteranceIdentifier;
@end
