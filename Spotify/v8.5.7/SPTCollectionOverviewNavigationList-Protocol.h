//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath;
@protocol SPTCollectionOverviewNavigationListDelegate, SPTCollectionOverviewNavigationModelEntry;

@protocol SPTCollectionOverviewNavigationList <NSObject>
@property(nonatomic) __weak id <SPTCollectionOverviewNavigationListDelegate> delegate;
- (id <SPTCollectionOverviewNavigationModelEntry>)entryAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
@end
