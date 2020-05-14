//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileLyrics_CardViewEventFactory, SPTUBIMobileLyrics_FullscreenViewEventFactory;

@protocol SPTUBIMobileLyricsEventFactory <NSObject>
- (id <SPTUBIMobileLyrics_FullscreenViewEventFactory>)fullscreenViewFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileLyrics_CardViewEventFactory>)cardViewFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

