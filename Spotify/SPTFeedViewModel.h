//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlayerObserver.h"

@class NSArray, NSString, SPTFeedEntity, SPTFeedNetworkService;

@interface SPTFeedViewModel : NSObject <SPTPlayerObserver>
{
    SPTFeedEntity *_playingEntity;
    id <SPTPlayer> _player;
    NSArray *_entities;
    SPTFeedNetworkService *_feedNetworkService;
}

@property(retain, nonatomic) SPTFeedNetworkService *feedNetworkService; // @synthesize feedNetworkService=_feedNetworkService;
@property(retain, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTFeedEntity *playingEntity; // @synthesize playingEntity=_playingEntity;
- (void).cxx_destruct;
- (void)playPodcast:(id)arg1 fromContext:(id)arg2;
- (void)playTrack:(id)arg1 fromContext:(id)arg2;
- (void)pauseCurrentlyPlayingEntity;
- (void)playSelectedInCollectionViewAtIndex:(long long)arg1 forTableViewCellIndex:(long long)arg2;
- (void)playSelectedEntityInTableViewAtIndex:(long long)arg1;
- (id)entityAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entitiesCount;
- (void)fetchFeedData:(CDUnknownBlockType)arg1;
- (id)initWithFeedNetworkService:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

