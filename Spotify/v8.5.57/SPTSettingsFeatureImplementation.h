//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSettingsFeature-Protocol.h"

@class NSMapTable, NSString, SPTAllocationContext, SettingsRegistryImplementation;
@protocol SPTClientSettings, SPTContainerService, SPTCoreService, SPTSessionService, SPTURIDispatchService;

@interface SPTSettingsFeatureImplementation : NSObject <SPTSettingsFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTContainerService> _containerService;
    id <SPTURIDispatchService> _URIDispatchService;
    SettingsRegistryImplementation *_settingsRegistry;
    id <SPTClientSettings> _clientSettings;
    NSMapTable *_featureSettingsPages;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSMapTable *featureSettingsPages; // @synthesize featureSettingsPages=_featureSettingsPages;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) SettingsRegistryImplementation *settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideSettingsStructure;
- (id)provideClientSettings;
- (id)provideSettingsDataSourceForServiceIdentifier:(id)arg1;
- (id)provideFeatureSettingsItemFactoryForServiceIdentifier:(id)arg1;
- (id)provideSettingsRegistry;
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

