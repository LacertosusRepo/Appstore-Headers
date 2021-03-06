//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOnDemandTrialTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTOnDemandTrialTestManagerImplementation : NSObject <SPTOnDemandTrialTestManager>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _onDemandTrialFlagSignal;
    id <SPTFeatureFlagSignal> _onDemandUserPolicySignal;
    long long _onDemandTrialFlagState;
    long long _onDemandUserPolicyState;
}

@property(nonatomic) long long onDemandUserPolicyState; // @synthesize onDemandUserPolicyState=_onDemandUserPolicyState;
@property(nonatomic) long long onDemandTrialFlagState; // @synthesize onDemandTrialFlagState=_onDemandTrialFlagState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> onDemandUserPolicySignal; // @synthesize onDemandUserPolicySignal=_onDemandUserPolicySignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> onDemandTrialFlagSignal; // @synthesize onDemandTrialFlagSignal=_onDemandTrialFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (_Bool)isInTrial;
- (_Bool)isFeatureEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupUserPolicySignal;
- (void)setupCombinedABBAFlagSignal;
- (id)setupABBAFlagSignal;
- (id)setupOldABBAFlagSignal;
- (void)setupSignals;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

