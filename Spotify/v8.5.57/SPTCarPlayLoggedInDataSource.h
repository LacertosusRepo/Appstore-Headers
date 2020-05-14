//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarPlayDataSource-Protocol.h"
#import "SPTExternalIntegrationCollectionControllerObserver-Protocol.h"
#import "SPTExternalIntegrationContentControllerObserver-Protocol.h"
#import "SPTExternalIntegrationPlaybackControllerObserver-Protocol.h"

@class NSArray, NSSet, NSString, SPTAccessory, SPTCarPlayContentItemBuilder, SPTCarPlayContentTreeCache, SPTCarPlayFeatureProperties, SPTCarPlayUBILogger;
@protocol SPTCarPlayContentDataSource, SPTExternalIntegrationExternalActionOrigin, SPTExternalIntegrationPlatform, SPTGaiaConnectAPI, SPTMediaPlayerContentBridge;

@interface SPTCarPlayLoggedInDataSource : NSObject <SPTExternalIntegrationContentControllerObserver, SPTExternalIntegrationPlaybackControllerObserver, SPTExternalIntegrationCollectionControllerObserver, SPTCarPlayDataSource>
{
    _Bool _rootItemsRequestInitiated;
    _Bool _fetchingRootPending;
    _Bool _offlineOnly;
    id <SPTExternalIntegrationExternalActionOrigin> _externalActionOrigin;
    SPTAccessory *_currentAccessory;
    id <SPTCarPlayContentDataSource> _contentDataSource;
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    id <SPTMediaPlayerContentBridge> _mediaPlayerBridge;
    id <SPTGaiaConnectAPI> _connectManager;
    NSArray *_rootItems;
    SPTCarPlayUBILogger *_logger;
    SPTCarPlayFeatureProperties *_properties;
    SPTCarPlayContentItemBuilder *_contentItemBuilder;
    SPTCarPlayContentTreeCache *_contentTreeCache;
    id _debugLog;
}

@property(retain, nonatomic) id debugLog; // @synthesize debugLog=_debugLog;
@property _Bool offlineOnly; // @synthesize offlineOnly=_offlineOnly;
@property _Bool fetchingRootPending; // @synthesize fetchingRootPending=_fetchingRootPending;
@property(nonatomic) _Bool rootItemsRequestInitiated; // @synthesize rootItemsRequestInitiated=_rootItemsRequestInitiated;
@property(readonly, nonatomic) SPTCarPlayContentTreeCache *contentTreeCache; // @synthesize contentTreeCache=_contentTreeCache;
@property(readonly, nonatomic) SPTCarPlayContentItemBuilder *contentItemBuilder; // @synthesize contentItemBuilder=_contentItemBuilder;
@property(retain, nonatomic) SPTCarPlayFeatureProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) SPTCarPlayUBILogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSArray *rootItems; // @synthesize rootItems=_rootItems;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) id <SPTMediaPlayerContentBridge> mediaPlayerBridge; // @synthesize mediaPlayerBridge=_mediaPlayerBridge;
@property(retain, nonatomic) id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
@property(readonly, nonatomic) id <SPTCarPlayContentDataSource> contentDataSource; // @synthesize contentDataSource=_contentDataSource;
@property(nonatomic) __weak SPTAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
- (void).cxx_destruct;
- (id)referrerFromIndexPath:(id)arg1;
- (void)activateDeviceIfRoutingToCarPlay:(_Bool)arg1;
- (void)activateDeviceForOldPlayerState:(id)arg1 newPlayerState:(id)arg2 isRoutingToCarPlay:(_Bool)arg3;
- (void)updateNowPlayingIdentifiersForPlayerState:(id)arg1 isRoutingToCarPlay:(_Bool)arg2;
- (id)contentRequestOptions;
- (void)didReceiveUpdatedCollectionNotification;
- (void)externalIntegrationCollectionController:(id)arg1 didReceiveNewCollectionStateForCurrentTrack:(_Bool)arg2;
- (void)willEnterForeground;
- (void)externalIntegrationPlaybackController:(id)arg1 didReceiveNewPlayerState:(id)arg2 oldPlayerState:(id)arg3;
- (void)didRegisterNewContentProviderInContentController:(id)arg1;
- (void)reloadRootItemsIfNeccessary;
@property(readonly, nonatomic) NSSet *missingRootItemURIs;
- (_Bool)contentURIShouldAddShuffleHeader:(id)arg1;
- (id)errorWithCode:(unsigned long long)arg1;
- (void)addSpecialChildContentToCache:(id)arg1 forParentIndexPath:(id)arg2;
- (void)addChildContentToCache:(id)arg1 forParent:(id)arg2 withIndexPath:(id)arg3;
- (void)handleCompletedChildContentResolvingWithContent:(id)arg1 indexPath:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadChildrenOfItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadChildrenAndNeccessaryParentsOfItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadRootItemsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reloadCarPlayData;
@property(readonly, nonatomic) unsigned long long enforcedDepth;
- (id)playableContentManager;
- (void)initiatePlaybackOfIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playableContentManager:(id)arg1 initiatePlaybackOfContentItemAtIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)contentItemAtIndexPath:(id)arg1;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateOfflineOnly:(_Bool)arg1;
- (void)carplaySessionEnded;
@property(readonly, nonatomic) id <SPTExternalIntegrationExternalActionOrigin> externalActionOrigin; // @synthesize externalActionOrigin=_externalActionOrigin;
- (void)dealloc;
- (id)initWithContentDataSource:(id)arg1 contentTreeCache:(id)arg2 externalIntegrationPlatform:(id)arg3 mediaPlayerBridge:(id)arg4 connectManager:(id)arg5 imageLoaderFactory:(id)arg6 properties:(id)arg7 offlineOnly:(_Bool)arg8 debugLog:(id)arg9 logger:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

