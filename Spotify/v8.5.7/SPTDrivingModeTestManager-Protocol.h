//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTDrivingModeTestManagerObserver;

@protocol SPTDrivingModeTestManager <NSObject>
@property(readonly, nonatomic, getter=isPivotEnabled) _Bool pivotEnabled;
@property(readonly, nonatomic, getter=isDriverDistractionTestEnabled) _Bool driverDistractionTestEnabled;
@property(readonly, nonatomic, getter=isCarViewEnabled) _Bool carViewEnabled;
- (void)removeObserver:(id <SPTDrivingModeTestManagerObserver>)arg1;
- (void)addObserver:(id <SPTDrivingModeTestManagerObserver>)arg1;
- (void)setCarViewEnabledInSettings:(_Bool)arg1;
@end

