//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibraryArtists_ItemList_AddArtistsItemEventFactory, SPTUBIMobileYourLibraryArtists_ItemList_HiddenContentEventFactory, SPTUBIMobileYourLibraryArtists_ItemList_ItemEventFactory;

@protocol SPTUBIMobileYourLibraryArtists_ItemListEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryArtists_ItemList_HiddenContentEventFactory>)hiddenContentFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileYourLibraryArtists_ItemList_AddArtistsItemEventFactory>)addArtistsItemFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileYourLibraryArtists_ItemList_ItemEventFactory>)itemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
