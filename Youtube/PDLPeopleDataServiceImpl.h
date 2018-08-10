//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDLPeopleDataService.h"
#import "SRLService.h"

@class NSString, PDLCacheService, PDLLookupService, Reachability, SRLRegistryContext;

@interface PDLPeopleDataServiceImpl : NSObject <SRLService, PDLPeopleDataService>
{
    _Bool _isNonGAIAAccount;
    id <PDLPersonFieldFactory> _fieldFactory;
    id <PDLDataService> _autocompleteDataService;
    PDLLookupService *_lookupService;
    PDLCacheService *_cacheService;
    Reachability *_reachability;
    SRLRegistryContext *_registryContext;
    id <GSCAccountsService> _accountsService;
    id <PDLMetricsLoggerFactory> _metricsLoggerFactory;
    id <PDLConfigurationService> _configurationService;
    long long _mostRecentClientID;
    id <PDLExperimentsService> _experimentsService;
}

@property(retain, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(nonatomic) long long mostRecentClientID; // @synthesize mostRecentClientID=_mostRecentClientID;
@property(nonatomic) _Bool isNonGAIAAccount; // @synthesize isNonGAIAAccount=_isNonGAIAAccount;
@property(readonly, nonatomic) id <PDLConfigurationService> configurationService; // @synthesize configurationService=_configurationService;
@property(readonly, nonatomic) id <PDLMetricsLoggerFactory> metricsLoggerFactory; // @synthesize metricsLoggerFactory=_metricsLoggerFactory;
@property(readonly, nonatomic) id <GSCAccountsService> accountsService; // @synthesize accountsService=_accountsService;
@property(readonly, nonatomic) SRLRegistryContext *registryContext; // @synthesize registryContext=_registryContext;
@property(readonly, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) PDLCacheService *cacheService; // @synthesize cacheService=_cacheService;
@property(readonly, nonatomic) PDLLookupService *lookupService; // @synthesize lookupService=_lookupService;
@property(retain, nonatomic) id <PDLDataService> autocompleteDataService; // @synthesize autocompleteDataService=_autocompleteDataService;
@property(readonly, nonatomic) id <PDLPersonFieldFactory> fieldFactory; // @synthesize fieldFactory=_fieldFactory;
- (void).cxx_destruct;
- (void)setTopNCacheUpdateIntervalWithClientID:(long long)arg1;
- (id)autocompleteDataServiceForContext:(id)arg1 clientConfig:(id)arg2;
- (id)prepareForAutocompleteSessionWithClientConfig:(id)arg1 sessionContext:(id)arg2 autocompleteDataService:(id)arg3 bootstrapStarlight:(_Bool)arg4;
- (id)autocompleteSessionForClientConfig:(id)arg1 callback:(CDUnknownBlockType)arg2 sessionContext:(id)arg3 autocompleteDataService:(id)arg4 bootstrapStarlight:(_Bool)arg5;
- (id)autocompleteSessionForClientConfig:(id)arg1 callback:(CDUnknownBlockType)arg2 sessionContext:(id)arg3;
- (id)openCaches:(unsigned long long)arg1 clientID:(long long)arg2;
- (void)closeCaches:(unsigned long long)arg1 openAutomatically:(_Bool)arg2;
- (void)updateDataCache:(long long)arg1 callback:(CDUnknownBlockType)arg2 account:(id)arg3;
- (void)updateDataCache:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (id)personWithID:(id)arg1 options:(id)arg2 clientID:(long long)arg3;
- (void)peopleWithIDs:(id)arg1 options:(id)arg2 clientID:(long long)arg3 callback:(CDUnknownBlockType)arg4;
- (id)beginAutocompleteSession:(long long)arg1 callback:(CDUnknownBlockType)arg2 sessionContext:(id)arg3;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

