//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileYourLibrary_Header_GroupTab_ActionButtonEventFactory, SPTUBIMobileYourLibrary_Header_GroupTab_ItemListEventFactory;

@protocol SPTUBIMobileYourLibrary_Header_GroupTabEventFactory <NSObject>
- (id <SPTUBIMobileYourLibrary_Header_GroupTab_ActionButtonEventFactory>)actionButtonFactory;
- (id <SPTUBIMobileYourLibrary_Header_GroupTab_ItemListEventFactory>)itemListFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

