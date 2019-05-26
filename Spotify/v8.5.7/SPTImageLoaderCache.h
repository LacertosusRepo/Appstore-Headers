//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSCache, NSString;
@protocol SPTImageLoaderCacheDelegate;

@interface SPTImageLoaderCache : NSObject <NSCacheDelegate>
{
    id <SPTImageLoaderCacheDelegate> _delegate;
    NSCache *_cache;
}

@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) __weak id <SPTImageLoaderCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)removeAllObjects;
- (id)imageURLKey:(id)arg1 size:(struct CGSize)arg2;
- (unsigned long long)cacheCostForSize:(struct CGSize)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (id)imageForRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

