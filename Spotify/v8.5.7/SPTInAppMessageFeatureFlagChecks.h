//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLocalSettingsObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTLocalSettings;

@interface SPTInAppMessageFeatureFlagChecks : NSObject <SPTLocalSettingsObserver>
{
    _Bool _inAppMessageEnabled;
    _Bool _cardEnabled;
    _Bool _bannerEnabled;
    _Bool _noteEnabled;
    _Bool _playerEventEnabled;
    _Bool _navigationEventEnabled;
    _Bool _clientEventEnabled;
    _Bool _feedbackEnabled;
    id <SPTFeatureFlagSignal> _inAppMessagingFlagSignal;
    id <SPTFeatureFlagSignal> _cardFlagSignal;
    id <SPTFeatureFlagSignal> _bannerFlagSignal;
    id <SPTFeatureFlagSignal> _noteFlagSignal;
    id <SPTFeatureFlagSignal> _playerEventFlagSignal;
    id <SPTFeatureFlagSignal> _navigationEventFlagSignal;
    id <SPTFeatureFlagSignal> _clientEventFlagSignal;
    id <SPTFeatureFlagSignal> _feedbackFlagSignal;
    id <SPTLocalSettings> _localSettings;
    SPTObserverManager *_observerManager;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
}

@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) __weak id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic, getter=isFeedbackEnabled) _Bool feedbackEnabled; // @synthesize feedbackEnabled=_feedbackEnabled;
@property(nonatomic, getter=isClientEventEnabled) _Bool clientEventEnabled; // @synthesize clientEventEnabled=_clientEventEnabled;
@property(nonatomic, getter=isNavigationEventEnabled) _Bool navigationEventEnabled; // @synthesize navigationEventEnabled=_navigationEventEnabled;
@property(nonatomic, getter=isPlayerEventEnabled) _Bool playerEventEnabled; // @synthesize playerEventEnabled=_playerEventEnabled;
@property(nonatomic, getter=isNoteEnabled) _Bool noteEnabled; // @synthesize noteEnabled=_noteEnabled;
@property(nonatomic, getter=isBannerEnabled) _Bool bannerEnabled; // @synthesize bannerEnabled=_bannerEnabled;
@property(nonatomic, getter=isCardEnabled) _Bool cardEnabled; // @synthesize cardEnabled=_cardEnabled;
@property(nonatomic, getter=isInAppMessageEnabled) _Bool inAppMessageEnabled; // @synthesize inAppMessageEnabled=_inAppMessageEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> feedbackFlagSignal; // @synthesize feedbackFlagSignal=_feedbackFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> clientEventFlagSignal; // @synthesize clientEventFlagSignal=_clientEventFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> navigationEventFlagSignal; // @synthesize navigationEventFlagSignal=_navigationEventFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> playerEventFlagSignal; // @synthesize playerEventFlagSignal=_playerEventFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> noteFlagSignal; // @synthesize noteFlagSignal=_noteFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> bannerFlagSignal; // @synthesize bannerFlagSignal=_bannerFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> cardFlagSignal; // @synthesize cardFlagSignal=_cardFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> inAppMessagingFlagSignal; // @synthesize inAppMessagingFlagSignal=_inAppMessagingFlagSignal;
- (void).cxx_destruct;
- (void)localSettingsDidChange:(id)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)featureFlagSignalWithABBAKey:(id)arg1 defaultState:(long long)arg2 abbaEnabledValue:(id)arg3;
- (void)setupInAppMessageABBAFlags;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLocalSettings:(id)arg1 featureFlagFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

