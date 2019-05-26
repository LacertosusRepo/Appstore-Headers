//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession, SPTPersistentCache;

@interface SPTHomeConsolidateContentCache : NSObject
{
    SPTPersistentCache *_persistentCache;
    SPSession *_session;
}

@property(readonly, nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
- (void).cxx_destruct;
- (void)loadDataWithCallback:(CDUnknownBlockType)arg1;
- (void)cacheData:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)cachedContentKey;
- (id)initWithPersistentCache:(id)arg1 session:(id)arg2;

@end

