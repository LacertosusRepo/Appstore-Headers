//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTPodcastFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTPodcastContextAwareURITypeManager, SPTPodcastCosmosDataLoader, SPTPodcastDataLoaderShowEntityService, SPTPodcastEpisodeCellActionHandlerFactory, SPTPodcastEpisodeFactory, SPTPodcastFactory, SPTPodcastFeatureProperties, SPTPodcastPreferences, SPTPodcastRequestFactoryImplementation, SPTPodcastSortingService, SPTPodcastSpeedControlManagerImpl, SPTPodcastTestManagerImplementation;
@protocol CosmosFeature, SPContextMenuFeature, SPTCollectionLogger, SPTCollectionPlatformService, SPTContainerUIService, SPTContextDispatchService, SPTCrashReporterService, SPTEpisodeContextMenuControllerDelegate, SPTExplicitContentService, SPTGLUEService, SPTNavigationFeature, SPTNetworkService, SPTPageRegistrationToken, SPTPerformanceMetricsService, SPTPlayerFeature, SPTPodcastContextMenuProvider, SPTPodcastLogger, SPTPodcastOffliningService, SPTPodcastUIService, SPTRecentlyPlayedService, SPTRemoteConfigurationService, SPTResolver, SPTScannablesService, SPTSessionService, SPTSettingsFeature, SPTShareFeature, SPTSleepTimerService, SPTSnackbarService, SPTUBIUserBehaviourInstrumentation, SPTUIPresentationService, SPTURIDispatchService, _TtP17PodcastDALFeature20SPTPodcastDALService_, _TtP31PodcastCreatorEntityPageFeature45SPTPodcastCreatorEntityPageEntryPointsService_;

