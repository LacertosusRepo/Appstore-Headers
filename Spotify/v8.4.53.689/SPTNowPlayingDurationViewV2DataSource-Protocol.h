//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingSliderV2DataSource.h"

@class NSString, SPTNowPlayingDurationViewV2;

@protocol SPTNowPlayingDurationViewV2DataSource <SPTNowPlayingSliderV2DataSource>
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(SPTNowPlayingDurationViewV2 *)arg1;
- (NSString *)nowPlayingDurationViewTimeRemainingText:(SPTNowPlayingDurationViewV2 *)arg1 withSliderValue:(float)arg2;
- (NSString *)nowPlayingDurationViewTimeTakenText:(SPTNowPlayingDurationViewV2 *)arg1 withSliderValue:(float)arg2;
@end
