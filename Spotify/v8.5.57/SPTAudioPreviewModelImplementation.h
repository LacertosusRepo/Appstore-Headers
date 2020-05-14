//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioPreviewModel-Protocol.h"
#import "SPTAudioPreviewPlayerObserver-Protocol.h"

@class NSNumber, NSString, NSURL;
@protocol SPTAudioPreviewModelDelegate, SPTAudioPreviewPlayer;

@interface SPTAudioPreviewModelImplementation : NSObject <SPTAudioPreviewPlayerObserver, SPTAudioPreviewModel>
{
    _Bool _loopingEnabled;
    id <SPTAudioPreviewModelDelegate> _delegate;
    NSNumber *_maximumPlayTime;
    id <SPTAudioPreviewPlayer> _player;
    NSString *_trackIdentifier;
    NSURL *_trackURI;
}

@property(copy, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
@property(copy, nonatomic) NSString *trackIdentifier; // @synthesize trackIdentifier=_trackIdentifier;
@property(readonly, nonatomic) id <SPTAudioPreviewPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSNumber *maximumPlayTime; // @synthesize maximumPlayTime=_maximumPlayTime;
@property(nonatomic, getter=isLoopingEnabled) _Bool loopingEnabled; // @synthesize loopingEnabled=_loopingEnabled;
@property(nonatomic) __weak id <SPTAudioPreviewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)audioPreviewPlayerDidStop:(id)arg1;
- (void)audioPreviewPlayerDidPause:(id)arg1;
- (void)audioPreviewPlayerDidBeginPlaying:(id)arg1;
- (void)audioPreviewPlayerDidLoadNewTrackIdentifier:(id)arg1;
- (void)setTrackIdentifier:(id)arg1 andTrackURI:(id)arg2;
- (void)stop;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)play:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long origin;
@property(readonly, nonatomic) double endTime;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) double playTime;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (id)initWithPlayer:(id)arg1 trackIdentifier:(id)arg2 trackURI:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
