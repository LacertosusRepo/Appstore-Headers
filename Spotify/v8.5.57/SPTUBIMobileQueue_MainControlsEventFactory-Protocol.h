//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileQueue_MainControls_BanButtonEventFactory, SPTUBIMobileQueue_MainControls_HeartButtonEventFactory, SPTUBIMobileQueue_MainControls_PlayButtonEventFactory, SPTUBIMobileQueue_MainControls_PlaybackSpeedButtonEventFactory, SPTUBIMobileQueue_MainControls_RepeatModeButtonEventFactory, SPTUBIMobileQueue_MainControls_SeekBackwardButtonEventFactory, SPTUBIMobileQueue_MainControls_SeekForwardButtonEventFactory, SPTUBIMobileQueue_MainControls_ShuffleModeButtonEventFactory, SPTUBIMobileQueue_MainControls_SkipNextButtonEventFactory, SPTUBIMobileQueue_MainControls_SkipPreviousButtonEventFactory, SPTUBIMobileQueue_MainControls_SleepTimerButtonEventFactory;

@protocol SPTUBIMobileQueue_MainControlsEventFactory <NSObject>
- (id <SPTUBIMobileQueue_MainControls_SleepTimerButtonEventFactory>)sleepTimerButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_SeekForwardButtonEventFactory>)seekForwardButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_SeekBackwardButtonEventFactory>)seekBackwardButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_PlaybackSpeedButtonEventFactory>)playbackSpeedButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_BanButtonEventFactory>)banButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_RepeatModeButtonEventFactory>)repeatModeButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_SkipNextButtonEventFactory>)skipNextButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_SkipPreviousButtonEventFactory>)skipPreviousButtonFactory;
- (id <SPTUBIMobileQueue_MainControls_ShuffleModeButtonEventFactory>)shuffleModeButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
