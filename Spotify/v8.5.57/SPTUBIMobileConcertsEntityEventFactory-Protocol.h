//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileConcertsEntity_FindTicketsButtonEventFactory, SPTUBIMobileConcertsEntity_LineupCarouselEventFactory, SPTUBIMobileConcertsEntity_ListenToTheirMusicEventFactory, SPTUBIMobileConcertsEntity_RelatedConcertsListEventFactory, SPTUBIMobileConcertsEntity_SeeMoreConcertsButtonEventFactory, SPTUBIMobileConcertsEntity_ShareButtonEventFactory;

@protocol SPTUBIMobileConcertsEntityEventFactory <NSObject>
- (id <SPTUBIMobileConcertsEntity_SeeMoreConcertsButtonEventFactory>)seeMoreConcertsButtonFactory;
- (id <SPTUBIMobileConcertsEntity_RelatedConcertsListEventFactory>)relatedConcertsListFactory;
- (id <SPTUBIMobileConcertsEntity_ListenToTheirMusicEventFactory>)listenToTheirMusicFactory;
- (id <SPTUBIMobileConcertsEntity_LineupCarouselEventFactory>)lineupCarouselFactory;
- (id <SPTUBIMobileConcertsEntity_FindTicketsButtonEventFactory>)findTicketsButtonFactory;
- (id <SPTUBIMobileConcertsEntity_ShareButtonEventFactory>)shareButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
