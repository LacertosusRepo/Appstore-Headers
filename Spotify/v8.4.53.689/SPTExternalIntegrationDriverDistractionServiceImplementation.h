//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationDriverDistractionService.h"

@class NSString, SPTAllocationContext;

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

