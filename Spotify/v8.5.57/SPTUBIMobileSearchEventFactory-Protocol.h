//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileSearch_ContentEventFactory, SPTUBIMobileSearch_SearchBarEventFactory, SPTUBIMobileSearch_VoiceButtonEventFactory;

@protocol SPTUBIMobileSearchEventFactory <NSObject>
- (id <SPTUBIMobileSearch_VoiceButtonEventFactory>)voiceButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileSearch_ContentEventFactory>)contentFactory;
- (id <SPTUBIMobileSearch_SearchBarEventFactory>)searchBarFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

