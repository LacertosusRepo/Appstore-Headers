//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_PlayButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_RepeatModeButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_ShuffleModeButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_SkipNextButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_SkipPreviousButtonEventFactory;

@protocol SPTUBIMobileNowPlayingViewDefault_MainControlsContainerEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_RepeatModeButtonEventFactory>)repeatModeButtonFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_SkipNextButtonEventFactory>)skipNextButtonFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_SkipPreviousButtonEventFactory>)skipPreviousButtonFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_MainControlsContainer_ShuffleModeButtonEventFactory>)shuffleModeButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

