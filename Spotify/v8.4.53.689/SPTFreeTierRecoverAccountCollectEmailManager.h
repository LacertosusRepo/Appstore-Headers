//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTFreeTierRecoverAccountTestManagerObserver.h"

@class NSString, SPTDataLoader, SPTFreeTierRecoverAccountCoordinator, SPTFreeTierRecoverAccountTestManager;

@interface SPTFreeTierRecoverAccountCollectEmailManager : NSObject <SPTDataLoaderDelegate, SPTFreeTierRecoverAccountTestManagerObserver>
{
    SPTDataLoader *_dataLoader;
    SPTFreeTierRecoverAccountTestManager *_testManager;
    SPTFreeTierRecoverAccountCoordinator *_coordinator;
}

@property(readonly, nonatomic) SPTFreeTierRecoverAccountCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) SPTFreeTierRecoverAccountTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)recoverAccountTestManagerDidUpdateState:(id)arg1;
- (void)retryRequest;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)showCollectEmailDialogIfNeeded;
- (void)fetchUserEmailSettings;
- (void)presentCollectEmailDialogIfNeeded;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 testManager:(id)arg2 coordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

