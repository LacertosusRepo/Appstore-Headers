//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;
@protocol SPTCollectionEntityListItem, SPTCollectionEntityListObserver;

@protocol SPTCollectionEntityList <NSObject>
@property(readonly, nonatomic, getter=isDataLoaded) _Bool dataLoaded;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)canEditList;
- (_Bool)removeItemAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)canRemoveItemAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTCollectionEntityListItem>)itemAtIndexPath:(NSIndexPath *)arg1;
- (void)removeEntityListObserver:(id <SPTCollectionEntityListObserver>)arg1;
- (void)addEntityListObserver:(id <SPTCollectionEntityListObserver>)arg1;

@optional
- (_Bool)hasNewItem;
@end

