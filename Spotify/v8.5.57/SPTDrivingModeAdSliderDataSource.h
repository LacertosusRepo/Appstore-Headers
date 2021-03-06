//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeSliderViewDataSource-Protocol.h"

@class NSString;
@protocol SPTNowPlayingDurationUnitViewModel;

@interface SPTDrivingModeAdSliderDataSource : NSObject <SPTDrivingModeSliderViewDataSource>
{
    id <SPTNowPlayingDurationUnitViewModel> _durationViewModel;
}

@property(readonly, nonatomic) id <SPTNowPlayingDurationUnitViewModel> durationViewModel; // @synthesize durationViewModel=_durationViewModel;
- (void).cxx_destruct;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (void)dealloc;
- (id)initWithDurationViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

