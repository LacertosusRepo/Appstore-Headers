//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPersistentCache;

@interface SPTStorylinesPersistentCache : NSObject
{
    SPTPersistentCache *_diskCache;
}

@property(readonly, nonatomic) SPTPersistentCache *diskCache; // @synthesize diskCache=_diskCache;
- (void).cxx_destruct;
- (id)parseData:(id)arg1;
- (void)loadDataForIdentifier:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)cacheData:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithPersistentCache:(id)arg1;

@end

