//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVideoPlaybackIdentity;

@protocol SPTVideoPlaybackEventObserver <NSObject>

@optional
- (void)playback:(id <SPTVideoPlaybackIdentity>)arg1 didChangeDuration:(double)arg2;
- (void)playbackDidFinishForIdentity:(id <SPTVideoPlaybackIdentity>)arg1;
- (void)playback:(id <SPTVideoPlaybackIdentity>)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)playbackDidStartForIdentity:(id <SPTVideoPlaybackIdentity>)arg1;
- (void)playbackDidCreateSessionWithIdentity:(id <SPTVideoPlaybackIdentity>)arg1;
@end

