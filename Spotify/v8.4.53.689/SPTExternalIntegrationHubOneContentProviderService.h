//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationContentProvider.h"
#import "SPTService.h"

@class NSCache, NSMutableArray, NSString, SPTAllocationContext, SPTExternalIntegrationHubOneContentFactory;

@interface SPTExternalIntegrationHubOneContentProviderService : NSObject <SPTService, SPTExternalIntegrationContentProvider>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTLegacyHubService> _hubFeature;
    id <SPTHomeFeature> _homeFeature;
    id <RadioFeature> _radioFeature;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    id <SPTHubExternalDataLoaderFactory> _browseDataLoaderFactory;
    id <SPTHubExternalDataLoaderFactory> _radioDataLoaderFactory;
    NSMutableArray *_activeRequests;
    NSCache *_contentCache;
    SPTExternalIntegrationHubOneContentFactory *_contentFactory;
    id <SPTRadioTestManager> _radioTestManager;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(readonly, nonatomic) SPTExternalIntegrationHubOneContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) NSCache *contentCache; // @synthesize contentCache=_contentCache;
@property(readonly, nonatomic) NSMutableArray *activeRequests; // @synthesize activeRequests=_activeRequests;
@property(readonly, nonatomic) id <SPTHubExternalDataLoaderFactory> radioDataLoaderFactory; // @synthesize radioDataLoaderFactory=_radioDataLoaderFactory;
@property(readonly, nonatomic) id <SPTHubExternalDataLoaderFactory> browseDataLoaderFactory; // @synthesize browseDataLoaderFactory=_browseDataLoaderFactory;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <RadioFeature> radioFeature; // @synthesize radioFeature=_radioFeature;
@property(readonly, nonatomic) __weak id <SPTHomeFeature> homeFeature; // @synthesize homeFeature=_homeFeature;
@property(readonly, nonatomic) __weak id <SPTLegacyHubService> hubFeature; // @synthesize hubFeature=_hubFeature;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
@property(readonly, nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)errorForRequestError:(id)arg1;
- (id)requestForURI:(id)arg1;
- (_Bool)shouldFlattenBlocksForURI:(id)arg1;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForContentWithURI:(id)arg1;
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

