//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeedbackService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTFeatureFlaggingService, SPTFeedbackManager, SPTFeedbackTestManager, SPTFeedbackViewModel, SPTSessionService;

@interface SPTFeedbackServiceImplementation : NSObject <SPTFeedbackService>
{
    id <CosmosFeature> _cosmosService;
    id <SPTSessionService> _clientSessionService;
    id <SPTFeatureFlaggingService> _featureFlagService;
    id <SPTFeedbackManager> _feedbackManager;
    id <SPTFeedbackViewModel> _feedbackViewModel;
    id <SPTFeedbackTestManager> _feedbackTestManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeedbackTestManager> feedbackTestManager; // @synthesize feedbackTestManager=_feedbackTestManager;
@property(retain, nonatomic) id <SPTFeedbackViewModel> feedbackViewModel; // @synthesize feedbackViewModel=_feedbackViewModel;
@property(retain, nonatomic) id <SPTFeedbackManager> feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlagService; // @synthesize featureFlagService=_featureFlagService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
- (void).cxx_destruct;
- (id)provideFeedbackTestManager;
- (id)provideFeedbackViewModel;
- (id)provideFeedbackManager;
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

