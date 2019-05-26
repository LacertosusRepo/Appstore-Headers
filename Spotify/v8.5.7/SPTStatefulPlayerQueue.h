//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTObserverManager, SPTPlayerState, SPTPlayerTrack;
@protocol SPTPlayer;

@interface SPTStatefulPlayerQueue : NSObject
{
    SPTPlayerState *_playerState;
    SPTObserverManager *_observerManager;
    id <SPTPlayer> _player;
    long long _playerQueueOffset;
}

@property(nonatomic) long long playerQueueOffset; // @synthesize playerQueueOffset=_playerQueueOffset;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (void)resynchronizeQueue;
- (_Bool)verifyAndHandleSkipToRelativeIndex:(id)arg1;
- (void)expectSkipToRelativeIndex:(id)arg1;
- (_Bool)isExpectingPlayerSkips;
- (id)performQueueOffsettingBy:(id)arg1 fromLocalChange:(_Bool)arg2;
- (void)offsetQueueBy:(id)arg1 fromLocalChange:(_Bool)arg2;
- (_Bool)nextTrackHasChangedForPlayerState:(id)arg1 givenPlayerState:(id)arg2;
- (id)relativeTrackIndexForPlayerState:(id)arg1 givenPlayerState:(id)arg2;
- (_Bool)isTrack:(id)arg1 equalToTrack:(id)arg2;
- (id)keyForTrackInContext:(id)arg1;
- (id)trackAtRelativePosition:(long long)arg1 forState:(id)arg2;
- (_Bool)predictQueueRestrictionForRelativeIndex:(long long)arg1 disallowPrevious:(_Bool)arg2 disallowNext:(_Bool)arg3;
- (void)updateQueueWithPlayerState:(id)arg1 fromOldPlayerState:(id)arg2;
- (_Bool)disallowPeekingAtRelativeIndex:(long long)arg1;
- (_Bool)disallowSkippingToRelativeIndex:(long long)arg1;
- (long long)numberOfPreviousTracks;
- (long long)numberOfNextTracks;
- (id)queuedTrackAtRelativeIndex:(long long)arg1;
- (void)skipToPreviousTrack;
- (void)skipToNextTrack;
@property(readonly, nonatomic, getter=isQueueInSync) _Bool queueInSync;
@property(readonly, nonatomic) SPTPlayerTrack *playingTrack;
@property(readonly, nonatomic) SPTPlayerTrack *currentTrack;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithPlayer:(id)arg1;

@end
