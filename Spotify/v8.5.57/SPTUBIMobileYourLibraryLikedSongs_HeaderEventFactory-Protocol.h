//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibraryLikedSongs_Header_AddSongsButtonEventFactory, SPTUBIMobileYourLibraryLikedSongs_Header_FilterAndSortEventFactory, SPTUBIMobileYourLibraryLikedSongs_Header_PlayButtonEventFactory;

@protocol SPTUBIMobileYourLibraryLikedSongs_HeaderEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryLikedSongs_Header_PlayButtonEventFactory>)playButtonFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIMobileYourLibraryLikedSongs_Header_AddSongsButtonEventFactory>)addSongsButtonFactory;
- (id <SPTUBIMobileYourLibraryLikedSongs_Header_FilterAndSortEventFactory>)filterAndSortFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
