//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobilePodcastFeaturedTracklist_Tracklist_HeaderEventFactory, SPTUBIMobilePodcastFeaturedTracklist_Tracklist_ItemEventFactory;

@protocol SPTUBIMobilePodcastFeaturedTracklist_TracklistEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobilePodcastFeaturedTracklist_Tracklist_ItemEventFactory>)itemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobilePodcastFeaturedTracklist_Tracklist_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

