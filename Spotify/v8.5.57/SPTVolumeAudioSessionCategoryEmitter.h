//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioSessionControllerObserver-Protocol.h"
#import "SPTVolumeEventEmitter-Protocol.h"

@class AVAudioSession, NSString;
@protocol SPTAudioSessionController, SPTVolumeEventReceiver;

@interface SPTVolumeAudioSessionCategoryEmitter : NSObject <SPTAudioSessionControllerObserver, SPTVolumeEventEmitter>
{
    id <SPTVolumeEventReceiver> delegate;
    id <SPTAudioSessionController> _audioSessionController;
    AVAudioSession *_audioSession;
}

@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(readonly, nonatomic) id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(nonatomic) __weak id <SPTVolumeEventReceiver> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (unsigned long long)eventForCategory:(id)arg1;
- (void)emitCurrentState;
- (void)audioSessionController:(id)arg1 didFailSettingAudioSessionConfiguration:(id)arg2;
- (void)audioSessionController:(id)arg1 willSetAudioSessionCategory:(id)arg2;
- (void)emitInitialState;
- (void)dealloc;
- (void)setupObservation;
- (id)initWithAudioSessionController:(id)arg1 audioSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

