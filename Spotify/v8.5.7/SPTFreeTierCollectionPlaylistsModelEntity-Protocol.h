//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPTFreeTierCollectionPlaylistModelItemEntity;

@protocol SPTFreeTierCollectionPlaylistsModelEntity <NSObject>
@property(readonly, nonatomic) _Bool hasHiddenContent;
@property(readonly, nonatomic) _Bool hasOwnPlaylists;
@property(readonly, nonatomic) id <SPTFreeTierCollectionPlaylistModelItemEntity> favoriteEntity;
@property(readonly, nonatomic) NSArray *items;
@end

