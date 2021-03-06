//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, SPTVoiceCommand, SPTVoiceRecognitionTask;

@protocol SPTVoiceRecognitionTaskDelegate <NSObject>
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didUpdateMeanAudioLevel:(double)arg2 peakAudioLevel:(double)arg3;
- (void)voiceRecognitionTaskDidReceiveFinalTranscription:(SPTVoiceRecognitionTask *)arg1;
- (void)voiceRecognitionTaskDidReceiveEndOfSpeech:(SPTVoiceRecognitionTask *)arg1;
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didUpdateTranscript:(NSString *)arg2;
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didFailWithError:(NSError *)arg2;
- (void)voiceRecognitionTask:(SPTVoiceRecognitionTask *)arg1 didFinishWithCommand:(SPTVoiceCommand *)arg2;
- (void)voiceRecognitionTaskDidStartListening:(SPTVoiceRecognitionTask *)arg1;
- (NSString *)provideUtteranceId;

@optional
- (void)voiceRecognitionTaskDidSendFirstAudioData:(SPTVoiceRecognitionTask *)arg1;
@end

