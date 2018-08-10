//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationPlatformLogging.h"

@class NSString;

@interface SPTExternalIntegrationPlatformLoggerImplementation : NSObject <SPTExternalIntegrationPlatformLogging>
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logExternalActionWithData:(id)arg1 accessorySessionID:(id)arg2 actionType:(id)arg3;
- (void)logSearchWithQuery:(id)arg1 accessorySessionID:(id)arg2;
- (void)logGetItemWithUri:(id)arg1 limit:(unsigned long long)arg2 accessorySessionID:(id)arg3;
- (void)logEnqueueItemWithURI:(id)arg1 accessorySessionID:(id)arg2;
- (void)logPlayItemWithURI:(id)arg1 accessorySessionID:(id)arg2;
- (void)logResumeWithAccessorySessionID:(id)arg1;
- (void)logPauseWithAccessorySessionID:(id)arg1;
- (void)logSkip:(id)arg1 accessorySessionID:(id)arg2;
- (void)logSkipPrevWithAccessorySessionID:(id)arg1;
- (void)logSkipNextWithAccessorySessionID:(id)arg1;
- (void)logRepeat:(id)arg1 accessorySessionID:(id)arg2;
- (void)logRepeatDisabledWithAccessorySessionID:(id)arg1;
- (void)logRepeatAllWithAccessorySessionID:(id)arg1;
- (void)logRepeatOneWithAccessorySessionID:(id)arg1;
- (void)logShuffle:(_Bool)arg1 accessorySessionID:(id)arg2;
- (void)logRating:(_Bool)arg1 accessorySessionID:(id)arg2;
- (void)logStartRadioWithURI:(id)arg1 accessorySessionID:(id)arg2;
- (void)logSaved:(_Bool)arg1 forItemWithURI:(id)arg2 accessorySessionID:(id)arg3;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

