//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobileNowPlayingViewFeedback_ScrollComponents_ComponentEventFactory;

@protocol SPTUBIMobileNowPlayingViewFeedback_ScrollComponentsEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileNowPlayingViewFeedback_ScrollComponents_ComponentEventFactory>)componentFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
