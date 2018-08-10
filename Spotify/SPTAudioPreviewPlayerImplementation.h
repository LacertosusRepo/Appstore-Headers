//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAudioPreviewObserver.h"
#import "SPTAudioPreviewPlayer.h"
#import "SPTPlayerObserver.h"

@class NSString, NSURL, SPTAudioPreview, SPTAudioSessionActivator, SPTDataLoaderFactory, SPTObserverManager, SPTPlayerState;

@interface SPTAudioPreviewPlayerImplementation : NSObject <SPTPlayerObserver, SPTAudioPreviewObserver, SPTAudioPreviewPlayer>
{
    _Bool _playerPreviouslyPlaying;
    long long _origin;
    NSString *_trackIdentifier;
    NSURL *_trackURI;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTPlayer> _player;
    id <SPTProductState> _productState;
    id <SPTAudioSessionController> _audioSessionController;
    SPTObserverManager *_observerManager;
    SPTPlayerState *_playerState;
    SPTAudioPreview *_preview;
    SPTAudioSessionActivator *_audioSessionActivator;
}

@property(retain, nonatomic) SPTAudioSessionActivator *audioSessionActivator; // @synthesize audioSessionActivator=_audioSessionActivator;
@property(nonatomic, getter=isPlayerPreviouslyPlaying) _Bool playerPreviouslyPlaying; // @synthesize playerPreviouslyPlaying=_playerPreviouslyPlaying;
@property(retain, nonatomic) SPTAudioPreview *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
@property(retain, nonatomic) NSString *trackIdentifier; // @synthesize trackIdentifier=_trackIdentifier;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)audioSampleDidChangeVolume:(id)arg1;
- (void)audioSampleDidStopPlaying:(id)arg1;
- (void)audioSampleDidStartPlaying:(id)arg1;
- (void)audioSampleWillStartPlaying:(id)arg1;
- (void)dealloc;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)setOrigin:(long long)arg1 trackIdentifier:(id)arg2 trackURI:(id)arg3 maximumPlayTime:(id)arg4 shouldLoop:(_Bool)arg5;
- (id)initWithDataLoaderFactory:(id)arg1 player:(id)arg2 productState:(id)arg3 audioSessionController:(id)arg4;
- (void)play:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)stop;
- (void)pause:(CDUnknownBlockType)arg1;
- (void)play:(CDUnknownBlockType)arg1 trackIdentifier:(id)arg2 trackURI:(id)arg3 maximumPlayTime:(id)arg4 shouldLoop:(_Bool)arg5 origin:(long long)arg6;
@property(readonly, nonatomic) double endTime;
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) double playTime;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

