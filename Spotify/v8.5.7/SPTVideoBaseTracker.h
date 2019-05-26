//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoEventObserver-Protocol.h"

@class NSMutableArray, NSString, SPTVideoBufferEvent, SPTVideoFormatEvent, SPTVideoPlayRange, SPTVideoPlayRangeState;
@protocol SPTVideoPlaybackIdentity;

@interface SPTVideoBaseTracker : NSObject <SPTVideoEventObserver>
{
    struct atomic_flag _initialBufferingFlag;
    struct atomic_flag _playbackStartedFlag;
    _Bool _messageSent;
    _Bool _seekOngoing;
    id <SPTVideoPlaybackIdentity> _identity;
    SPTVideoPlayRangeState *_currentPlayRangeState;
    NSMutableArray *_playedRanges;
    double _duration;
    NSString *_exitReason;
    NSMutableArray *_formatEvents;
    long long _bytesDownloaded;
    SPTVideoBufferEvent *_currentBufferEvent;
    SPTVideoFormatEvent *_currentFormatEvent;
    SPTVideoPlayRange *_startTimeRange;
    SPTVideoPlayRange *_manifestLoadTimeRange;
    SPTVideoPlayRange *_encryptionLoadTimeRange;
    NSMutableArray *_bufferEvents;
    NSMutableArray *_seekEvents;
}

@property(nonatomic) _Bool seekOngoing; // @synthesize seekOngoing=_seekOngoing;
@property(retain, nonatomic) NSMutableArray *seekEvents; // @synthesize seekEvents=_seekEvents;
@property(retain, nonatomic) NSMutableArray *bufferEvents; // @synthesize bufferEvents=_bufferEvents;
@property(retain, nonatomic) SPTVideoPlayRange *encryptionLoadTimeRange; // @synthesize encryptionLoadTimeRange=_encryptionLoadTimeRange;
@property(retain, nonatomic) SPTVideoPlayRange *manifestLoadTimeRange; // @synthesize manifestLoadTimeRange=_manifestLoadTimeRange;
@property(retain, nonatomic) SPTVideoPlayRange *startTimeRange; // @synthesize startTimeRange=_startTimeRange;
@property(retain, nonatomic) SPTVideoFormatEvent *currentFormatEvent; // @synthesize currentFormatEvent=_currentFormatEvent;
@property(retain, nonatomic) SPTVideoBufferEvent *currentBufferEvent; // @synthesize currentBufferEvent=_currentBufferEvent;
@property(nonatomic) _Bool messageSent; // @synthesize messageSent=_messageSent;
@property(nonatomic) long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(retain, nonatomic) NSMutableArray *formatEvents; // @synthesize formatEvents=_formatEvents;
@property(copy, nonatomic) NSString *exitReason; // @synthesize exitReason=_exitReason;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSMutableArray *playedRanges; // @synthesize playedRanges=_playedRanges;
@property(retain, nonatomic) SPTVideoPlayRangeState *currentPlayRangeState; // @synthesize currentPlayRangeState=_currentPlayRangeState;
@property(retain, nonatomic) id <SPTVideoPlaybackIdentity> identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (double)now;
- (long long)currentDeviceOrientation;
- (id)exitReasonFromEndReasonCode:(long long)arg1;
- (void)endCurrentFormatEventAtPosition:(double)arg1;
- (void)startNewFormatEvent:(id)arg1 atPosition:(double)arg2;
- (void)endCurrentBufferEvent;
- (void)startNewBufferEventWithType:(long long)arg1;
- (void)endCurrentPlayRangeAtPosition:(double)arg1 andStartNextRangeAtPosition:(double)arg2;
- (void)endCurrentPlayRangeAtPosition:(double)arg1;
- (void)videoPlaybackSubtitleDidChange:(id)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidDropVideoFrames:(unsigned long long)arg1;
- (void)videoPlaybackDidTransferBytes:(long long)arg1 bitrate:(double)arg2 transferDuration:(double)arg3;
- (void)videoPlaybackFormatDidChange:(id)arg1 atPosition:(double)arg2;
- (void)videoPlaybackSurfaceDidChange:(id)arg1 atPosition:(double)arg2;
- (void)videoPlaybackBackgroundStateDidChange:(double)arg1 backgrounded:(_Bool)arg2;
- (void)videoPlaybackDidFailWithRecoverableError:(id)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidFailWithError:(id)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidEndAtPosition:(double)arg1 withEndReason:(long long)arg2;
- (void)videoPlaybackWillSeekToPosition:(double)arg1 fromPosition:(double)arg2;
- (void)videoPlaybackSpeedDidChangeTo:(float)arg1 atPosition:(double)arg2;
- (void)videoPlaybackDidResume;
- (void)videoPlaybackDidPauseAtPosition:(double)arg1;
- (void)videoPlaybackReadyAtPosition:(double)arg1 duration:(double)arg2 playWhenReady:(_Bool)arg3;
- (void)videoPlaybackDidStartBuffering:(double)arg1;
- (void)videoPlaybackDidLoadDRMSession;
- (void)videoPlaybackWillLoadDRMSession;
- (void)videoPlaybackDidLoadManifest;
- (void)videoPlaybackWillLoadManifest;
- (void)videoPlaybackWillEndWithNextPlaybackIdentity:(id)arg1;
- (void)videoPlaybackDidCreateSessionWithIdentity:(id)arg1 timeObservable:(id)arg2 inBackground:(_Bool)arg3;
@property(readonly, nonatomic) double startBitrate;
@property(readonly, copy, nonatomic) NSString *encryptionType;
- (id)calculatePlaybackStatisticsWithPlayedRanges:(id)arg1;
- (id)calculatePlaybackStatisticsAtPosition:(double)arg1;
- (id)calculatePlaybackStatistics;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
