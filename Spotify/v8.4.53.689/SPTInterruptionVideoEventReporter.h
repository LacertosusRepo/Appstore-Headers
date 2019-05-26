//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoPlaybackEventObserver.h"

@class NSString;

@interface SPTInterruptionVideoEventReporter : NSObject <SPTVideoPlaybackEventObserver>
{
    _Bool _shouldFireVideoEvents;
    _Bool _didProcessVideoFinishEvent;
    _Bool _didRequestFireVideoEventsFlag;
    id <SPTAdEventLogger> _eventLogger;
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
@property(readonly, nonatomic) id <SPTAdEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
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
- (id)initWithEventLogger:(id)arg1 resolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
