//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, YTICommand;

@protocol YTReelResumeDataStoreProtocol <NSObject>
- (void)removeAllObjects;
- (void)notifyUserDidFinishReelWithEndpoint:(YTICommand *)arg1;
- (void)saveEndpoint:(YTICommand *)arg1;
- (YTICommand *)endpointForEndpoint:(YTICommand *)arg1 loadDate:(NSDate *)arg2;
- (void)addObserver:(id <YTReelResumeDataStoreObserver>)arg1 forEndpoint:(YTICommand *)arg2;
@end

