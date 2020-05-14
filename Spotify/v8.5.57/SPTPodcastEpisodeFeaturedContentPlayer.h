//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTPlayerState;
@protocol SPTEpisodeSegmentsEntity, SPTEpisodeSegmentsModel, SPTPlayer, SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate;

@interface SPTPodcastEpisodeFeaturedContentPlayer : NSObject <SPTPlayerObserver>
{
    id <SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate> _delegate;
    id <SPTPlayer> _player;
    SPTPlayerState *_currentState;
    id <SPTEpisodeSegmentsModel> _entitiesModel;
    id <SPTEpisodeSegmentsEntity> _currentPlayingEntity;
}

@property(retain, nonatomic) id <SPTEpisodeSegmentsEntity> currentPlayingEntity; // @synthesize currentPlayingEntity=_currentPlayingEntity;
@property(retain, nonatomic) id <SPTEpisodeSegmentsModel> entitiesModel; // @synthesize entitiesModel=_entitiesModel;
@property(retain, nonatomic) SPTPlayerState *currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentPlayerPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updatePlayerState:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (_Bool)isCurrentEpisodePlaying;
- (int)currentlyPlayingEntityIndex;
- (void)updateAndPlayTrackForEntity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userDidSelectEntity:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshPlayerWithEntities:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
