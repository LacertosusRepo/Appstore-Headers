//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL;

@interface SPTPlaylistQueueAction : SPAction
{
    NSURL *_playlistURL;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlayer> _player;
    id <SPTPlayerQueue> _playerQueue;
    id <SPTUpsellManager> _upsellManager;
    id <SPTCollectionSortingEntityManager> _sortingEntityManager;
}

@property(readonly, nonatomic) __weak id <SPTCollectionSortingEntityManager> sortingEntityManager; // @synthesize sortingEntityManager=_sortingEntityManager;
@property(readonly, nonatomic) id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(readonly, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)style;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithPlaylistURL:(id)arg1 playlistDataLoader:(id)arg2 player:(id)arg3 playerQueue:(id)arg4 upsellManager:(id)arg5 sortingEntityManager:(id)arg6 logContext:(id)arg7;

@end

