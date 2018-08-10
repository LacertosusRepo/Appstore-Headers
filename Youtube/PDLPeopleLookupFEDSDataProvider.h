//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GSCAccount, NSObject<OS_dispatch_queue>, SRLRegistryContext;

@interface PDLPeopleLookupFEDSDataProvider : NSObject
{
    id <PDLClientInfoProvider> _clientInfoProvider;
    id <GSCSideChannelDataManager> _sideChannelDataManager;
    id <GSCDataAccessService> _dataAccessService;
    NSObject<OS_dispatch_queue> *_peopleWithIDsQueue;
    GSCAccount *_account;
    id <PDLMetricsLoggerFactory> _metricsLoggerFactory;
    NSObject<OS_dispatch_queue> *_lookupPeopleQueue;
    id <PeopleApiDataService> _peopleApiDataService;
    id <PDLExperimentsService> _experimentsService;
    SRLRegistryContext *_context;
}

@property(readonly, nonatomic) SRLRegistryContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(readonly, nonatomic) id <PeopleApiDataService> peopleApiDataService; // @synthesize peopleApiDataService=_peopleApiDataService;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lookupPeopleQueue; // @synthesize lookupPeopleQueue=_lookupPeopleQueue;
@property(readonly, nonatomic) id <PDLMetricsLoggerFactory> metricsLoggerFactory; // @synthesize metricsLoggerFactory=_metricsLoggerFactory;
@property(readonly, nonatomic) GSCAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *peopleWithIDsQueue; // @synthesize peopleWithIDsQueue=_peopleWithIDsQueue;
@property(readonly, nonatomic) id <GSCDataAccessService> dataAccessService; // @synthesize dataAccessService=_dataAccessService;
@property(readonly, nonatomic) id <GSCSideChannelDataManager> sideChannelDataManager; // @synthesize sideChannelDataManager=_sideChannelDataManager;
@property(readonly, nonatomic) id <PDLClientInfoProvider> clientInfoProvider; // @synthesize clientInfoProvider=_clientInfoProvider;
- (void).cxx_destruct;
- (_Bool)enableIRPC;
- (void)registerExtension;
- (void)savePerson:(id)arg1 toMap:(id)arg2 fromMap:(id)arg3 clientConfig:(id)arg4;
- (struct NSDictionary *)lookupResultWithIDToPersonMap:(id)arg1 matches:(id)arg2 clientConfig:(id)arg3;
- (int)requestTypeWithPersonType:(long long)arg1;
- (id)serverRequestWithPersonIDs:(id)arg1 type:(long long)arg2 clientConfig:(id)arg3;
- (void)lookupPeopleByKnownIDs:(id)arg1 type:(long long)arg2 clientConfig:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 peopleWithIDsQueue:(id)arg2;

@end
