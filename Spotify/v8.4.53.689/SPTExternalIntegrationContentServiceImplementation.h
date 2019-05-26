//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationContentService.h"

@class NSSet, NSString, SPTAllocationContext, SPTExternalIntegrationContentControllerImplementation;

@interface SPTExternalIntegrationContentServiceImplementation : NSObject <SPTExternalIntegrationContentService>
{
    SPTExternalIntegrationContentControllerImplementation *_sharedController;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTNetworkService> _networkService;
    id <SPTContainerService> _containerService;
    NSSet *_contentProviderRegistry;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSSet *contentProviderRegistry; // @synthesize contentProviderRegistry=_contentProviderRegistry;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
- (void).cxx_destruct;
- (void)updateControllerRegistry;
- (void)registerContentProvider:(id)arg1;
@property(readonly, nonatomic) SPTExternalIntegrationContentControllerImplementation *sharedController; // @synthesize sharedController=_sharedController;
- (id)provideContentController;
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
