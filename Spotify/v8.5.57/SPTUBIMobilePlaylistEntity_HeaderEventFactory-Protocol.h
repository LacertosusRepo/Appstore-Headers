//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobilePlaylistEntity_Header_CoverArtEventFactory, SPTUBIMobilePlaylistEntity_Header_FollowButtonEventFactory, SPTUBIMobilePlaylistEntity_Header_OwnerEventFactory;

@protocol SPTUBIMobilePlaylistEntity_HeaderEventFactory <NSObject>
- (id <SPTUBIMobilePlaylistEntity_Header_FollowButtonEventFactory>)followButtonFactory;
- (id <SPTUBIMobilePlaylistEntity_Header_OwnerEventFactory>)ownerFactory;
- (id <SPTUBIMobilePlaylistEntity_Header_CoverArtEventFactory>)coverArtFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

