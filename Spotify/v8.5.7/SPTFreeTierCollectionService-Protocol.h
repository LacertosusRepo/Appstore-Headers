//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTFreeTierCollectionEntityModel, SPTFreeTierCollectionPlaylistsModel, SPTFreeTierCollectionSongsModel, SPTFreeTierCollectionTestManager;

@protocol SPTFreeTierCollectionService <SPTService>
- (id <SPTFreeTierCollectionTestManager>)provideTestManager;
- (id <SPTFreeTierCollectionSongsModel>)provideSongsEntityModel;
- (id <SPTFreeTierCollectionEntityModel>)providePodcastsEntityModel;
- (id <SPTFreeTierCollectionEntityModel>)provideArtistsEntityModel;
- (id <SPTFreeTierCollectionEntityModel>)provideAlbumsEntityModel;
- (id <SPTFreeTierCollectionPlaylistsModel>)providePlaylistsModel:(NSURL *)arg1;
@end