@interface SPTPodcastFeatureImplementation : SPTUIPageService <SPTPodcastFeature>
{
    _Bool _podcastEntityContentTypeRegistered;
    id <SPTSessionService> _clientSessionService;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTNetworkService> _networkFeature;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTResolver> _router;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTContextDispatchService> _contextDispatchService;
    id <SPTGLUEService> _glueService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTShareFeature> _shareFeature;
    id <SPTSleepTimerService> _sleepTimerFeature;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTScannablesService> _scannableService;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTPodcastOffliningService> _podcastOffliningService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIUserBehaviourInstrumentation> _ubiService;
    id <_TtP31PodcastCreatorEntityPageFeature45SPTPodcastCreatorEntityPageEntryPointsService_> _podcastCreatorEntityPageEntryPointsService;
    id <_TtP17PodcastDALFeature20SPTPodcastDALService_> _podcastDALService;
    SPTPodcastFeatureProperties *_featureProperties;
    SPTPodcastDataLoaderShowEntityService *_showEntityService;
    id <SPTPodcastContextMenuProvider> _defaultContextMenuProvider;
    SPTPodcastSortingService *_sortingService;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTPodcastLogger> _logger;
    SPTPodcastContextAwareURITypeManager *_podcastURITypeManager;
    id <SPTEpisodeContextMenuControllerDelegate> _contextMenuDelegateObject;
    SPTPodcastTestManagerImplementation *_testManager;
    SPTPodcastSpeedControlManagerImpl *_podcastSpeedControlManager;
    SPTPodcastRequestFactoryImplementation *_podcastRequestFactory;
    SPTPodcastCosmosDataLoader *_podcastCosmosDataLoader;
    SPTPodcastRequestFactoryImplementation *_internalPodcastRequestFactory;
    SPTPodcastCosmosDataLoader *_internalPodcastCosmosDataLoader;
    SPTPodcastFactory *_podcastFactory;
    SPTPodcastEpisodeFactory *_podcastEpisodeFactory;
    SPTPodcastEpisodeCellActionHandlerFactory *_cellActionHandlerFactory;
    id <CosmosFeature> _cosmosService;
    SPTPodcastPreferences *_podcastPreferences;
    id <SPTPageRegistrationToken> _internalPodcastPageRegistration;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> internalPodcastPageRegistration; // @synthesize internalPodcastPageRegistration=_internalPodcastPageRegistration;
@property(retain, nonatomic) SPTPodcastPreferences *podcastPreferences; // @synthesize podcastPreferences=_podcastPreferences;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(retain, nonatomic) SPTPodcastEpisodeCellActionHandlerFactory *cellActionHandlerFactory; // @synthesize cellActionHandlerFactory=_cellActionHandlerFactory;
@property(retain, nonatomic) SPTPodcastEpisodeFactory *podcastEpisodeFactory; // @synthesize podcastEpisodeFactory=_podcastEpisodeFactory;
@property(retain, nonatomic) SPTPodcastFactory *podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(retain, nonatomic) SPTPodcastCosmosDataLoader *internalPodcastCosmosDataLoader; // @synthesize internalPodcastCosmosDataLoader=_internalPodcastCosmosDataLoader;
@property(retain, nonatomic) SPTPodcastRequestFactoryImplementation *internalPodcastRequestFactory; // @synthesize internalPodcastRequestFactory=_internalPodcastRequestFactory;
@property(retain, nonatomic) SPTPodcastCosmosDataLoader *podcastCosmosDataLoader; // @synthesize podcastCosmosDataLoader=_podcastCosmosDataLoader;
@property(retain, nonatomic) SPTPodcastRequestFactoryImplementation *podcastRequestFactory; // @synthesize podcastRequestFactory=_podcastRequestFactory;
@property(retain, nonatomic) SPTPodcastSpeedControlManagerImpl *podcastSpeedControlManager; // @synthesize podcastSpeedControlManager=_podcastSpeedControlManager;
@property(retain, nonatomic) SPTPodcastTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTEpisodeContextMenuControllerDelegate> contextMenuDelegateObject; // @synthesize contextMenuDelegateObject=_contextMenuDelegateObject;
@property(retain, nonatomic) SPTPodcastContextAwareURITypeManager *podcastURITypeManager; // @synthesize podcastURITypeManager=_podcastURITypeManager;
@property(retain, nonatomic) id <SPTPodcastLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(nonatomic) _Bool podcastEntityContentTypeRegistered; // @synthesize podcastEntityContentTypeRegistered=_podcastEntityContentTypeRegistered;
@property(retain, nonatomic) SPTPodcastSortingService *sortingService; // @synthesize sortingService=_sortingService;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> defaultContextMenuProvider; // @synthesize defaultContextMenuProvider=_defaultContextMenuProvider;
@property(retain, nonatomic) SPTPodcastDataLoaderShowEntityService *showEntityService; // @synthesize showEntityService=_showEntityService;
@property(retain, nonatomic) SPTPodcastFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) __weak id <_TtP17PodcastDALFeature20SPTPodcastDALService_> podcastDALService; // @synthesize podcastDALService=_podcastDALService;
@property(nonatomic) __weak id <_TtP31PodcastCreatorEntityPageFeature45SPTPodcastCreatorEntityPageEntryPointsService_> podcastCreatorEntityPageEntryPointsService; // @synthesize podcastCreatorEntityPageEntryPointsService=_podcastCreatorEntityPageEntryPointsService;
@property(nonatomic) __weak id <SPTUBIUserBehaviourInstrumentation> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPodcastOffliningService> podcastOffliningService; // @synthesize podcastOffliningService=_podcastOffliningService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTScannablesService> scannableService; // @synthesize scannableService=_scannableService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTSleepTimerService> sleepTimerFeature; // @synthesize sleepTimerFeature=_sleepTimerFeature;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContextDispatchService> contextDispatchService; // @synthesize contextDispatchService=_contextDispatchService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) id <SPTResolver> router; // @synthesize router=_router;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)providePodcastPlayerWithViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (id)providePodcastLogger;
- (id)providePodcastEpisodeFactory;
- (id)providePodcastFactory;
- (id)providePodcastDataLoader;
- (id)provideInternalPodcastDataLoader;
- (id)provideInternalPodcastRequestFactory;
- (id)providePodcastRequestFactory;
- (id)provideCellActionHandlerFactory;
- (id)provideTestManager;
- (void)addSwitchToSettingsPage:(id)arg1 settingsTitle:(id)arg2 settingsDescription:(id)arg3 settingsKey:(id)arg4;
- (id)registerPageSelector:(SEL)arg1 predicate:(CDUnknownBlockType)arg2;
- (void)updateCrashReporterValues;
- (void)registerPodcastShowPage;
- (void)registerPodcastCollectionEntityContentType;
- (id)provideEpisodeCellConfigurator;
- (id)provideResolverForPodcast;
- (id)providePodcastSpeedControlManager;
- (id)provideShowEntityService;
- (id)provideDefaultContextMenuProvider;
- (id)provideContextMenuDelegateObject;
- (id)provideContextMenuProviderWithLinkDispatcher:(id)arg1;
- (id)providePodcastViewControllerForURL:(id)arg1 context:(id)arg2;
- (id)provideShowContextMenuControllerForLinkDispatcher:(id)arg1;
- (id)provideFeatureProperties;
- (id)provideSortingService;
- (id)provideLocalSettings;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

