//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionSortingEntityManager-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol SPTCollectionSortingEntityManagerHandler;

@interface SPTCollectionSortingEntityManagerImplementation : NSObject <SPTCollectionSortingEntityManager>
{
    id <SPTCollectionSortingEntityManagerHandler> _handler;
    NSMutableDictionary *_sortedItems;
}

@property(retain, nonatomic) NSMutableDictionary *sortedItems; // @synthesize sortedItems=_sortedItems;
@property(readonly, nonatomic) id <SPTCollectionSortingEntityManagerHandler> handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)trimAndSave;
- (void)loadLocalSorting;
- (void)setSortColumn:(unsigned long long)arg1 forURL:(id)arg2;
- (unsigned long long)sortColumnForURL:(id)arg1;
- (id)initWithHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

