//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (GCKAdditions)
+ (id)gck_buildURLWithName:(id)arg1;
+ (void)gck_deleteCacheWithName:(id)arg1;
+ (id)gck_loadFromCacheWithName:(id)arg1;
- (_Bool)gck_trimToTargetSize:(unsigned long long)arg1;
- (_Bool)gck_removeOldestItem;
- (_Bool)gck_removeItemsOlderThan:(double)arg1;
- (void)gck_writeToCacheWithName:(id)arg1;
@end

