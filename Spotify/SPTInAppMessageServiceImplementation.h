//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTInAppMessageFeatureFlagChecksObserver.h"
#import "SPTInAppMessageService.h"

@class NSString, SPCore, SPTAllocationContext, SPTInAppMessageActionFactory, SPTInAppMessageBannerMessageController, SPTInAppMessageBannerMessagePriorityDecider, SPTInAppMessageFeatureFlagChecks, SPTInAppMessageSettingsPageBuilder, SPTInAppMessageTriggerConfigurationsController, SPTInAppMessageTriggerEngine, SPTInAppMessageTriggerListController, SPTInAppMessageTriggerMessageController, SPTInAppMessageTriggerMessagePriorityDecider;

@interface SPTInAppMessageServiceImplementation : NSObject <SPTInAppMessageFeatureFlagChecksObserver, SPTInAppMessageService>
{
    _Bool _loadedControllers;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTSettingsFeature> _settingsFeature;
    id <SlateFeature> _slateFeature;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTInstrumentationService> _instrumentationService;
    id <SPTExternalIntegrationDriverDistractionService> _driverDistractionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTBannerFeature> _bannerFeature;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTAccountService> _accountService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTPlayerFeature> _playerFeature;
    SPTInAppMessageTriggerConfigurationsController *_triggerConfigurationsController;
    SPTInAppMessageTriggerListController *_triggerListController;
    SPTInAppMessageTriggerEngine *_triggerEngine;
    SPTInAppMessageTriggerMessagePriorityDecider *_triggerMessagePriorityDecider;
    SPTInAppMessageBannerMessagePriorityDecider *_bannerMessagePriorityDecider;
    SPTInAppMessageTriggerMessageController *_triggerMessageController;
    SPTInAppMessageBannerMessageController *_bannerMessageController;
    id <SPTLocalSettings> _localSettings;
    SPTInAppMessageFeatureFlagChecks *_featureFlagChecker;
    SPCore *_core;
    SPTInAppMessageSettingsPageBuilder *_settingsPageBuilder;
    SPTInAppMessageActionFactory *_actionFactory;
    id <SPTFeatureFlagSignal> _freeTierFeatureFlagSignal;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierFeatureFlagSignal; // @synthesize freeTierFeatureFlagSignal=_freeTierFeatureFlagSignal;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) SPTInAppMessageSettingsPageBuilder *settingsPageBuilder; // @synthesize settingsPageBuilder=_settingsPageBuilder;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(nonatomic) _Bool loadedControllers; // @synthesize loadedControllers=_loadedControllers;
@property(retain, nonatomic) SPTInAppMessageFeatureFlagChecks *featureFlagChecker; // @synthesize featureFlagChecker=_featureFlagChecker;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTInAppMessageBannerMessageController *bannerMessageController; // @synthesize bannerMessageController=_bannerMessageController;
@property(retain, nonatomic) SPTInAppMessageTriggerMessageController *triggerMessageController; // @synthesize triggerMessageController=_triggerMessageController;
@property(retain, nonatomic) SPTInAppMessageBannerMessagePriorityDecider *bannerMessagePriorityDecider; // @synthesize bannerMessagePriorityDecider=_bannerMessagePriorityDecider;
@property(retain, nonatomic) SPTInAppMessageTriggerMessagePriorityDecider *triggerMessagePriorityDecider; // @synthesize triggerMessagePriorityDecider=_triggerMessagePriorityDecider;
@property(retain, nonatomic) SPTInAppMessageTriggerEngine *triggerEngine; // @synthesize triggerEngine=_triggerEngine;
@property(retain, nonatomic) SPTInAppMessageTriggerListController *triggerListController; // @synthesize triggerListController=_triggerListController;
@property(retain, nonatomic) SPTInAppMessageTriggerConfigurationsController *triggerConfigurationsController; // @synthesize triggerConfigurationsController=_triggerConfigurationsController;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTAccountService> accountService; // @synthesize accountService=_accountService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerFeature; // @synthesize bannerFeature=_bannerFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTExternalIntegrationDriverDistractionService> driverDistractionService; // @synthesize driverDistractionService=_driverDistractionService;
@property(nonatomic) __weak id <SPTInstrumentationService> instrumentationService; // @synthesize instrumentationService=_instrumentationService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SlateFeature> slateFeature; // @synthesize slateFeature=_slateFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)inAppMessageFeatureFlagsDidChange:(id)arg1 forFlagSignal:(id)arg2;
- (id)provideFeatureFlagChecker;
- (id)createActionFactory;
- (id)createTriggerMessageController;
- (id)createBannerMessageController;
- (id)createBannerMessagePriorityDecider;
- (id)createTriggerMessagePriorityDecider;
- (id)createTriggerEngine;
- (id)createTriggerListController;
- (id)createTriggerConfigurationsController;
- (id)createServiceLogger;
- (void)loadSettingsPage;
- (void)connectDelegates;
- (void)unloadControllers;
- (void)loadControllers;
- (void)unregisterTriggerHTTPHost;
- (void)registerTriggerHTTPHost;
- (void)removeNFTTransitionKey;
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

