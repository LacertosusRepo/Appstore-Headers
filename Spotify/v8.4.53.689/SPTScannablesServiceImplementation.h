//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTScannablesService.h"

@class NSString, SPTAllocationContext, SPTScannablesAuthorizationRequester, SPTScannablesDependencies, SPTScannablesScanViewModelFactory, SPTScannablesSlateFactory, SPTScannablesUserInterfaceFactoryImplementation;

@interface SPTScannablesServiceImplementation : NSObject <SPTScannablesService>
{
    id <SPTNavigationFeature> _navigationService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNetworkService> _networkFeature;
    id <SPTAbbaService> _abbaService;
    id <SlateFeature> _slateFeature;
    id <SPTLocalSettings> _localSettings;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTTooltipService> _tooltipService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTGLUEService> _glueService;
    SPTScannablesUserInterfaceFactoryImplementation *_userInterfaceFactory;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    SPTScannablesScanViewModelFactory *_scanViewModelFactory;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    SPTScannablesDependencies *_scannableDependencies;
    id <SPTScannablesOnboardingPresenter> _onboardingPresenter;
    SPTScannablesSlateFactory *_slateFactory;
    id <SPTScannablesDataSource> _scannablesDataSource;
    id <SPTScannablesRegistry> _scannablesRegistry;
    id <SPTScannablesShortcutItemProvider> _scannablesShortcutItemProvider;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTScannablesShortcutItemProvider> scannablesShortcutItemProvider; // @synthesize scannablesShortcutItemProvider=_scannablesShortcutItemProvider;
@property(retain, nonatomic) id <SPTScannablesRegistry> scannablesRegistry; // @synthesize scannablesRegistry=_scannablesRegistry;
@property(retain, nonatomic) id <SPTScannablesDataSource> scannablesDataSource; // @synthesize scannablesDataSource=_scannablesDataSource;
@property(retain, nonatomic) SPTScannablesSlateFactory *slateFactory; // @synthesize slateFactory=_slateFactory;
@property(retain, nonatomic) id <SPTScannablesOnboardingPresenter> onboardingPresenter; // @synthesize onboardingPresenter=_onboardingPresenter;
@property(retain, nonatomic) SPTScannablesDependencies *scannableDependencies; // @synthesize scannableDependencies=_scannableDependencies;
@property(retain, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(retain, nonatomic) SPTScannablesScanViewModelFactory *scanViewModelFactory; // @synthesize scanViewModelFactory=_scanViewModelFactory;
@property(retain, nonatomic) id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(retain, nonatomic) SPTScannablesUserInterfaceFactoryImplementation *userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTTooltipService> tooltipService; // @synthesize tooltipService=_tooltipService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SlateFeature> slateFeature; // @synthesize slateFeature=_slateFeature;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
- (void)didTapCameraButton;
- (id)provideShortcutItemProvider;
- (id)provideRegistry;
- (id)provideSlateFactory;
- (id)provideOnboardingPresenter;
- (id)provideAuthorizationRequester;
- (id)provideScanViewModelFactory;
- (id)provideScanViewController;
- (id)provideDataSource;
- (id)provideUserInterfaceFactory;
- (id)provideTestManager;
- (void)unload;
- (id)makeScannableBarButtonItem;
- (void)registerBarButtonItem;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

