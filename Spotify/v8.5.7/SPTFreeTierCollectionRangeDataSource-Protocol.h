//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString;
@protocol SPTFreeTierCollectionRangeDataSourceDelegate;

@protocol SPTFreeTierCollectionRangeDataSource <NSObject>
@property(nonatomic) __weak id <SPTFreeTierCollectionRangeDataSourceDelegate> delegate;
- (id)itemAtIndexPath:(NSIndexPath *)arg1;
- (void)loadWithSortRules:(NSArray *)arg1 filterRules:(NSArray *)arg2 textFilter:(NSString *)arg3;
- (long long)totalNumberOfItems;
@end

