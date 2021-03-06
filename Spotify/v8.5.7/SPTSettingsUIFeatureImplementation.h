//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, RootSettingsViewController, SPTAllocationContext;
@protocol CosmosFeature, GaiaFeature, SPTAbbaFeatureFlags, SPTAbbaService, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTDataSaverService, SPTExplicitContentService, SPTLanguageOnboardingService, SPTLoginService, SPTNavigationFeature, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTSettingsUIFeatureImplementation : NSObject <SPTService>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTLoginService> _loginService;
    id <GaiaFeature> _gaia;
    id <CosmosFeature> _cosmos;
    id <SPTAbbaService> _abba;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTDataSaverService> _dataSaverService;
    id <SPTLanguageOnboardingService> _languageOnboardingService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTURIDispatchService> _URIDispatchService;
    RootSettingsViewController *_settingsViewController;
    id <SPTAbbaFeatureFlags> _featureFlags;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) RootSettingsViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTLanguageOnboardingService> languageOnboardingService; // @synthesize languageOnboardingService=_languageOnboardingService;
@property(nonatomic) __weak id <SPTDataSaverService> dataSaverService; // @synthesize dataSaverService=_dataSaverService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTAbbaService> abba; // @synthesize abba=_abba;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
@property(nonatomic) __weak id <GaiaFeature> gaia; // @synthesize gaia=_gaia;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)createResolverForView:(id)arg1;
- (id)provideSectionViewControllerWithURL:(id)arg1 context:(id)arg2;
- (id)provideSettingsViewController;
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

