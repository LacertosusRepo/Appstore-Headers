//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber;
@protocol SPTVolumeObserver;

@protocol SPTVolumeAPI <NSObject>
@property(readonly, nonatomic) NSNumber *volume;
- (void)removeObserver:(id <SPTVolumeObserver>)arg1;
- (void)addObserver:(id <SPTVolumeObserver>)arg1;
- (void)requestVolumeUpdate:(double)arg1;
@end

