//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayerItem, NSError, SPTVideoPlayerSource;

@protocol SPTVideoPlayerSourceObserver <NSObject>
- (void)playerSource:(SPTVideoPlayerSource *)arg1 playerItem:(AVPlayerItem *)arg2 failedToPlayToEndWithError:(NSError *)arg3;
- (void)playerSource:(SPTVideoPlayerSource *)arg1 didReachEndForPlayerItem:(AVPlayerItem *)arg2;
- (void)playerSource:(SPTVideoPlayerSource *)arg1 playerItem:(AVPlayerItem *)arg2 likelyToKeepUp:(_Bool)arg3;
- (void)playerSource:(SPTVideoPlayerSource *)arg1 playerItem:(AVPlayerItem *)arg2 statusChanged:(long long)arg3;
- (void)playerSource:(SPTVideoPlayerSource *)arg1 resetPlayerWithError:(NSError *)arg2;
@end

