//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBComponentEvent, NSArray, NSDictionary;
@protocol HUBComponentModel, SPTUBIEventFactory, SPTUBIEventFactoryInteractionLocation, SPTUBIEventFactoryLocation;

@protocol SPTUBIHubsUtilities <NSObject>
- (NSDictionary *)dictionaryRepresentationOfLocation:(id <SPTUBIEventFactoryLocation>)arg1;
- (NSArray *)locationsFromComponent:(id <HUBComponentModel>)arg1;
- (id <SPTUBIEventFactoryInteractionLocation>)interactionLocationFromEvent:(HUBComponentEvent *)arg1;
- (id <SPTUBIEventFactory>)provideEventFactory;
@end

