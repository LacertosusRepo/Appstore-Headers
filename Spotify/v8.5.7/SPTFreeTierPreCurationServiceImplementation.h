//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPreCurationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierPreCurationTestManagerImplementation, SPTFreeTierPreCurationTheme;
@protocol SPTCollectionPlatformService, SPTFeatureFlaggingService, SPTFreeTierService, SPTGLUEService;

@interface SPTFreeTierPreCurationServiceImplementation : NSObject <SPTFreeTierPreCurationService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTGLUEService> _glueService;
    SPTFreeTierPreCurationTestManagerImplementation *_testManager;
    SPTFreeTierPreCurationTheme *_theme;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierPreCurationTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTFreeTierPreCurationTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
- (id)provideTheme;
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

