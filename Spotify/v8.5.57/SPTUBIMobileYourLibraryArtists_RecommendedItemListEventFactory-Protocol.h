//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibraryArtists_RecommendedItemList_ItemEventFactory, SPTUBIMobileYourLibraryArtists_RecommendedItemList_RecommendedSectionHeaderEventFactory;

@protocol SPTUBIMobileYourLibraryArtists_RecommendedItemListEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryArtists_RecommendedItemList_ItemEventFactory>)itemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobileYourLibraryArtists_RecommendedItemList_RecommendedSectionHeaderEventFactory>)recommendedSectionHeaderFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

