//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTDrivingModeTestManagerObserver;

@protocol SPTDrivingModeTestManager <NSObject>
@property(readonly, nonatomic, getter=isCarViewEnabled) _Bool carViewEnabled;
- (void)removeObserver:(id <SPTDrivingModeTestManagerObserver>)arg1;
- (void)addObserver:(id <SPTDrivingModeTestManagerObserver>)arg1;
- (void)setCarViewEnabledInSettings:(_Bool)arg1;
@end

