//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTWatchConnectivityDataLoader;
@protocol SPTCollectionPlatform;

@interface SPTWatchPlatformCollectionRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    id <SPTCollectionPlatform> _collectionPlatform;
}

@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)stringFromCollectionPlatformState:(unsigned long long)arg1;
- (void)handleCollectionRemoveRequest:(id)arg1;
- (void)handleCollectionAddRequest:(id)arg1;
- (void)handleCollectionItemStateRequest:(id)arg1;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)sendCompletionResponseForRequest:(id)arg1 body:(id)arg2 error:(id)arg3;
- (id)initWithDataLoader:(id)arg1 collectionPlatform:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
