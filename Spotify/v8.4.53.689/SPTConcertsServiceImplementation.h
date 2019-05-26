//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTConcertsService.h"
#import "SPTLegacyFeatureFlagObserver.h"

@class NSString, SPTAllocationContext, SPTConcertsDateFormatter, SPTConcertsLocalDataManager, SPTConcertsTestManager;

@interface SPTConcertsServiceImplementation : NSObject <SPTLegacyFeatureFlagObserver, SPTConcertsService>
{
    _Bool _shareflowIsEnabled;
    _Bool _showTicketViewInWebviewIsEnabled;
    SPTConcertsDateFormatter *_dateFormatterProvider;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTAbbaService> _abbaService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerService> _containerService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTNavigationFeature> _navigationService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTLocalSettings> _localSettings;
    SPTConcertsLocalDataManager *_localDataManager;
    SPTConcertsTestManager *_testManager;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool showTicketViewInWebviewIsEnabled; // @synthesize showTicketViewInWebviewIsEnabled=_showTicketViewInWebviewIsEnabled;
@property(nonatomic) _Bool shareflowIsEnabled; // @synthesize shareflowIsEnabled=_shareflowIsEnabled;
@property(retain, nonatomic) SPTConcertsTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTConcertsLocalDataManager *localDataManager; // @synthesize localDataManager=_localDataManager;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)featureFlag:(id)arg1 enabledStateDidChange:(_Bool)arg2;
- (void)registerAllConcertsForArtistView;
- (id)provideConcertsConcertsViewControllerWithEventEntityModel:(id)arg1;
- (id)provideConcertEntityPageForURL:(id)arg1;
- (id)createEntityResolver;
- (id)provideConcertsLocationSearchVC;
- (id)provideConcertsVCForURI:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
- (void)loadTheme;
- (void)loadPageProvider;
- (void)unloadLocalDataManager;
- (void)loadLocalDataManager;
- (void)unloadTestManager;
- (void)loadTestManager;
- (void)loadLocalSettings;
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
