//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobileConcertsEntity_LineupCarousel_ArtistEventFactory;

@protocol SPTUBIMobileConcertsEntity_LineupCarouselEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileConcertsEntity_LineupCarousel_ArtistEventFactory>)artistFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
