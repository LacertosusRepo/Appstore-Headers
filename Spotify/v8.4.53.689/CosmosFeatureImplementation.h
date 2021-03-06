//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CosmosFeature.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface CosmosFeatureImplementation : NSObject <SPTService, CosmosFeature>
{
    id <SPTSessionService> _clientSessionService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideResolverWithParameters:(id)arg1;
- (id)provideResolverWithViewName:(id)arg1 viewSession:(id)arg2 viewVersion:(id)arg3;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

