//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GCKBFilteredIndexMap : NSObject
{
    NSMutableArray *_map;
    NSMutableArray *_reverseMap;
}

- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (void)clear;
- (long long)filteredIndexForIndex:(unsigned long long)arg1;
- (long long)indexForFilteredIndex:(unsigned long long)arg1;
- (void)removeIndex:(unsigned long long)arg1;
- (void)insertIndex:(unsigned long long)arg1 matchesFilter:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long filteredIndexCount;
@property(readonly, nonatomic) unsigned long long indexCount;
- (id)init;

@end
