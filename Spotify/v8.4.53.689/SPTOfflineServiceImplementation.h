//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTOfflineService.h"

@class NSString, SPTAllocationContext;

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
