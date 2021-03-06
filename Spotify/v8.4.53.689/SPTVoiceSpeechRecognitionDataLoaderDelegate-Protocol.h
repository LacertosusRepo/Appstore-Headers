//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, SPTVoiceCommand, SPTVoiceSpeechRecognitionDataLoader;

@protocol SPTVoiceSpeechRecognitionDataLoaderDelegate <NSObject>
- (void)speechRecognitionDataLoader:(SPTVoiceSpeechRecognitionDataLoader *)arg1 didFinishWithResult:(SPTVoiceCommand *)arg2;
- (void)speechRecognitionDataLoader:(SPTVoiceSpeechRecognitionDataLoader *)arg1 didUpdateTranscript:(NSString *)arg2;
- (void)speechRecognitionDataLoader:(SPTVoiceSpeechRecognitionDataLoader *)arg1 didFailWithError:(NSError *)arg2;
- (void)speechRecognitionDataLoaderDidReceiveReadyForSpeech:(SPTVoiceSpeechRecognitionDataLoader *)arg1;
- (void)speechRecognitionDataLoaderDidReceiveFinalTranscription:(SPTVoiceSpeechRecognitionDataLoader *)arg1;
- (void)speechRecognitionDataLoaderDidReceiveEndOfSpeech:(SPTVoiceSpeechRecognitionDataLoader *)arg1;
- (NSString *)provideUtteranceIdentifier;
@end

