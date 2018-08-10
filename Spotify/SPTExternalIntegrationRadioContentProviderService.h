//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationContentProvider.h"
#import "SPTService.h"

@class NSMutableArray, NSString, SPTAllocationContext, SPTDataLoaderFactory, SPTExternalIntegrationRadioContentFactory, SPTPersistentCache;

@interface SPTExternalIntegrationRadioContentProviderService : NSObject <SPTService, SPTExternalIntegrationContentProvider>
{
    SPTPersistentCache *_persistentCache;
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTNetworkService> _networkService;
    id <RadioFeature> _radioFeature;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTRadioTestManager> _radioTestManager;
    NSMutableArray *_activeRequests;
    SPTExternalIntegrationRadioContentFactory *_contentFactory;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) SPTExternalIntegrationRadioContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) NSMutableArray *activeRequests; // @synthesize activeRequests=_activeRequests;
@property(readonly, nonatomic) id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) __weak id <RadioFeature> radioFeature; // @synthesize radioFeature=_radioFeature;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
- (void).cxx_destruct;
- (id)persistentCacheOptions;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForContentWithURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
