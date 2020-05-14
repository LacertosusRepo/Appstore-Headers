//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationDriverDistractionService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTExternalIntegrationDriverDistractionController;

@interface SPTExternalIntegrationDriverDistractionServiceImplementation : NSObject <SPTExternalIntegrationDriverDistractionService>
{
    id <SPTExternalIntegrationDriverDistractionController> _sharedController;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationDriverDistractionController> sharedController; // @synthesize sharedController=_sharedController;
- (id)provideDriverDistractionController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
