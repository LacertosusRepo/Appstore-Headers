//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTMandatoryPremiumTrialTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTMandatoryPremiumTrialTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTMandatoryPremiumTrialTestManager>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _inTrialSignal;
    long long _isInTrialState;
}

@property(nonatomic) long long isInTrialState; // @synthesize isInTrialState=_isInTrialState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> inTrialSignal; // @synthesize inTrialSignal=_inTrialSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (_Bool)isFeatureEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupInTrialSignal;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
