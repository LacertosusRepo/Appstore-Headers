//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTHomeTestManagerObserver;

@protocol SPTHomeTestManager <NSObject>
@property(readonly, nonatomic, getter=isHttpRolloutEnabled) _Bool httpRolloutEnabled;
@property(readonly, nonatomic, getter=isFreeHTTPMigrationTestEnabled) _Bool freeHTTPMigrationTestEnabled;
@property(readonly, nonatomic, getter=isFreeCachingRolloutEnabled) _Bool freeCachingRolloutEnabled;
@property(readonly, nonatomic, getter=isPremiumCachingRolloutEnabled) _Bool premiumCachingRolloutEnabled;
@property(readonly, nonatomic) unsigned long long homeviewBackendState;
@property(readonly, nonatomic) unsigned long long mode;
- (void)removeObserver:(id <SPTHomeTestManagerObserver>)arg1;
- (void)addObserver:(id <SPTHomeTestManagerObserver>)arg1;
@end
