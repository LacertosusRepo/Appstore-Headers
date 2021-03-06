//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFreeTierPlaylistPlayModel-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTFreeTierPlaylistModelEntityTrackFields, SPTFreeTierPlaylistModelObserver, SPTFreeTierPlaylistSortingFiltering;

@protocol SPTFreeTierPlaylistModel <SPTFreeTierPlaylistPlayModel>
@property(readonly, nonatomic, getter=isFormatList) _Bool formatList;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, nonatomic) _Bool loadError;
@property(readonly, nonatomic, getter=isOfflineSyncAvailable) _Bool offlineSyncAvailable;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) NSURL *playlistURL;
- (void)playlistContainsTrackURL:(NSURL *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)addTrackURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updateDescription:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)renamePlaylistToName:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)moveTrack:(id <SPTFreeTierPlaylistModelEntityTrackFields>)arg1 before:(_Bool)arg2 targetTrack:(id <SPTFreeTierPlaylistModelEntityTrackFields>)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeTracks:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)toggleLikedStateOnTrackEntity:(id <SPTFreeTierPlaylistModelEntityTrackFields>)arg1;
- (void)toggleBannedStateOnTrackEntity:(id <SPTFreeTierPlaylistModelEntityTrackFields>)arg1;
- (_Bool)isPlaybackRestrictedForTrackEntity:(id <SPTFreeTierPlaylistModelEntityTrackFields>)arg1 playbackPrevented:(_Bool)arg2;
- (void)changeOffline:(_Bool)arg1;
- (void)loadMore;
- (void)deletePlaylist;
- (void)changeFollowState:(_Bool)arg1;
- (void)loadEntirePlaylist;
- (void)load;
- (void)addPlaylistModelObserver:(id <SPTFreeTierPlaylistModelObserver>)arg1;
@end

