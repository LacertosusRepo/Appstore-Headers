//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobilePremiumDestination_ScrollingView_HubsComponentEventFactory;

@protocol SPTUBIMobilePremiumDestination_ScrollingViewEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobilePremiumDestination_ScrollingView_HubsComponentEventFactory>)hubsComponentFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
