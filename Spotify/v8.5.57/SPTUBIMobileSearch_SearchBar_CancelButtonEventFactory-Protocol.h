//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIInteractionEvent;

@protocol SPTUBIMobileSearch_SearchBar_CancelButtonEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitUiHide;
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

