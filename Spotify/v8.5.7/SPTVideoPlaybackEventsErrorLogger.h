//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTVideoBaseTracker.h"

@protocol SPTLogCenter;

@interface SPTVideoPlaybackEventsErrorLogger : SPTVideoBaseTracker
{
    _Bool _playbackStarted;
    id <SPTLogCenter> _logCenter;
}

@property(nonatomic) _Bool playbackStarted; // @synthesize playbackStarted=_playbackStarted;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (long long)timestampInMS;
- (id)uri;
- (id)playbackIDData;
- (id)fileIDData;
- (id)makeErrorDictionary;
- (void)logVideoError:(id)arg1;
- (void)videoPlaybackDidFailWithError:(id)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidFailWithRecoverableError:(id)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidEndAtPosition:(double)arg1 withEndReason:(long long)arg2;
- (void)videoPlaybackReadyAtPosition:(double)arg1 duration:(double)arg2 playWhenReady:(_Bool)arg3;
- (id)initWithLogCenter:(id)arg1;

@end

