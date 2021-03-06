//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryService-Protocol.h"

@class NSString, SPTAllocationContext, SPTYourLibraryModelImplementation, SPTYourLibraryTestManagerImplementation;
@protocol SPTFeatureFlaggingService, SPTFreeTierService, SPTRemoteConfigurationService, SPTSessionService, _TtP19YourLibraryXFeature22SPTYourLibraryXService_;

@interface SPTYourLibraryServiceImplementation : NSObject <SPTYourLibraryService>
{
    id <SPTFeatureFlaggingService> _featureFlagService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTSessionService> _clientSessionService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <_TtP19YourLibraryXFeature22SPTYourLibraryXService_> _yourLibraryXService;
    SPTYourLibraryTestManagerImplementation *_testManager;
    SPTYourLibraryModelImplementation *_model;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTYourLibraryModelImplementation *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTYourLibraryTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <_TtP19YourLibraryXFeature22SPTYourLibraryXService_> yourLibraryXService; // @synthesize yourLibraryXService=_yourLibraryXService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlagService; // @synthesize featureFlagService=_featureFlagService;
- (void).cxx_destruct;
- (id)provideYourLibraryModel;
- (id)providePageProviderRegistry;
- (id)provideTestManager;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

