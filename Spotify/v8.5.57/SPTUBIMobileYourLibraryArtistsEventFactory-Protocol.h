//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibraryArtists_AlphabeticIndexEventFactory, SPTUBIMobileYourLibraryArtists_EmptyTextFilterViewEventFactory, SPTUBIMobileYourLibraryArtists_EmptyViewEventFactory, SPTUBIMobileYourLibraryArtists_FilterAndSortEventFactory, SPTUBIMobileYourLibraryArtists_ItemListEventFactory, SPTUBIMobileYourLibraryArtists_QuickScrollEventFactory, SPTUBIMobileYourLibraryArtists_RecommendedItemListEventFactory, SPTUBIMobileYourLibraryArtists_SortFilterSheetEventFactory;

@protocol SPTUBIMobileYourLibraryArtistsEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryArtists_SortFilterSheetEventFactory>)sortFilterSheetFactory;
- (id <SPTUBIMobileYourLibraryArtists_EmptyTextFilterViewEventFactory>)emptyTextFilterViewFactory;
- (id <SPTUBIMobileYourLibraryArtists_EmptyViewEventFactory>)emptyViewFactory;
- (id <SPTUBIMobileYourLibraryArtists_AlphabeticIndexEventFactory>)alphabeticIndexFactory;
- (id <SPTUBIMobileYourLibraryArtists_QuickScrollEventFactory>)quickScrollFactory;
- (id <SPTUBIMobileYourLibraryArtists_RecommendedItemListEventFactory>)recommendedItemListFactory;
- (id <SPTUBIMobileYourLibraryArtists_ItemListEventFactory>)itemListFactory;
- (id <SPTUBIMobileYourLibraryArtists_FilterAndSortEventFactory>)filterAndSortFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

