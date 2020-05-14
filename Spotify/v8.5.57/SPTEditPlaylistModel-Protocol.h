//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTEditPlaylistModelDelegate, SPTEditPlaylistModelEntity, SPTEditPlaylistModelEntityTrackFields, SPTFreeTierPlaylistSortingFiltering;

@protocol SPTEditPlaylistModel <NSObject>
@property(readonly, nonatomic) id <SPTFreeTierPlaylistSortingFiltering> sortingFiltering;
@property(readonly, nonatomic) id <SPTEditPlaylistModelEntity> entity;
@property(nonatomic) __weak id <SPTEditPlaylistModelDelegate> delegate;
@property(readonly, nonatomic) NSURL *playlistURL;
- (void)updateDescription:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)renamePlaylistToName:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)moveTrack:(id <SPTEditPlaylistModelEntityTrackFields>)arg1 before:(_Bool)arg2 targetTrack:(id <SPTEditPlaylistModelEntityTrackFields>)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeTracks:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)loadEntirePlaylist;
@end
