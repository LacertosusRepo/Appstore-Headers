//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTDrivingModeSliderView;

@protocol SPTDrivingModeSliderViewDataSource <NSObject>
- (_Bool)nowPlayingSliderDisallowSeeking:(SPTDrivingModeSliderView *)arg1;
- (double)nowPlayingSliderAnimationSpeed:(SPTDrivingModeSliderView *)arg1;
- (double)nowPlayingSliderCurrentDuration:(SPTDrivingModeSliderView *)arg1;
- (double)nowPlayingSliderCurrentPosition:(SPTDrivingModeSliderView *)arg1;
@end

