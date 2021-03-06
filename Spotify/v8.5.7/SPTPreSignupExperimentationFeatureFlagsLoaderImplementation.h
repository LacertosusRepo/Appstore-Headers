//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTPreSignupExperimentationFeatureFlagsLoader-Protocol.h"

@class NSString, SPTDataLoader, SPTPreSignupExperimentationCacheManager, SPTPreSignupExperimentationContext, SPTPreSignupExperimentationLogger;
@protocol SPTPreSignupExperimentationFeatureFlagsLoaderDelegate;

@interface SPTPreSignupExperimentationFeatureFlagsLoaderImplementation : NSObject <SPTDataLoaderDelegate, SPTPreSignupExperimentationFeatureFlagsLoader>
{
    id <SPTPreSignupExperimentationFeatureFlagsLoaderDelegate> delegate;
    SPTDataLoader *_dataLoader;
    SPTPreSignupExperimentationCacheManager *_cacheManager;
    SPTPreSignupExperimentationContext *_context;
    SPTPreSignupExperimentationLogger *_logger;
}

@property(readonly, nonatomic) SPTPreSignupExperimentationLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTPreSignupExperimentationContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) SPTPreSignupExperimentationCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTPreSignupExperimentationFeatureFlagsLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)reportSuccessLoadingFlags:(id)arg1 fromCache:(_Bool)arg2;
- (void)reportFailureLoadingFlags;
- (void)reportUsingCachedData;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)provideFeatureFlags;
- (void)fetchFeatureFlags;
- (void)loadFeatureFlags;
- (id)initWithDataLoader:(id)arg1 cacheManager:(id)arg2 context:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

