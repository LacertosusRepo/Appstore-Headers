//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNowPlayingViewFeedback_MainControls_BanButtonEventFactory, SPTUBIMobileNowPlayingViewFeedback_MainControls_HeartButtonEventFactory, SPTUBIMobileNowPlayingViewFeedback_MainControls_PlayButtonEventFactory, SPTUBIMobileNowPlayingViewFeedback_MainControls_SkipNextButtonEventFactory, SPTUBIMobileNowPlayingViewFeedback_MainControls_SkipPreviousButtonEventFactory;

@protocol SPTUBIMobileNowPlayingViewFeedback_MainControlsEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewFeedback_MainControls_BanButtonEventFactory>)banButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_MainControls_SkipNextButtonEventFactory>)skipNextButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_MainControls_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_MainControls_SkipPreviousButtonEventFactory>)skipPreviousButtonFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_MainControls_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

