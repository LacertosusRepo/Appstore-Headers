//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNowPlayingPlaybackActionsHandler;

@protocol SPTNowPlayingPlaybackActionsHandlerObserver <NSObject>
- (void)playbackActionsHandlerDidPlayPause:(id <SPTNowPlayingPlaybackActionsHandler>)arg1;

@optional
- (void)playbackActionsHandlerDidToggleRepeat:(id <SPTNowPlayingPlaybackActionsHandler>)arg1;
- (void)playbackActionsHandlerDidToggleShuffle:(id <SPTNowPlayingPlaybackActionsHandler>)arg1;
@end

