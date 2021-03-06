//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionSortingEntityManager.h"

@class NSMutableDictionary, NSString;

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

