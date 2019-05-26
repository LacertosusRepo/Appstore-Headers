//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBViewModelLoaderFactory-Protocol.h"

@class HUBComponentDefaults, HUBFeatureRegistryImplementation, HUBInitialViewModelRegistry, HUBJSONSchemaRegistryImplementation;
@protocol HUBConnectivityStateResolver, HUBContentOperationFactory, HUBContentReloadPolicy, HUBIconImageResolver;

@interface HUBViewModelLoaderFactoryImplementation : NSObject <HUBViewModelLoaderFactory>
{
    HUBFeatureRegistryImplementation *_featureRegistry;
    HUBJSONSchemaRegistryImplementation *_JSONSchemaRegistry;
    HUBInitialViewModelRegistry *_initialViewModelRegistry;
    HUBComponentDefaults *_componentDefaults;
    id <HUBConnectivityStateResolver> _connectivityStateResolver;
    id <HUBIconImageResolver> _iconImageResolver;
    id <HUBContentOperationFactory> _prependedContentOperationFactory;
    id <HUBContentOperationFactory> _appendedContentOperationFactory;
    id <HUBContentReloadPolicy> _defaultContentReloadPolicy;
}

@property(readonly, nonatomic) id <HUBContentReloadPolicy> defaultContentReloadPolicy; // @synthesize defaultContentReloadPolicy=_defaultContentReloadPolicy;
@property(readonly, nonatomic) id <HUBContentOperationFactory> appendedContentOperationFactory; // @synthesize appendedContentOperationFactory=_appendedContentOperationFactory;
@property(readonly, nonatomic) id <HUBContentOperationFactory> prependedContentOperationFactory; // @synthesize prependedContentOperationFactory=_prependedContentOperationFactory;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) id <HUBConnectivityStateResolver> connectivityStateResolver; // @synthesize connectivityStateResolver=_connectivityStateResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) HUBInitialViewModelRegistry *initialViewModelRegistry; // @synthesize initialViewModelRegistry=_initialViewModelRegistry;
@property(readonly, nonatomic) HUBJSONSchemaRegistryImplementation *JSONSchemaRegistry; // @synthesize JSONSchemaRegistry=_JSONSchemaRegistry;
@property(readonly, nonatomic) HUBFeatureRegistryImplementation *featureRegistry; // @synthesize featureRegistry=_featureRegistry;
- (void).cxx_destruct;
- (id)JSONSchemaForFeatureWithRegistration:(id)arg1;
- (id)createViewModelLoaderForViewURI:(id)arg1;
- (_Bool)canCreateViewModelLoaderForViewURI:(id)arg1;
- (id)createViewModelLoaderForViewURI:(id)arg1 featureRegistration:(id)arg2;
- (id)initWithFeatureRegistry:(id)arg1 JSONSchemaRegistry:(id)arg2 initialViewModelRegistry:(id)arg3 componentDefaults:(id)arg4 connectivityStateResolver:(id)arg5 iconImageResolver:(id)arg6 prependedContentOperationFactory:(id)arg7 appendedContentOperationFactory:(id)arg8 defaultContentReloadPolicy:(id)arg9;

@end

