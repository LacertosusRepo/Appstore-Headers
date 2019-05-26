//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTInteractionEvent, SPTNowPlayingBar_HeartButtonInteractionEventFactory, SPTNowPlayingBar_PlayButtonInteractionEventFactory;

@protocol SPTNowPlayingBarInteractionEventFactory <NSObject>
- (id <SPTInteractionEvent>)hitUiReveal;
- (id <SPTInteractionEvent>)swipeSkipToNextWithFrom:(NSURL *)arg1 withTo:(NSURL *)arg2;
- (id <SPTInteractionEvent>)swipeSkipToPreviousWithFrom:(NSURL *)arg1 withTo:(NSURL *)arg2;
- (id <SPTInteractionEvent>)swipeUiReveal;
- (id <SPTNowPlayingBar_HeartButtonInteractionEventFactory>)heartButtonFactory;
- (id <SPTNowPlayingBar_PlayButtonInteractionEventFactory>)playButtonFactory;
@end
