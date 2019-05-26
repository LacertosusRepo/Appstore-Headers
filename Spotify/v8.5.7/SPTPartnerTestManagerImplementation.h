//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPartnerTestManager-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLocalSettings;

@interface SPTPartnerTestManagerImplementation : NSObject <SPTPartnerTestManager>
{
    _Bool _partnerFeatureEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _partnerFeatureFlagSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> partnerFeatureFlagSignal; // @synthesize partnerFeatureFlagSignal=_partnerFeatureFlagSignal;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic, getter=isPartnerFeatureEnabled) _Bool partnerFeatureEnabled; // @synthesize partnerFeatureEnabled=_partnerFeatureEnabled;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeFeatureFlagObserver:(id)arg1;
- (void)addFeatureFlagObserver:(id)arg1;
@property(nonatomic, getter=isShowingTriggerBannerEnabled) _Bool showingTriggerBannerEnabled;
- (id)featureFlagSignalWithABBAKey:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3;
- (void)setupFlags;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

