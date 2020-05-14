//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNavigationList-Protocol.h"

@class NSDictionary, NSOrderedSet, NSString;

@interface SPTNavigationListImplementation : NSObject <SPTNavigationList>
{
    NSOrderedSet *_items;
    NSString *_identifier;
    NSDictionary *_itemsURIMap;
}

@property(readonly, nonatomic) NSDictionary *itemsURIMap; // @synthesize itemsURIMap=_itemsURIMap;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSOrderedSet *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)itemForURI:(id)arg1;
- (id)initWithItems:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

