//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionEntityList-Protocol.h"
#import "SPTRecentlyPlayedModelObserver-Protocol.h"

@class NSHashTable, NSMutableArray, NSString, SPTObserverManager, SPTRecentlyPlayedModel;

@interface SPTRecentlyPlayedEntityList : NSObject <SPTRecentlyPlayedModelObserver, SPTCollectionEntityList>
{
    _Bool _dataLoaded;
    SPTRecentlyPlayedModel *_recentlyPlayedModel;
    unsigned long long _maxNumberOfItems;
    CDUnknownBlockType _filterPredicate;
    NSHashTable *_observers;
    SPTObserverManager *_observerManager;
    NSMutableArray *_entities;
    NSMutableArray *_allEntities;
}

@property(retain, nonatomic) NSMutableArray *allEntities; // @synthesize allEntities=_allEntities;
@property(retain, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(readonly, copy, nonatomic) CDUnknownBlockType filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) unsigned long long maxNumberOfItems; // @synthesize maxNumberOfItems=_maxNumberOfItems;
@property(nonatomic) __weak SPTRecentlyPlayedModel *recentlyPlayedModel; // @synthesize recentlyPlayedModel=_recentlyPlayedModel;
- (void).cxx_destruct;
- (_Bool)canEditList;
- (_Bool)removeItemAtIndexPath:(id)arg1;
- (_Bool)canRemoveItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)itemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) long long numberOfItems;
- (void)removeEntityListObserver:(id)arg1;
- (void)addEntityListObserver:(id)arg1;
- (void)recentlyPlayedModelDidReload:(id)arg1;
- (void)updateItemsAndNotifyObservers;
- (void)updateEntityListIfLoaded;
- (id)initWithRecentlyPlayedModel:(id)arg1 maxNumberOfItems:(unsigned long long)arg2 filterPredicate:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

