//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTGaiaSystemVolumeObserver;

@protocol SPTGaiaSystemVolumeManager <NSObject>
- (void)removeObserver:(id <SPTGaiaSystemVolumeObserver>)arg1;
- (void)addObserver:(id <SPTGaiaSystemVolumeObserver>)arg1;
- (void)updateSystemVolume:(double)arg1;
- (double)currentSystemVolume;
@end

