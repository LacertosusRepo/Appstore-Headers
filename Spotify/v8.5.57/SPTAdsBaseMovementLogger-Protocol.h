//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAdsBaseMovementObserver;

@protocol SPTAdsBaseMovementLogger <NSObject>
@property(nonatomic) _Bool isMoving;
- (void)removeObserver:(id <SPTAdsBaseMovementObserver>)arg1;
- (void)addObserver:(id <SPTAdsBaseMovementObserver>)arg1;
@end

