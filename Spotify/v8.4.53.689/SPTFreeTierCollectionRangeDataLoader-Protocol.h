//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTFreeTierCollectionRangeDataLoader <NSObject>
@property(readonly, nonatomic) unsigned long long totalNumberOfItems;
@property(nonatomic) __weak id <SPTFreeTierCollectionRangeDataLoaderDelegate> rangeDataLoaderDelegate;
- (void)loadItemsForRange:(struct _NSRange)arg1;
@end
