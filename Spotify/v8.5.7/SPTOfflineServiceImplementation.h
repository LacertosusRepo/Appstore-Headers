//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTCosmosDataLoaderService;

@interface SPTOfflineServiceImplementation : NSObject <SPTOfflineService>
{
    id <CosmosFeature> _cosmos;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <CosmosFeature> cosmos; // @synthesize cosmos=_cosmos;
- (void).cxx_destruct;
- (id)provideOfflineSyncModel;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

