//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GSCAccountWipeoutHandler.h"
#import "GSCAuthorizationProvider.h"
#import "SRLConfigurableService.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GSCRPCAuthorizationServiceImpl : NSObject <SRLConfigurableService, GSCAuthorizationProvider, GSCAccountWipeoutHandler>
{
    id <GSCAuthorizationService> _authorizationService;
    NSArray *_authScopes;
    NSMutableDictionary *_fetcherServicePromisesMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

- (void).cxx_destruct;
- (void)removeFetcherServiceForGaiaId:(id)arg1;
- (void)didDeleteAccountWithId:(id)arg1;
- (id)fetcherServiceForGaiaId:(id)arg1;
- (id)initWithContext:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

