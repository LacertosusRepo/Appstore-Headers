//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, SPTStorylinesPersistentCache;

@interface SPTStorylinesEnabledTracksCache : NSObject
{
    SPTStorylinesPersistentCache *_persistentCache;
    NSCache *_memoryCache;
}

@property(readonly, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, nonatomic) SPTStorylinesPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
- (void).cxx_destruct;
- (void)loadStorylinesEnabledTracksWithCallback:(CDUnknownBlockType)arg1;
- (void)cacheEnabledTracks:(id)arg1;
- (id)cachedContentKey;
- (id)initWithPersistentCache:(id)arg1;

@end
