//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAdEventLogger.h"

@class NSMutableArray, NSString;

@interface SPTAdEventLoggerImplementation : NSObject <SPTAdEventLogger>
{
    _Bool _eventRequestInProgress;
    id <SPTResolver> _resolver;
    id <SPTLogCenter> _logCenter;
    NSMutableArray *_eventRequestQueue;
}

@property(retain, nonatomic) NSMutableArray *eventRequestQueue; // @synthesize eventRequestQueue=_eventRequestQueue;
@property(nonatomic) _Bool eventRequestInProgress; // @synthesize eventRequestInProgress=_eventRequestInProgress;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)sendEventRequest:(id)arg1;
- (void)logCollapseVideoAd:(id)arg1 atPlaybackPosition:(double)arg2;
- (void)logExpandVideoAd:(id)arg1 atPlaybackPosition:(double)arg2;
- (void)logAdFeedbackEventForAd:(id)arg1;
- (void)postCosmosAdEvent:(id)arg1 forAd:(id)arg2 playbackPosition:(double)arg3 eventData:(id)arg4;
- (void)postCosmosAdEvent:(id)arg1 forAd:(id)arg2 eventData:(id)arg3;
- (void)postCosmosAdEvent:(id)arg1 forAd:(id)arg2;
- (void)logClientAdErrorMessage:(id)arg1 requestType:(id)arg2 requestUrl:(id)arg3 httpErrorCode:(long long)arg4;
- (void)logClientAdEvent:(id)arg1 subEventType:(id)arg2 lineItemId:(id)arg3 creativeId:(id)arg4 adFormat:(id)arg5 eventData:(id)arg6 slot:(id)arg7 adPlaybackId:(id)arg8;
- (id)initWithResolver:(id)arg1 logCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

