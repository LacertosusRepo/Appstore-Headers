//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibrary_Header_PageTab_ItemList_ItemEventFactory;

@protocol SPTUBIMobileYourLibrary_Header_PageTab_ItemListEventFactory <NSObject>
- (id <SPTUBIMobileYourLibrary_Header_PageTab_ItemList_ItemEventFactory>)itemFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

