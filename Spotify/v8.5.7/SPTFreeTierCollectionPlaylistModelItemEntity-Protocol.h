//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTFreeTierCollectionModelItemEntity-Protocol.h"

@protocol SPTFreeTierCollectionFavoriteMixModelEntity, SPTFreeTierCollectionFolderEntity, SPTFreeTierCollectionPlaylistEntity;

@protocol SPTFreeTierCollectionPlaylistModelItemEntity <SPTFreeTierCollectionModelItemEntity>
@property(readonly, nonatomic) id <SPTFreeTierCollectionFavoriteMixModelEntity> favoriteMixEntity;
@property(readonly, nonatomic) id <SPTFreeTierCollectionFolderEntity> folderEntity;
@property(readonly, nonatomic) id <SPTFreeTierCollectionPlaylistEntity> playlistEntity;
@end

