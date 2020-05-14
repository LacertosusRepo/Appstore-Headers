//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFreeTierPlaylistPlayModel-Protocol.h"

@class NSURL, SPTPlayOrigin;
@protocol SPTFreeTierPlaylistModelObserver, SPTFreeTierPlaylistSortingFiltering, SPTPlaylistPlatformFieldURL><SPTPlaylistPlatformFieldPlayStatePlayable><SPTPlaylistPlatformFieldPlayStateRestriction, SPTPlaylistPlatformInCollection><SPTPlaylistPlatformFieldURL, SPTPlaylistPlatformIsBanned><SPTPlaylistPlatformFieldURL;

@protocol SPTFreeTierPlaylistModel <SPTFreeTierPlaylistPlayModel>
@property(readonly, nonatomic, getter=isFormatList) _Bool formatList;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, nonatomic) _Bool loadError;
@property(readonly, nonatomic, getter=isOfflineSyncPermissionEnabled) _Bool offlineSyncPermissionEnabled;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) _Bool excludeAllEpisodesOverride;
@property(readonly, nonatomic) NSURL *playlistURL;
- (void)playTrackURL:(NSURL *)arg1 andPlayOrigin:(SPTPlayOrigin *)arg2;
- (void)playlistContainsTrackURL:(NSURL *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addTrackURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)toggleLikedStateOnTrackEntity:(id <SPTPlaylistPlatformInCollection><SPTPlaylistPlatformFieldURL>)arg1;
- (void)toggleBannedStateOnTrackEntity:(id <SPTPlaylistPlatformIsBanned><SPTPlaylistPlatformFieldURL>)arg1;
- (_Bool)isPlaybackRestrictedForTrackEntity:(id <SPTPlaylistPlatformFieldURL><SPTPlaylistPlatformFieldPlayStatePlayable><SPTPlaylistPlatformFieldPlayStateRestriction>)arg1 shouldDisplayExplainingAlert:(_Bool)arg2 coverArtURL:(NSURL *)arg3;
- (void)changeOffline:(_Bool)arg1;
- (void)loadMore;
- (void)deletePlaylist;
- (void)changeFollowState:(_Bool)arg1;
- (void)load;
- (void)addPlaylistModelObserver:(id <SPTFreeTierPlaylistModelObserver>)arg1;
@end

