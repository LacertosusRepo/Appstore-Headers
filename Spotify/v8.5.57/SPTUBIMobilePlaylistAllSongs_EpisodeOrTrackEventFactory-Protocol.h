//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_ContextMenuButtonEventFactory, SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_CoverArtEventFactory, SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_DislikeButtonEventFactory, SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_DownloadButtonEventFactory, SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_LikeButtonEventFactory;

@protocol SPTUBIMobilePlaylistAllSongs_EpisodeOrTrackEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_DownloadButtonEventFactory>)downloadButtonFactory;
- (id <SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_DislikeButtonEventFactory>)dislikeButtonFactory;
- (id <SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_LikeButtonEventFactory>)likeButtonFactory;
- (id <SPTUBIMobilePlaylistAllSongs_EpisodeOrTrack_CoverArtEventFactory>)coverArtFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

