//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNowPlayingViewVideoShow_MainControls_PlayButtonEventFactory, SPTUBIMobileNowPlayingViewVideoShow_MainControls_SeekBackwardButtonEventFactory, SPTUBIMobileNowPlayingViewVideoShow_MainControls_SeekForwardButtonEventFactory, SPTUBIMobileNowPlayingViewVideoShow_MainControls_SkipNextButtonEventFactory, SPTUBIMobileNowPlayingViewVideoShow_MainControls_SkipPreviousButtonEventFactory;

@protocol SPTUBIMobileNowPlayingViewVideoShow_MainControlsEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewVideoShow_MainControls_SeekForwardButtonEventFactory>)seekForwardButtonFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_MainControls_SkipNextButtonEventFactory>)skipNextButtonFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_MainControls_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_MainControls_SkipPreviousButtonEventFactory>)skipPreviousButtonFactory;
- (id <SPTUBIMobileNowPlayingViewVideoShow_MainControls_SeekBackwardButtonEventFactory>)seekBackwardButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

