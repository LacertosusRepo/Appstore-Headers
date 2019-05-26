//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeFeature-Protocol.h"
#import "SPTHomeTestManagerObserver-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTHomeFeatureContentCache, SPTHomeViewControllerBuilder;
@protocol CosmosFeature, EXP_SPTHubFrameworkService, SPTAbbaService, SPTContainerService, SPTContainerUIService, SPTFeatureFlagFactory, SPTFeatureFlaggingService, SPTFeedService, SPTFreeTierService, SPTGLUEService, SPTHomeFeatureContentOperationFactory, SPTHomeTestManager, SPTHomeUIService, SPTLocalSettings, SPTNetworkService, SPTPageRegistrationToken, SPTRecentlyPlayedService, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTHomeFeatureImplementation : NSObject <SPTHomeTestManagerObserver, SPTService, SPTHomeFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTFeedService> _feedService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTGLUEService> _glueService;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTNetworkService> _networkFeature;
    id <SPTSessionService> _sessionService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTHomeUIService> _homeUIService;
    id <SPTAbbaService> _abbaService;
    id <SPTHomeTestManager> _testManager;
    id <SPTLocalSettings> _localSettings;
    id <SPTPageRegistrationToken> _pageRegistrationToken;
    SPTHomeViewControllerBuilder *_homeViewControllerBuilder;
    SPTHomeFeatureContentCache *_homeContentCache;
    id <SPTHomeFeatureContentOperationFactory> _contentOperationFactory;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) id <SPTHomeFeatureContentOperationFactory> contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(retain, nonatomic) SPTHomeFeatureContentCache *homeContentCache; // @synthesize homeContentCache=_homeContentCache;
@property(retain, nonatomic) SPTHomeViewControllerBuilder *homeViewControllerBuilder; // @synthesize homeViewControllerBuilder=_homeViewControllerBuilder;
@property(retain, nonatomic) id <SPTPageRegistrationToken> pageRegistrationToken; // @synthesize pageRegistrationToken=_pageRegistrationToken;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTHomeUIService> homeUIService; // @synthesize homeUIService=_homeUIService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTFeedService> feedService; // @synthesize feedService=_feedService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)homeFeedButtonPressed:(id)arg1;
- (void)addFeedBarButtonItemToHubsRendererViewController:(id)arg1;
- (id)feedHeartBeatManager;
- (void)homeTestManager:(id)arg1 didChangeModeValueFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (id)makeURLResolver;
- (id)provideTestManager;
- (id)providePersistentCache;
- (id)makeViewControllerForURI:(id)arg1 context:(id)arg2;
- (void)unregisterPage;
- (void)registerPage;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
