//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageResolveCacheStatusProvider-Protocol.h"

@class NSString;
@protocol SPTResolver;

@interface SPTImageResolveCacheStatusProviderImplementation : NSObject <SPTImageResolveCacheStatusProvider>
{
    id <SPTResolver> _resolver;
}

@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)lookupCacheStatusForImageURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCosmosResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

