//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "InAppPurchaseFeature-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol InAppPurchaseController, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTIAPController, SPTIAPFeatureFlags, SPTLocalSettings, SPTNetworkService, SPTSessionService, SPTSettingsFeature;

@interface InAppPurchaseFeatureImplementation : NSObject <SPTService, InAppPurchaseFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <InAppPurchaseController> _inAppPurchaseController;
    id <SPTIAPController> _iapController;
    id <SPTLocalSettings> _localSettings;
    id <SPTIAPFeatureFlags> _featureFlags;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTIAPFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTIAPController> iapController; // @synthesize iapController=_iapController;
@property(retain, nonatomic) id <InAppPurchaseController> inAppPurchaseController; // @synthesize inAppPurchaseController=_inAppPurchaseController;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)tearDownInAppPurchaseFunctionality;
- (void)setupInAppPurchaseController;
- (id)provideInAppPurchaseController;
- (id)controllerLogger;
- (_Bool)shouldUseNewTransactionStack;
- (_Bool)shouldEnableInAppPurchaseFeature;
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

