//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibraryPlaylists_AlphabeticIndexEventFactory, SPTUBIMobileYourLibraryPlaylists_EmptyStaticFilterViewEventFactory, SPTUBIMobileYourLibraryPlaylists_EmptyTextFilterViewEventFactory, SPTUBIMobileYourLibraryPlaylists_EmptyViewEventFactory, SPTUBIMobileYourLibraryPlaylists_FilterAndSortEventFactory, SPTUBIMobileYourLibraryPlaylists_ItemListEventFactory, SPTUBIMobileYourLibraryPlaylists_QuickScrollEventFactory, SPTUBIMobileYourLibraryPlaylists_SortFilterSheetEventFactory;

@protocol SPTUBIMobileYourLibraryPlaylistsEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheetEventFactory>)sortFilterSheetFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_EmptyStaticFilterViewEventFactory>)emptyStaticFilterViewFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_EmptyTextFilterViewEventFactory>)emptyTextFilterViewFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_EmptyViewEventFactory>)emptyViewFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_AlphabeticIndexEventFactory>)alphabeticIndexFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_QuickScrollEventFactory>)quickScrollFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_ItemListEventFactory>)itemListFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_FilterAndSortEventFactory>)filterAndSortFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

