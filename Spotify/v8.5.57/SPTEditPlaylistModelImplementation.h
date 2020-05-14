//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEditPlaylistModel-Protocol.h"

@class NSString, NSURL, SPTEditPlaylistModelEntityImplementation;
@protocol SPTClientSettings, SPTEditPlaylistModelDelegate, SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistTestManager, SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTEditPlaylistModelImplementation : NSObject <SPTEditPlaylistModel>
{
    NSURL *_playlistURL;
    id <SPTFreeTierPlaylistSortingFiltering> _sortingFiltering;
    id <SPTEditPlaylistModelDelegate> _delegate;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTClientSettings> _clientSettings;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    SPTEditPlaylistModelEntityImplementation *_entity;
}

@property(retain, nonatomic) SPTEditPlaylistModelEntityImplementation *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(nonatomic) __weak id <SPTEditPlaylistModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering; // @synthesize sortingFiltering=_sortingFiltering;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)updateDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renamePlaylistToName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveTrack:(id)arg1 before:(_Bool)arg2 targetTrack:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeTracks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMetadataWithResponse:(id)arg1 tracksResponse:(SPTPlaylistPlatformDataLoaderResponse_5db64d04 *)arg2 recommendations:(id)arg3;
- (void)loadMetadataAndAllTracks;
- (_Bool)shouldIncludeEpisodes;
- (void)loadEntirePlaylist;
- (id)initWithPlaylistURL:(id)arg1 playlistDataLoader:(id)arg2 playlistModel:(id)arg3 sortingFiltering:(id)arg4 clientSettings:(id)arg5 testManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

