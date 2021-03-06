//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOnDemandService-Protocol.h"

@class NSString, SPTAllocationContext, SPTOnDemandSetImplementation, SPTOnDemandSetTestManager, SPTPersistentCache;
@protocol SPTFeatureFlaggingService;

@interface SPTOnDemandServiceImplementation : NSObject <SPTOnDemandService>
{
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    SPTOnDemandSetImplementation *_onDemandSet;
    SPTPersistentCache *_persistentCache;
    SPTOnDemandSetTestManager *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTOnDemandSetTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(retain, nonatomic) SPTOnDemandSetImplementation *onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
- (void).cxx_destruct;
- (id)provideOnDemandCardAccessibilityContentOperation;
- (id)provideOnDemandReloadContentOperation;
- (id)provideOnDemandDecoratorContentOperation;
- (id)provideOnDemandExtractorContentOperation;
- (id)provideOnDemandSet;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

