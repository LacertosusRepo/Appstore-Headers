//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTApplicationScopeFeatureFlagSignalService-Protocol.h"

@class NSString, SPTAllocationContext, SPTApplicationScopeFeatureFlagSignalFactoryImplementation;

@interface SPTApplicationScopeFeatureFlagSignalServiceImplementation : NSObject <SPTApplicationScopeFeatureFlagSignalService>
{
    SPTApplicationScopeFeatureFlagSignalFactoryImplementation *_signalFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTApplicationScopeFeatureFlagSignalFactoryImplementation *signalFactory; // @synthesize signalFactory=_signalFactory;
- (void).cxx_destruct;
- (id)provideFeatureFlagSignalFactory;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

