//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTPlayerState;
@protocol SPTPlayer;

@protocol SPTPlayerObserver <NSObject>

@optional
- (void)player:(id <SPTPlayer>)arg1 didEncounterError:(NSError *)arg2;
- (void)player:(id <SPTPlayer>)arg1 stateDidChange:(SPTPlayerState *)arg2 fromState:(SPTPlayerState *)arg3;
- (void)player:(id <SPTPlayer>)arg1 stateDidChange:(SPTPlayerState *)arg2;
@end

