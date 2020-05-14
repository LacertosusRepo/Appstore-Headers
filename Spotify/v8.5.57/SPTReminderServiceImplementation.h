//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTReminderService-Protocol.h"

@class NSString, SPTAllocationContext, SPTReminderTestManager;
@protocol SPContextMenuFeature, SPTFeatureFlaggingService, SPTReminderHandlerService;

@interface SPTReminderServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTReminderService>
{
    id <SPTReminderHandlerService> _handlerService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    SPTReminderTestManager *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTReminderTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTReminderHandlerService> handlerService; // @synthesize handlerService=_handlerService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)registerWithContextMenuService;
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
