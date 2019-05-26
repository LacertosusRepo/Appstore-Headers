//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSArray;
@protocol SPTPlayer, SPTPlayerQueue;

@interface SPTQueueMultipleTracksAction : SPAction
{
    NSArray *_tracks;
    id <SPTPlayer> _player;
    id <SPTPlayerQueue> _playerQueue;
}

@property(retain, nonatomic) id <SPTPlayerQueue> playerQueue; // @synthesize playerQueue=_playerQueue;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithTracks:(id)arg1 player:(id)arg2 playerQueue:(id)arg3 logContext:(id)arg4;

@end

