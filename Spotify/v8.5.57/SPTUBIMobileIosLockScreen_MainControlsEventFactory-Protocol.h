//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileIosLockScreen_MainControls_BanButtonEventFactory, SPTUBIMobileIosLockScreen_MainControls_HeartButtonEventFactory, SPTUBIMobileIosLockScreen_MainControls_PlayButtonEventFactory, SPTUBIMobileIosLockScreen_MainControls_SeekBackwardButtonEventFactory, SPTUBIMobileIosLockScreen_MainControls_SeekForwardButtonEventFactory, SPTUBIMobileIosLockScreen_MainControls_SkipNextButtonEventFactory, SPTUBIMobileIosLockScreen_MainControls_SkipPreviousButtonEventFactory;

@protocol SPTUBIMobileIosLockScreen_MainControlsEventFactory <NSObject>
- (id <SPTUBIMobileIosLockScreen_MainControls_SeekForwardButtonEventFactory>)seekForwardButtonFactory;
- (id <SPTUBIMobileIosLockScreen_MainControls_SeekBackwardButtonEventFactory>)seekBackwardButtonFactory;
- (id <SPTUBIMobileIosLockScreen_MainControls_BanButtonEventFactory>)banButtonFactory;
- (id <SPTUBIMobileIosLockScreen_MainControls_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIMobileIosLockScreen_MainControls_SkipNextButtonEventFactory>)skipNextButtonFactory;
- (id <SPTUBIMobileIosLockScreen_MainControls_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIMobileIosLockScreen_MainControls_SkipPreviousButtonEventFactory>)skipPreviousButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

