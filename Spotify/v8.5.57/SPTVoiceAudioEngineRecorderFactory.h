//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceAudioRecorderFactory-Protocol.h"

@class AVAudioEngine, AVAudioFormat, AVAudioInputNode, NSHashTable, NSString, SPTVoiceAudioLevelMonitor;
@protocol OS_dispatch_queue, SPTVoiceOnboardingRecordPermissionsState;

@interface SPTVoiceAudioEngineRecorderFactory : NSObject <SPTVoiceAudioRecorderFactory>
{
    _Bool _recording;
    double _sampleRate;
    NSObject<OS_dispatch_queue> *_audioSetupQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <SPTVoiceOnboardingRecordPermissionsState> _permissionsReducer;
    SPTVoiceAudioLevelMonitor *_audioLevelMonitor;
    NSHashTable *_recorders;
    AVAudioEngine *_audioEngine;
    AVAudioInputNode *_inputNode;
    AVAudioFormat *_audioFormatPCM16;
}

@property(retain, nonatomic) AVAudioFormat *audioFormatPCM16; // @synthesize audioFormatPCM16=_audioFormatPCM16;
@property(retain, nonatomic) AVAudioInputNode *inputNode; // @synthesize inputNode=_inputNode;
@property(retain, nonatomic) AVAudioEngine *audioEngine; // @synthesize audioEngine=_audioEngine;
@property(retain, nonatomic) NSHashTable *recorders; // @synthesize recorders=_recorders;
@property(retain, nonatomic) SPTVoiceAudioLevelMonitor *audioLevelMonitor; // @synthesize audioLevelMonitor=_audioLevelMonitor;
@property(readonly, nonatomic) id <SPTVoiceOnboardingRecordPermissionsState> permissionsReducer; // @synthesize permissionsReducer=_permissionsReducer;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *audioSetupQueue; // @synthesize audioSetupQueue=_audioSetupQueue;
@property(readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (void)configurationChangeNotification:(id)arg1;
- (void)notifyError:(id)arg1;
- (void)notifyErrorWithStatusCode:(int)arg1 description:(id)arg2;
- (void)notifyRecordedAudioChunk:(void *)arg1 ofSize:(unsigned int)arg2;
- (void)notifyAudioLevelChanged;
- (void)installInputTapAndDownSampler;
- (_Bool)createAudioNodesIfRequired;
- (struct AudioStreamBasicDescription)createAudioStreamDescriptionWithSampleRate:(double)arg1;
- (void)recordMicrophonePermissionsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)supportsLevelMonitoring;
- (void)stopRecording;
- (_Bool)startRecording;
- (void)disposeAudioNodes;
- (void)disposeAudioRecorder;
- (id)createAudioRecorder;
- (void)stopRecordingWithRecorder:(id)arg1;
- (void)startRecordingWithRecorder:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSampleRate:(double)arg1 delegateQueue:(id)arg2 permissionsReducer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

