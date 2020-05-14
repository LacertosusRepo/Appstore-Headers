//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobilePodcastEntity_Episodes_EmptyEventFactory, SPTUBIMobilePodcastEntity_Episodes_EpisodeEventFactory, SPTUBIMobilePodcastEntity_Episodes_HeaderEventFactory;

@protocol SPTUBIMobilePodcastEntity_EpisodesEventFactory <NSObject>
- (id <SPTUBIMobilePodcastEntity_Episodes_EmptyEventFactory>)emptyFactory;
- (id <SPTUBIMobilePodcastEntity_Episodes_EpisodeEventFactory>)episodeFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobilePodcastEntity_Episodes_HeaderEventFactory>)headerFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
