//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol BMPlaybackIdentity;

@protocol BMPlaybackEventObserver <NSObject>

@optional
- (void)playback:(id <BMPlaybackIdentity>)arg1 didChangeDuration:(double)arg2;
- (void)playbackDidFinishForIdentity:(id <BMPlaybackIdentity>)arg1;
- (void)playback:(id <BMPlaybackIdentity>)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)playbackDidStartForIdentity:(id <BMPlaybackIdentity>)arg1;
- (void)playbackDidCreateSessionWithIdentity:(id <BMPlaybackIdentity>)arg1;
@end

