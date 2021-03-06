//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTWatchPlatformOfflineManagerObserver;

@protocol SPTWatchPlatformOfflineManager <NSObject>
@property(readonly, nonatomic, getter=isOfflineEnabled) _Bool offlineEnabled;
- (void)removeObserver:(id <SPTWatchPlatformOfflineManagerObserver>)arg1;
- (void)addObserver:(id <SPTWatchPlatformOfflineManagerObserver>)arg1;
- (void)removeOfflineResourceWithURI:(NSURL *)arg1;
- (void)makeResourceAvailableOfflineWithURI:(NSURL *)arg1;
- (long long)stateOfResourceWithURI:(NSURL *)arg1;
- (_Bool)canOfflineResourceWithURI:(NSURL *)arg1;
@end

