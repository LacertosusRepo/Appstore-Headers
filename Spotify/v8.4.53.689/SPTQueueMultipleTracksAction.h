//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class NSArray;

@interface SPTQueueMultipleTracksAction : SPAction
{
    NSArray *_tracks;
    id <SPTPlayer> _player;
    id <SPTPlayerQueue> _playerQueue;
    id <SPTUpsellManager> _upsellManager;
}

@property(retain, nonatomic) id <SPTUpsellManager> upsellManager; // @synthesize upsellManager=_upsellManager;
@property(retain, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithTracks:(id)arg1 player:(id)arg2 playerQueue:(id)arg3 upsellManager:(id)arg4 logContext:(id)arg5;

@end

