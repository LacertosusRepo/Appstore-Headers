//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLocalSettings;

@interface SPTCarPlayTestManager : NSObject
{
    _Bool _carPlayEnabled;
    _Bool _offlineExperienceEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _carPlayFlagSignal;
    id <SPTFeatureFlagSignal> _offlineExperienceFlagSignal;
    SPTObserverManager *_observers;
}

@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> offlineExperienceFlagSignal; // @synthesize offlineExperienceFlagSignal=_offlineExperienceFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> carPlayFlagSignal; // @synthesize carPlayFlagSignal=_carPlayFlagSignal;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(nonatomic, getter=isOfflineExperienceEnabled) _Bool offlineExperienceEnabled; // @synthesize offlineExperienceEnabled=_offlineExperienceEnabled;
@property(nonatomic, getter=isCarPlayEnabled) _Bool carPlayEnabled; // @synthesize carPlayEnabled=_carPlayEnabled;
- (void).cxx_destruct;
- (id)featureFlagSignalWithABBAKey:(id)arg1 settingsItemTitle:(id)arg2 settingsItemDescription:(id)arg3;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)removeCarPlayFeatureFlagObserver:(id)arg1;
- (void)addCarPlayFeatureFlagObserver:(id)arg1;
- (void)onStop;
- (void)onStart;
- (void)dealloc;
- (void)setupCarPlayFlag;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
