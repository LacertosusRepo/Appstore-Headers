//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent;

@protocol SPTUBIMobilePlaylistExtender_ExtenderItemList_Item_AddSongsButtonEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitAddToPlaylistWithPlaylist:(NSURL *)arg1 itemToBeAdded:(NSURL *)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

