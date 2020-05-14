//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@class NSString;
@protocol HUBCommandHandler, SPTPlayer;

@interface SPTHomeNavigationalPlaybackCommandHandler : NSObject <HUBCommandHandler>
{
    unsigned long long _type;
    NSString *_username;
    id <SPTPlayer> _player;
    id <HUBCommandHandler> _playCommand;
    id <HUBCommandHandler> _navigateCommand;
}

@property(readonly, nonatomic) id <HUBCommandHandler> navigateCommand; // @synthesize navigateCommand=_navigateCommand;
@property(readonly, nonatomic) id <HUBCommandHandler> playCommand; // @synthesize playCommand=_playCommand;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)playUrl:(id)arg1 withCommand:(id)arg2 event:(id)arg3;
- (void)handlePlayThenNavigateEventWithUrl:(id)arg1 command:(id)arg2 event:(id)arg3;
- (void)handlePlayAndNavigateEventWithUrl:(id)arg1 command:(id)arg2 event:(id)arg3;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithEventType:(unsigned long long)arg1 username:(id)arg2 player:(id)arg3 defaultCommands:(id)arg4;

@end

