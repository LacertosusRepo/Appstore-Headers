//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTVideoBaseTracker.h"

@class NSDictionary, NSString, SPTVideoPlayRange;
@protocol SPTLogCenter, SPTVideoLoggerDataProvider, SPTVideoPlaybackIdentity;

@interface SPTEndVideoLogger : SPTVideoBaseTracker
{
    _Bool _paused;
    id <SPTLogCenter> _logCenter;
    id <SPTVideoLoggerDataProvider> _videoLoggerDataProvider;
    NSDictionary *_pendingMessageID;
    id <SPTVideoPlaybackIdentity> _nextIdentity;
    long long _endEventReason;
    NSString *_connectionTypeStart;
    NSString *_connectionTypeEnd;
    SPTVideoPlayRange *_uiLatencyTimeRange;
}

@property(retain, nonatomic) SPTVideoPlayRange *uiLatencyTimeRange; // @synthesize uiLatencyTimeRange=_uiLatencyTimeRange;
@property(copy, nonatomic) NSString *connectionTypeEnd; // @synthesize connectionTypeEnd=_connectionTypeEnd;
@property(copy, nonatomic) NSString *connectionTypeStart; // @synthesize connectionTypeStart=_connectionTypeStart;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) long long endEventReason; // @synthesize endEventReason=_endEventReason;
@property(retain, nonatomic) id <SPTVideoPlaybackIdentity> nextIdentity; // @synthesize nextIdentity=_nextIdentity;
@property(copy, nonatomic) NSDictionary *pendingMessageID; // @synthesize pendingMessageID=_pendingMessageID;
@property(retain, nonatomic) id <SPTVideoLoggerDataProvider> videoLoggerDataProvider; // @synthesize videoLoggerDataProvider=_videoLoggerDataProvider;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (long long)timeWeightedBitrate;
- (id)audioCodec;
- (id)videoCodec;
- (_Bool)isSystemInitialized;
- (_Bool)incognitoMode;
- (id)streamingRule;
- (id)reasonEnd;
- (_Bool)shuffle;
- (id)reasonStartForIdentity:(id)arg1;
- (id)reasonStart;
- (id)sequenceID;
- (id)sequenceNumber;
- (void)updatePendingMessageWithStatistics:(id)arg1;
- (void)updatePendingMessageAtPosition:(double)arg1;
- (void)updatePendingMessage;
- (void)sendMessage;
- (void)videoPlaybackDidEndAtPosition:(double)arg1 withEndReason:(long long)arg2;
- (void)videoPlaybackDidResume;
- (void)videoPlaybackDidPauseAtPosition:(double)arg1;
- (void)videoPlaybackReadyAtPosition:(double)arg1 duration:(double)arg2 playWhenReady:(_Bool)arg3;
- (void)videoPlaybackWillEndWithNextPlaybackIdentity:(id)arg1;
- (void)videoPlaybackDidCreateSessionWithIdentity:(id)arg1 timeObservable:(id)arg2 inBackground:(_Bool)arg3;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 videoLoggerDataProvider:(id)arg2;

@end
