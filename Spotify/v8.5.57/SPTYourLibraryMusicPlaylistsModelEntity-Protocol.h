//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPTYourLibraryMusicPlaylistModelItemEntity;

@protocol SPTYourLibraryMusicPlaylistsModelEntity <NSObject>
@property(readonly, copy, nonatomic) NSArray *sectionTitles;
@property(readonly, copy, nonatomic) NSArray *sectionIndexes;
@property(readonly, nonatomic) _Bool hasHiddenContent;
@property(readonly, nonatomic) _Bool hasOwnPlaylists;
@property(readonly, nonatomic) id <SPTYourLibraryMusicPlaylistModelItemEntity> favoriteEntity;
@property(readonly, copy, nonatomic) NSArray *items;
@end

