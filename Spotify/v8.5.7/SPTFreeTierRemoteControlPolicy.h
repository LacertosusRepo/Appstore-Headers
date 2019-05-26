//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformObserver-Protocol.h"
#import "SPTNowPlayingRemoteControlPolicy-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSString, SPTObserverManager, SPTPlayerState;
@protocol SPTCollectionPlatform, SPTPlayer;

@interface SPTFreeTierRemoteControlPolicy : NSObject <SPTPlayerObserver, SPTCollectionPlatformObserver, SPTNowPlayingRemoteControlPolicy>
{
    SPTPlayerState *_playerState;
    id <SPTPlayer> _player;
    id <SPTCollectionPlatform> _collectionPlatform;
    SPTPlayerState *_currentState;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTPlayerState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (void)collectionPlatformDidChange:(id)arg1;
- (void)notifyObserversThatPolicyDidChange;
- (void)removeRemoteControlStateUpdateObserver:(id)arg1;
- (void)addRemoteControlStateUpdateObserver:(id)arg1;
- (void)bookmarkButtonPressedWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *localizedTitleForBookmarkCommand;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldBookmarkCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldDislikeCommandBeAvailable;
@property(readonly, nonatomic) NSString *localizedTitleForDislikeCommand;
- (void)dislikeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeSelected;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldLikeCommandBeAvailable;
@property(readonly, nonatomic) NSString *localizedTitleForLikeCommand;
- (void)likeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)shuffleButtonPressedWithShuffleType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeAvailable;
- (void)repeatButtonPressedWithRepeatType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldPauseCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldChangePlaybackPositionCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeAvailable;
- (void)skipForwardWithInterval:(double)arg1;
@property(readonly, nonatomic) NSArray *skipForwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipForwardCommandBeAvailable;
- (void)skipBackwardWithInterval:(double)arg1;
@property(readonly, nonatomic) NSArray *skipBackwardCommandIntervals;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSkipBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldPreviousTrackCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldNextTrackCommandBeAvailable;
- (_Bool)isCurrentTrackVideo;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 collectionPlatform:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
