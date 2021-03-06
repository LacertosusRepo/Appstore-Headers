//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, YTPlaybackData, YTPlayerResponse;

@protocol YTPlaybackControllerEventsDelegate <NSObject>

@optional
- (void)playbackControllerExternalPlaybackActiveStateDidChange:(_Bool)arg1;
- (void)playbackControllerVRStateDidChange:(_Bool)arg1;
- (void)playbackRouteDidChange;
- (void)playbackControllerCurrentVideoAspectRatioDidChange:(double)arg1;
- (void)playbackControllerDidPressCopyDebugInfo;
- (void)playbackControllerDidLoadPrerollAd;
- (void)playbackControllerDidReceivePlayerResponse:(YTPlayerResponse *)arg1;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerStateDidChange;
- (void)playbackControllerDidFailWithError:(NSError *)arg1;
- (void)playbackControllerWillFailWithError:(NSError *)arg1;
- (void)playbackControllerDidActivateVideo:(id <YTSingleVideoObservable>)arg1 withPlaybackData:(YTPlaybackData *)arg2;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(YTPlaybackData *)arg1;
- (void)playbackControllerDidPlay;
- (void)playbackControllerDidPause;
- (void)playbackControllerDidFinishPlayingAd;
- (void)playbackControllerDidFinishPlayback;
- (void)playbackControllerDidPressReplay;
- (void)playbackControllerDidPressPause;
- (void)playbackControllerDidPressPlay;
@end

