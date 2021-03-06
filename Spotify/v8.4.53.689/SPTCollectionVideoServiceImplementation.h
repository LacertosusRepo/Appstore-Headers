//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"
#import "SPTCollectionVideoService.h"

@class NSString, SPTAllocationContext, SPTCollectionLoggerImplementation;

@interface SPTCollectionVideoServiceImplementation : NSObject <SPTAbbaFeatureFlagsObserver, SPTCollectionVideoService>
{
    id <CollectionFeature> _collectionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTPodcastFeature> _podcastService;
    id <SPTAbbaService> _abbaService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTGLUEService> _glueService;
    SPTCollectionLoggerImplementation *_collectionLogger;
    id <SPTPageRegistrationToken> _pageRegistrationToken;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> pageRegistrationToken; // @synthesize pageRegistrationToken=_pageRegistrationToken;
@property(retain, nonatomic) SPTCollectionLoggerImplementation *collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <CollectionFeature> collectionService; // @synthesize collectionService=_collectionService;
- (void).cxx_destruct;
- (void)featureFlagsDidChange:(id)arg1;
- (void)unregisterCollectionItem;
- (void)registerCollectionItem;
- (void)verifyCollectionItemRegistry;
- (void)unregisterPageSelector;
- (void)registerPageSelector;
- (id)provideCollectionLogger;
- (id)provideCollectionVideoOverViewControllerForURL:(id)arg1 context:(id)arg2;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

