//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTNetworkConnectivityController, SPTPartnerIntegrationRegistry;

@interface SPTPartnerIntegrationStateLoader : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoader *_dataLoader;
    id <SPTPartnerIntegrationRegistry> _integrationRegistry;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
}

@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) id <SPTPartnerIntegrationRegistry> integrationRegistry; // @synthesize integrationRegistry=_integrationRegistry;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (_Bool)isOffline;
- (void)handleIntegrationsInCategoryResponse:(id)arg1 withResponseJSON:(id)arg2;
- (void)handleCategoriesResponse:(id)arg1 withResponseJSON:(id)arg2;
- (void)notifyErrorHandlerForResponse:(id)arg1 withError:(id)arg2;
- (id)filterSupportedIntegrationsFromIntegrationStates:(id)arg1;
- (id)categoryFromDictionary:(id)arg1;
- (void)fetchIntegrationsForCategory:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchIntegrationsWithSuccessHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)requestForCategoryIdentifier:(id)arg1;
- (id)initWithDataLoader:(id)arg1 integrationRegistry:(id)arg2 networkConnectivityController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

