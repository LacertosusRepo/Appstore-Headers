//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTAudioPlayerMediaClockObserver;

@protocol SPTAudioPlayerMediaClock <NSObject>
@property(readonly, nonatomic) _Bool trackingPosition;
@property(readonly, nonatomic) float playbackSpeed;
@property(readonly, nonatomic) NSURL *audioTrackURI;
- (void)removeVideoPlaybackEventObserver:(id <SPTAudioPlayerMediaClockObserver>)arg1;
- (void)addVideoPlaybackEventObserver:(id <SPTAudioPlayerMediaClockObserver>)arg1;
- (double)currentPosition;
@end
