//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBINowPlayingBar_HeartButtonEventFactory, SPTUBINowPlayingBar_PlayButtonEventFactory;

@protocol SPTUBINowPlayingBarEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitUiReveal;
- (id <SPTUBIInteractionEvent>)swipeSkipToNextWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)swipeSkipToPreviousWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)swipeUiReveal;
- (id <SPTUBINowPlayingBar_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBINowPlayingBar_PlayButtonEventFactory>)playButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

