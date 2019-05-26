//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTStatefulPlayerObserver-Protocol.h"

@class NSString, SPTObserverManager, SPTPlayerTrack, SPTStatefulPlayer;

@interface SPTNowPlayingTrackMetadataQueue : NSObject <SPTStatefulPlayerObserver>
{
    SPTObserverManager *_observerManager;
    SPTStatefulPlayer *_player;
}

@property(retain, nonatomic) SPTStatefulPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
- (void).cxx_destruct;
- (void)playerDidSynchronizeQueue:(id)arg1;
- (void)playerNextTrackDidChange:(id)arg1;
- (void)playerDidFinishUpdating:(id)arg1;
- (void)playerDidUpdatePlaybackControls:(id)arg1;
- (void)playerDidUpdateTrackPosition:(id)arg1;
- (void)player:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (long long)numberOfPreviousTracks;
- (long long)numberOfNextTracks;
- (void)willSkipToNext;
@property(readonly, nonatomic, getter=isInSync) _Bool inSync;
@property(readonly, nonatomic) SPTPlayerTrack *playingMetadata;
@property(readonly, nonatomic) SPTPlayerTrack *currentMetadata;
- (_Bool)disallowPeekingAtRelativeIndex:(long long)arg1;
- (_Bool)disallowSkippingToRelativeIndex:(long long)arg1;
- (id)metadataAtRelativeIndex:(long long)arg1;
- (void)skipToPreviousTrack;
- (void)skipToNextTrack;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
