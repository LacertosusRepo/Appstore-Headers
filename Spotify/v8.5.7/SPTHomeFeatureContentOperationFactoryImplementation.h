//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeFeatureContentOperationFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTHomeFeatureContentCache;
@protocol CosmosFeature, SPTOfflineModeState;

@interface SPTHomeFeatureContentOperationFactoryImplementation : NSObject <SPTHomeFeatureContentOperationFactory>
{
    id <SPTOfflineModeState> _offlineModeState;
    SPTHomeFeatureContentCache *_homeContentCache;
    id <CosmosFeature> _cosmosFeature;
    SPTDataLoaderFactory *_dataLoaderFactory;
}

@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(readonly, nonatomic) SPTHomeFeatureContentCache *homeContentCache; // @synthesize homeContentCache=_homeContentCache;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
- (void).cxx_destruct;
- (id)createRemoteContentOperationWithSourceIdentifier:(id)arg1 contentURL:(id)arg2;
- (id)createCachedContentOperation;
- (id)initWithOfflineModeState:(id)arg1 homeContentCache:(id)arg2 cosmosFeature:(id)arg3 dataLoaderFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
