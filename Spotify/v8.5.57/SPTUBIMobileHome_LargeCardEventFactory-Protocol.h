//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIInteractionEvent;

@protocol SPTUBIMobileHome_LargeCardEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitUiNavigateWithDestination:(NSURL *)arg1;
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

