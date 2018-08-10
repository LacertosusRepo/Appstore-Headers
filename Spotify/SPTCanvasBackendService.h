//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTNetworkConnectivityControllerObserver.h"
#import "SPTOfflineModeStateObserver.h"

@class NSDictionary, NSMutableDictionary, NSString, NSTimer, SPTCanvasCache, SPTDataLoader, SPTNetworkConnectivityController;

@interface SPTCanvasBackendService : NSObject <SPTDataLoaderDelegate, SPTNetworkConnectivityControllerObserver, SPTOfflineModeStateObserver>
{
    _Bool _shouldAddFullSyncTestData;
    _Bool _isPrepared;
    SPTDataLoader *_dataLoader;
    id <SPTEntityService> _entityService;
    NSTimer *_refreshEnabledURIsTimer;
    NSMutableDictionary *_mutableCanvasModelsByURI;
    SPTCanvasCache *_diskCache;
    SPTNetworkConnectivityController *_connectivityController;
    id <SPTOfflineModeState> _offlineNotifier;
    NSMutableDictionary *_fetchArtistImageCompletionBlocks;
}

+ (id)keyPathsForValuesAffectingCanvasModelsByURI;
@property(readonly, nonatomic) NSMutableDictionary *fetchArtistImageCompletionBlocks; // @synthesize fetchArtistImageCompletionBlocks=_fetchArtistImageCompletionBlocks;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) SPTCanvasCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) NSMutableDictionary *mutableCanvasModelsByURI; // @synthesize mutableCanvasModelsByURI=_mutableCanvasModelsByURI;
@property(retain, nonatomic) NSTimer *refreshEnabledURIsTimer; // @synthesize refreshEnabledURIsTimer=_refreshEnabledURIsTimer;
@property(readonly) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) _Bool shouldAddFullSyncTestData; // @synthesize shouldAddFullSyncTestData=_shouldAddFullSyncTestData;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)networkConnectivityController:(id)arg1 didChangeAllowSyncOver3G:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)handleResponseForRequestUserInfo:(id)arg1 dictionary:(id)arg2;
- (void)fetchImageUrlForArtistURI:(id)arg1 didCompleteWithImageURL:(id)arg2 orError:(id)arg3;
- (void)handleFetchImageUrlResponse:(id)arg1 forArtistURI:(id)arg2;
- (void)scheduleFetchOfImageUrlForArtist:(id)arg1;
- (void)addFetchArtistImageCompletionBlock:(CDUnknownBlockType)arg1 forArtistURI:(id)arg2;
- (_Bool)shouldScheduleFetchOfArtistImageForArtistURI:(id)arg1;
- (void)fetchImageUrlForArtist:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)parseDataFromObject:(id)arg1;
- (void)loadFromCache;
- (void)refreshEnabledURIs;
- (void)startRefreshingEnabledURIs;
@property(readonly, nonatomic) NSDictionary *canvasModelsByURI;
- (id)canvasEnabledResourcesForMarket:(id)arg1;
- (id)canvasEnabledResourcesURL;
- (id)canvasAnnotationsURLForTrackID:(id)arg1;
- (void)observeNetworkState;
- (void)disableService;
- (void)prepareServiceForUseIfNeeded;
- (id)initWithDataLoaderFactory:(id)arg1 entityService:(id)arg2 connectivityController:(id)arg3 offlineNotifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

