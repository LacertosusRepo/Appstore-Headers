//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPTAdsBaseEntity, SPTAdsBaseRegistryObserver;

@protocol SPTAdsBaseRegistry <NSObject>
@property(readonly, copy, nonatomic) NSArray *availableEntities;
- (void)discardAd:(id <SPTAdsBaseEntity>)arg1;
- (void)removeObserver:(id <SPTAdsBaseRegistryObserver>)arg1;
- (void)addObserver:(id <SPTAdsBaseRegistryObserver>)arg1;
@end
