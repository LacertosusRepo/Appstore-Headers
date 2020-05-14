//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMPlaybackEventObserver-Protocol.h"

@class NSString;
@protocol SPTAdsBaseCosmosBridge, SPTResolver;

@interface SPTInterruptionVideoEventReporter : NSObject <BMPlaybackEventObserver>
{
    _Bool _shouldFireVideoEvents;
    _Bool _didProcessVideoFinishEvent;
    _Bool _didRequestFireVideoEventsFlag;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTResolver> _resolver;
    double _trackDuration;
    unsigned long long _quartilesPlayed;
}

@property(nonatomic) _Bool didRequestFireVideoEventsFlag; // @synthesize didRequestFireVideoEventsFlag=_didRequestFireVideoEventsFlag;
@property(nonatomic) _Bool didProcessVideoFinishEvent; // @synthesize didProcessVideoFinishEvent=_didProcessVideoFinishEvent;
@property(nonatomic) _Bool shouldFireVideoEvents; // @synthesize shouldFireVideoEvents=_shouldFireVideoEvents;
@property(nonatomic) unsigned long long quartilesPlayed; // @synthesize quartilesPlayed=_quartilesPlayed;
@property(nonatomic) double trackDuration; // @synthesize trackDuration=_trackDuration;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
- (_Bool)isSASInterruption:(id)arg1;
- (void)logCompleteEventForInterruption:(id)arg1 eventData:(id)arg2;
- (id)interruptionIdForIdentity:(id)arg1;
- (void)requestFireVideoEventsFlagValue;
- (void)cleanupAfterInterruptionFinish;
- (void)subcribeToFeatureFlagChanges;
- (void)subscribeToVideoPlayerEvents;
- (id)eventDataForIdentity:(id)arg1;
- (void)logEvent:(id)arg1 interruptionId:(id)arg2 eventData:(id)arg3;
- (_Bool)shouldFireImpressionOnEnd;
- (void)interruptionEntityWithId:(id)arg1 didPlaytoQuartile:(long long)arg2 eventData:(id)arg3;
- (void)playbackDidFinishForIdentity:(id)arg1;
- (void)playback:(id)arg1 didChangeDuration:(double)arg2;
- (void)playback:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)playbackDidStartForIdentity:(id)arg1;
- (id)initWithCosmosBridge:(id)arg1 resolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

