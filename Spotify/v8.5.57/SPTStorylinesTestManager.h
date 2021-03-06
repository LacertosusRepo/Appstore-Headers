//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagSignal;

@interface SPTStorylinesTestManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _coreEnabled;
    long long _fanAffinityTestConfig;
    id <SPTFeatureFlagSignal> _coreEnabledRolloutSignal;
    id <SPTFeatureFlagSignal> _fanAffinityNoStorylinesSignal;
    id <SPTFeatureFlagSignal> _fanAffinityControlSignal;
    id <SPTFeatureFlagSignal> _fanAffinityNoActionsSignal;
    id <SPTFeatureFlagSignal> _fanAffinityViewArtistSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> fanAffinityViewArtistSignal; // @synthesize fanAffinityViewArtistSignal=_fanAffinityViewArtistSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> fanAffinityNoActionsSignal; // @synthesize fanAffinityNoActionsSignal=_fanAffinityNoActionsSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> fanAffinityControlSignal; // @synthesize fanAffinityControlSignal=_fanAffinityControlSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> fanAffinityNoStorylinesSignal; // @synthesize fanAffinityNoStorylinesSignal=_fanAffinityNoStorylinesSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> coreEnabledRolloutSignal; // @synthesize coreEnabledRolloutSignal=_coreEnabledRolloutSignal;
@property(nonatomic) long long fanAffinityTestConfig; // @synthesize fanAffinityTestConfig=_fanAffinityTestConfig;
@property(nonatomic) _Bool coreEnabled; // @synthesize coreEnabled=_coreEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)createAffinityFlags:(id)arg1;
- (id)createCoreEnabledRolloutSignal:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

