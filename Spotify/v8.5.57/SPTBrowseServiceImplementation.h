//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseService-Protocol.h"

@class NSString, SPTAllocationContext, SPTBrowseFeatureProperties, SPTPersistentCache;
@protocol SPTBrowseTestManager, SPTContainerService, SPTFeatureFlaggingService, SPTFreeTierService, SPTGLUEService, SPTHubFrameworkService, SPTNetworkService, SPTOnDemandService, SPTPerformanceMetricsService, SPTPlayerFeature, SPTPodcastFeature, SPTPodcastUIService, SPTRadioService, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, _TtP22MarketingFormatFeature25SPTMarketingFormatService_;

@interface SPTBrowseServiceImplementation : NSObject <SPTBrowseService>
{
    id <SPTBrowseTestManager> _testManager;
    SPTPersistentCache *_browseRootPersistentCache;
    SPTBrowseFeatureProperties *_featureProperties;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTFreeTierService> _freeTierService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTRadioService> _radioService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTSessionService> _clientSessionService;
    id <_TtP22MarketingFormatFeature25SPTMarketingFormatService_> _marketingFormatService;
    id <SPTPlayerFeature> _playerService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <_TtP22MarketingFormatFeature25SPTMarketingFormatService_> marketingFormatService; // @synthesize marketingFormatService=_marketingFormatService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTBrowseFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
- (CDUnknownBlockType)replaceRadioButtonTransformer;
@property(readonly, nonatomic) CDUnknownBlockType cardsTransformer;
@property(readonly, nonatomic) id <SPTBrowseTestManager> testManager; // @synthesize testManager=_testManager;
- (_Bool)ownsPageWithURI:(id)arg1;
- (id)makeViewController;
- (id)pageIdentifierForURI:(id)arg1;
- (void)setNavigationBarVisible:(_Bool)arg1 inViewModelBuilder:(id)arg2;
- (id)makeGenreErrorStateViewModel;
- (id)makeBrowseErrorStateViewModel;
- (id)makeGenreOfflineStateViewModel;
- (id)makeBrowseOfflineStateViewModel;
- (id)makeErrorOverlayViewModelWithNavigationBarVisible:(_Bool)arg1;
- (id)makeOfflineOverlayViewModelWithNavigationBarVisible:(_Bool)arg1;
- (id)makeOverlayViewModelWithTitle:(id)arg1 subtitle:(id)arg2 reloadButtonVisible:(_Bool)arg3 navigationBarVisible:(_Bool)arg4 viewModelType:(id)arg5;
- (id)pageIdentifierFromURI:(id)arg1;
- (id)makeLoadingLoggerWithURI:(id)arg1;
- (id)makeViewControllerWithURI:(id)arg1 embedded:(_Bool)arg2;
- (id)makeViewControllerWithURI:(id)arg1;
- (id)makeGenreInitialViewModel;
- (id)makeBrowseInitialViewModel;
- (id)makeViewModelProviderForURI:(id)arg1;
- (id)makeGenreViewModelProviderWithGenre:(id)arg1 pageURI:(id)arg2;
- (id)makeBrowseViewModelProviderWithPageURI:(id)arg1;
- (id)makeGenreViewModelFetcherWithGenre:(id)arg1 pageURI:(id)arg2 cache:(id)arg3;
- (id)makeBrowseViewModelFetcherWithPageURI:(id)arg1;
- (id)makeLogger;
- (id)makeConnectivityMonitor;
- (id)makeViewModelBuilderProvider;
- (id)makeCommandHandlerWithURI:(id)arg1 viewModelProvider:(id)arg2;
- (id)makeShareDragDelegateFactory;
- (id)makeImageLoaderFactory;
- (id)makeComponentLayoutManager;
- (id)makeComponentRegistry;
@property(readonly, nonatomic) SPTPersistentCache *browseRootPersistentCache; // @synthesize browseRootPersistentCache=_browseRootPersistentCache;
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

