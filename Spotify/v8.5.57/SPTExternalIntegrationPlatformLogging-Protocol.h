//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, NSURL;
@protocol SPTExternalIntegrationExternalActionOrigin;

@protocol SPTExternalIntegrationPlatformLogging <NSObject>
- (void)logSetPodcastPlaybackSpeed:(NSNumber *)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2;
- (void)logSearchWithQuery:(NSString *)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2;
- (void)logGetItemWithUri:(NSURL *)arg1 limit:(unsigned long long)arg2 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg3;
- (void)logEnqueueItemWithURI:(NSURL *)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2;
- (void)logPlayItemWithURI:(NSURL *)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2;
- (void)logResumeWithExternalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg1;
- (void)logPauseWithExternalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg1;
- (void)logSkipPrevWithExternalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg1;
- (void)logSkipNextWithExternalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg1;
- (void)logRepeatDisabledWithExternalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg1;
- (void)logRepeatAllWithExternalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg1;
- (void)logRepeatOneWithExternalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg1;
- (void)logShuffle:(_Bool)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2;
- (void)logRating:(_Bool)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2;
- (void)logStartRadioWithURI:(NSURL *)arg1 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg2;
- (void)logSaved:(_Bool)arg1 forItemWithURI:(NSURL *)arg2 externalActionOrigin:(id <SPTExternalIntegrationExternalActionOrigin>)arg3;
@end

