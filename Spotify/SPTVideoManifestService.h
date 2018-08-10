//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoResourceLoaderFactory.h"

@class NSMapTable, NSOperationQueue, NSString, SPTDataLoaderFactory, SPTNetworkConnectivityController, SPTPersistentCache, SPTVideoCDNSelector, SPTVideoFairplayService, SPTVideoPreferences;

@interface SPTVideoManifestService : NSObject <SPTVideoResourceLoaderFactory>
{
    SPTVideoCDNSelector *_cdnSelector;
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTVideoFairplayService *_fairplayService;
    SPTPersistentCache *_cache;
    SPTVideoPreferences *_videoPreferences;
    NSMapTable *_pendingManifestRequests;
    NSOperationQueue *_operationQueue;
    SPTNetworkConnectivityController *_ncc;
}

@property(retain, nonatomic) SPTNetworkConnectivityController *ncc; // @synthesize ncc=_ncc;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMapTable *pendingManifestRequests; // @synthesize pendingManifestRequests=_pendingManifestRequests;
@property(retain, nonatomic) SPTVideoPreferences *videoPreferences; // @synthesize videoPreferences=_videoPreferences;
@property(retain, nonatomic) SPTPersistentCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) SPTVideoFairplayService *fairplayService; // @synthesize fairplayService=_fairplayService;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
- (void).cxx_destruct;
- (id)createFlatResourceLoaderWithMediaManifest:(id)arg1 playbackID:(id)arg2;
- (id)createHLSResourceLoaderWithVideoSourceID:(id)arg1 playbackID:(id)arg2;
- (unsigned long long)startBitrate;
- (void)pruneCache;
- (void)removeCacheForVideoSourceID:(id)arg1;
- (id)fetchManifestWithVideoSourceID:(id)arg1 initiatingPlaybackID:(id)arg2;
- (id)initWithDataLoaderFactory:(id)arg1 fairplayService:(id)arg2 cache:(id)arg3 networkConnectivityController:(id)arg4 videoPreferences:(id)arg5 cdnSelector:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

