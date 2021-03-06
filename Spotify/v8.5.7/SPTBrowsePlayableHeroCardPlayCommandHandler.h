//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol EXP_SPTHubInteractionLogger, SPTPlayer, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTBrowsePlayableHeroCardPlayCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <EXP_SPTHubInteractionLogger> _logger;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) id <EXP_SPTHubInteractionLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)initiatePlaybackForPlaylistURI:(id)arg1;
- (id)createPlayOptionsFromCommand:(id)arg1;
- (id)createPlayerContextFromCommand:(id)arg1;
- (void)initiatePlaybackForCommand:(id)arg1 event:(id)arg2;
- (void)unpausePlaybackForURI:(id)arg1 event:(id)arg2;
- (void)pausePlaybackForURI:(id)arg1 event:(id)arg2;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlaylistDataLoader:(id)arg1 logger:(id)arg2 player:(id)arg3;

@end

