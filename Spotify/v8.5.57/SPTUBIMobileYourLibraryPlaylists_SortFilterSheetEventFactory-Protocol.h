//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_CancelButtonEventFactory, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_DismissEventFactory, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_FilterOptionEventFactory, SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_SortOptionEventFactory;

@protocol SPTUBIMobileYourLibraryPlaylists_SortFilterSheetEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_DismissEventFactory>)dismissFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_CancelButtonEventFactory>)cancelButtonFactory;
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_SortOptionEventFactory>)sortOptionFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIMobileYourLibraryPlaylists_SortFilterSheet_FilterOptionEventFactory>)filterOptionFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

