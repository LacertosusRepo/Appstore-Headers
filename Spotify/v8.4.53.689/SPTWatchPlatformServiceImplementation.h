//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTWatchPlatformService.h"
#import "SPTWatchPlatformTestManagerObserver.h"

@class NSArray, NSDictionary, NSString, SPTAllocationContext, SPTWatchPlatformLogging, SPTWatchPlatformTestManager;

@interface SPTWatchPlatformServiceImplementation : NSObject <SPTWatchPlatformTestManagerObserver, SPTWatchPlatformService>
{
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTPlayerFeature> _playerFeature;
    SPTWatchPlatformLogging *_logger;
    SPTWatchPlatformTestManager *_testManager;
    NSDictionary *_requestHandlers;
    NSArray *_publishers;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
@property(retain, nonatomic) NSDictionary *requestHandlers; // @synthesize requestHandlers=_requestHandlers;
@property(retain, nonatomic) SPTWatchPlatformTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTWatchPlatformLogging *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
- (void).cxx_destruct;
- (id)watchConnectivityManager;
- (void)testManager:(id)arg1 didUpdateWatchIntegrationEnabledState:(_Bool)arg2;
- (void)testManager:(id)arg1 didUpdateWatchAccessoryLoggingEnabledState:(_Bool)arg2;
- (void)disableIntegration;
- (void)enableIntegration;
- (void)disableLogging;
- (void)enableLogging;
- (void)updateEnablement;
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

