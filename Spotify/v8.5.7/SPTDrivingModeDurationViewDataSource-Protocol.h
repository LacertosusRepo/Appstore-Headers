//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTDrivingModeSliderViewDataSource-Protocol.h"

@class NSString, SPTDrivingModeDurationView;

@protocol SPTDrivingModeDurationViewDataSource <SPTDrivingModeSliderViewDataSource>
- (NSString *)nowPlayingDurationView:(SPTDrivingModeDurationView *)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (NSString *)nowPlayingDurationView:(SPTDrivingModeDurationView *)arg1 timeTakenTextForSliderValue:(float)arg2;
@end
