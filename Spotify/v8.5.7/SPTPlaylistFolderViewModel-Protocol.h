//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTCollectionFiltering-Protocol.h"
#import "SPTCollectionSorting-Protocol.h"

@class NSArray, NSIndexPath, NSString, NSURL;
@protocol SPTPlaylistFolderViewModelDelegate;

@protocol SPTPlaylistFolderViewModel <NSObject, SPTCollectionSorting, SPTCollectionFiltering>
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) NSArray *sectionedItems;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) unsigned long long numberOfPlaylistContainers;
@property(readonly, nonatomic) _Bool isPlaylistFolderRootlist;
@property(nonatomic) _Bool showsOnlyWritablePlaylists;
@property(nonatomic) _Bool showDisplaySectionIndex;
@property(nonatomic) _Bool showCreateNewPlaylistCellInFolderRoot;
@property(nonatomic) _Bool showLocalFilesCell;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSURL *uri;
@property(nonatomic) __weak id <SPTPlaylistFolderViewModelDelegate> delegate;
- (void)logItemSelectedAtIndexPath:(NSIndexPath *)arg1 targetURL:(NSURL *)arg2;
- (_Bool)toggleItemOfflineStateAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)playlistIsSeparatorAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)canUserAddToPlaylistForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)stopObservingPlaylistContainerChildren;
- (void)startObservingPlaylistContainerChildren;
- (void)endObservingRowAtIndexPath:(NSIndexPath *)arg1 context:(id)arg2;
- (void)beginObservingRowAtIndexPath:(NSIndexPath *)arg1 context:(id)arg2;
- (NSIndexPath *)indexPathForPlaylistURL:(NSURL *)arg1;
- (NSURL *)imageURLForRowAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)isRowAtIndexPathOwnedBySelf:(NSIndexPath *)arg1;
- (void)deleteRowAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)canDeleteRowAtIndexPath:(NSIndexPath *)arg1;
- (NSURL *)URLForRowAtIndexPath:(NSIndexPath *)arg1;
- (long long)offlineSyncStatusAtIndexPath:(NSIndexPath *)arg1;
- (long long)iconForRowAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)flatIndexForIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfItemsInRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)ownerForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)subtitleForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleForRowAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)load;
@end

