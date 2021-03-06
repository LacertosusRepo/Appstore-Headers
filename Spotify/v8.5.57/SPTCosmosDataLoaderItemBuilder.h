//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCosmosDataLoaderItemBuilder-Protocol.h"

@class NSArray, NSString;

@interface SPTCosmosDataLoaderItemBuilder : NSObject <SPTCosmosDataLoaderItemBuilder>
{
    NSArray *_fields;
    CDUnknownBlockType _itemInitializer;
}

@property(copy, nonatomic) CDUnknownBlockType itemInitializer; // @synthesize itemInitializer=_itemInitializer;
@property(retain, nonatomic) NSArray *fields; // @synthesize fields=_fields;
- (void).cxx_destruct;
- (id)itemWithDictionary:(id)arg1;
- (id)initWithFields:(id)arg1 itemInitializer:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

