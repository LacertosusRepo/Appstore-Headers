//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlatformLogging-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTExternalIntegrationPlatformLoggerImplementation : NSObject <SPTExternalIntegrationPlatformLogging>
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logExternalActionOrigin:(id)arg1 actionType:(id)arg2 userIntent:(id)arg3 uri:(id)arg4;
- (void)logSetPodcastPlaybackSpeed:(id)arg1 externalActionOrigin:(id)arg2;
- (void)logSearchWithQuery:(id)arg1 externalActionOrigin:(id)arg2;
- (void)logGetItemWithUri:(id)arg1 limit:(unsigned long long)arg2 externalActionOrigin:(id)arg3;
- (void)logEnqueueItemWithURI:(id)arg1 externalActionOrigin:(id)arg2;
- (void)logPlayItemWithURI:(id)arg1 externalActionOrigin:(id)arg2;
- (void)logResumeWithExternalActionOrigin:(id)arg1;
- (void)logPauseWithExternalActionOrigin:(id)arg1;
- (void)logSkip:(id)arg1 externalActionOrigin:(id)arg2;
- (void)logSkipPrevWithExternalActionOrigin:(id)arg1;
- (void)logSkipNextWithExternalActionOrigin:(id)arg1;
- (void)logRepeat:(id)arg1 externalActionOrigin:(id)arg2;
- (void)logRepeatDisabledWithExternalActionOrigin:(id)arg1;
- (void)logRepeatAllWithExternalActionOrigin:(id)arg1;
- (void)logRepeatOneWithExternalActionOrigin:(id)arg1;
- (void)logShuffle:(_Bool)arg1 externalActionOrigin:(id)arg2;
- (void)logRating:(_Bool)arg1 externalActionOrigin:(id)arg2;
- (void)logStartRadioWithURI:(id)arg1 externalActionOrigin:(id)arg2;
- (void)logSaved:(_Bool)arg1 forItemWithURI:(id)arg2 externalActionOrigin:(id)arg3;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

