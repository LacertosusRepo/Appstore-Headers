//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPreSignupExperimentationFeatureFlags-Protocol.h"

@class NSArray, NSString;

@interface SPTPreSignupExperimentationFeatureFlagsImplementation : NSObject <SPTPreSignupExperimentationFeatureFlags>
{
    NSArray *_flags;
}

@property(copy, nonatomic) NSArray *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (long long)stateForFlag:(id)arg1;
- (id)initWithFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

