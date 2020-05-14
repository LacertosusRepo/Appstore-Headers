//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibraryPlaylists_ItemList_CreatePlaylistEventFactory, SPTUBIMobileYourLibraryPlaylists_ItemList_HiddenContentEventFactory, SPTUBIMobileYourLibraryPlaylists_ItemList_ItemEventFactory, SPTUBIMobileYourLibraryPlaylists_ItemList_LikedSongsEventFactory;

@protocol SPTUBIMobileYourLibraryPlaylists_ItemListEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryPlaylists_ItemList_HiddenContentEventFactory>)hiddenContentFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileYourLibraryPlaylists_ItemList_ItemEventFactory>)itemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobileYourLibraryPlaylists_ItemList_LikedSongsEventFactory>)likedSongsFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobileYourLibraryPlaylists_ItemList_CreatePlaylistEventFactory>)createPlaylistFactoryWithPosition:(long long)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

