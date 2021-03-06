//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTGoogleMapsFeatureFlagManager : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _googleMapsFeatureEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _googleMapsFeatureFlagSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> googleMapsFeatureFlagSignal; // @synthesize googleMapsFeatureFlagSignal=_googleMapsFeatureFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic, getter=isGoogleMapsFeatureEnabled) _Bool googleMapsFeatureEnabled; // @synthesize googleMapsFeatureEnabled=_googleMapsFeatureEnabled;
- (void).cxx_destruct;
- (id)featureFlagSignalWithABBAKey:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeFeatureFlagObserver:(id)arg1;
- (void)addFeatureFlagObserver:(id)arg1;
- (void)dealloc;
- (void)setupFeatureFlag;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

