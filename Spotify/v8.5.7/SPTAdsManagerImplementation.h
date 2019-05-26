//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsManager-Protocol.h"

@class NSString, SPTAdFeatureFlagChecks, SPTAdFeaturedActionHandler, SPTAdNowPlayingFeedbackModel, SPTAdNowPlayingManager, SPTAdRulesManager, SPTAdsViewModel;
@protocol SPTAdNowPlayingRemoteControlPolicy, SPTAdsBaseCosmosBridge, SPTAdsBaseEntity, SPTAdsBaseGlobalSettingsController, SPTLinkDispatcher, SPTMetaViewController, SPTNowPlayingModesRegistry, SPTNowPlayingNavigationBarModel, SPTPlayer;

@interface SPTAdsManagerImplementation : NSObject <SPTAdsManager>
{
    _Bool _wasStatusBarHidden;
    id <SPTNowPlayingModesRegistry> _nowPlayingModeRegistry;
    id <SPTMetaViewController> _metaViewController;
    SPTAdNowPlayingManager *_adNowPlayingManager;
    SPTAdsViewModel *_adsViewModel;
    id <SPTNowPlayingNavigationBarModel> _nowPlayingNavigationBarModel;
    SPTAdFeaturedActionHandler *_adActionHandler;
    SPTAdRulesManager *_adRulesManager;
    SPTAdFeatureFlagChecks *_adFeatureChecker;
    id <SPTAdsBaseGlobalSettingsController> _adSettingsController;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTNowPlayingModesRegistry> _npvModeRegistry;
    id <SPTPlayer> _player;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTAdNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    SPTAdNowPlayingFeedbackModel *_feedbackModel;
}

@property(retain, nonatomic) SPTAdNowPlayingFeedbackModel *feedbackModel; // @synthesize feedbackModel=_feedbackModel;
@property(retain, nonatomic) id <SPTAdNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTNowPlayingModesRegistry> npvModeRegistry; // @synthesize npvModeRegistry=_npvModeRegistry;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTAdsBaseGlobalSettingsController> adSettingsController; // @synthesize adSettingsController=_adSettingsController;
@property(nonatomic) __weak SPTAdFeatureFlagChecks *adFeatureChecker; // @synthesize adFeatureChecker=_adFeatureChecker;
@property(retain, nonatomic) SPTAdRulesManager *adRulesManager; // @synthesize adRulesManager=_adRulesManager;
@property(retain, nonatomic) SPTAdFeaturedActionHandler *adActionHandler; // @synthesize adActionHandler=_adActionHandler;
@property(nonatomic) __weak id <SPTNowPlayingNavigationBarModel> nowPlayingNavigationBarModel; // @synthesize nowPlayingNavigationBarModel=_nowPlayingNavigationBarModel;
@property(nonatomic) _Bool wasStatusBarHidden; // @synthesize wasStatusBarHidden=_wasStatusBarHidden;
@property(nonatomic) __weak SPTAdsViewModel *adsViewModel; // @synthesize adsViewModel=_adsViewModel;
@property(nonatomic) __weak SPTAdNowPlayingManager *adNowPlayingManager; // @synthesize adNowPlayingManager=_adNowPlayingManager;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(readonly, nonatomic) id <SPTNowPlayingModesRegistry> nowPlayingModeRegistry; // @synthesize nowPlayingModeRegistry=_nowPlayingModeRegistry;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)updateNowPlayingNavigationBar;
- (id)provideRemoteControlPolicy;
- (void)setNowPlayingManager:(id)arg1;
- (void)disableMidrollAdExperience:(_Bool)arg1 playOriginContext:(id)arg2;
- (void)disablePrerollAdExperience:(_Bool)arg1 featureIdentifier:(id)arg2;
- (void)skipCurrentAd;
- (_Bool)handleSkip;
- (void)handlePlayContext:(id)arg1;
- (void)handleAdTap:(id)arg1;
- (double)skipDelayRemaining:(double)arg1;
@property(readonly, nonatomic) id <SPTAdsBaseEntity> activeAdEntity;
@property(readonly, nonatomic) _Bool shouldDisallowPause;
@property(readonly, nonatomic) _Bool shouldEnableSkipControl;
@property(readonly, nonatomic) _Bool shouldShowSkipControl;
@property(readonly, nonatomic, getter=isVideoInProgress) _Bool videoInProgress;
@property(readonly, nonatomic) _Bool isVideoCompanionAd;
@property(readonly, nonatomic) _Bool isNowPlayingViewForcedOpen;
@property(readonly, copy, nonatomic) NSString *actionMessage;
@property(readonly, nonatomic) _Bool isEndOfWatchNow;
@property(readonly, nonatomic, getter=isOptOutAvailable) _Bool optOutAvailable;
@property(readonly, nonatomic, getter=isOptInAvailable) _Bool optInAvailable;
@property(readonly, nonatomic, getter=isBreakInProgress) _Bool breakInProgress;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 metaViewController:(id)arg2 adNowPlayingManager:(id)arg3 adFeaturedActionHandler:(id)arg4 adRulesManager:(id)arg5 adFeatureChecker:(id)arg6 adSettingsController:(id)arg7 linkDispatcher:(id)arg8 adFeedbackModel:(id)arg9 player:(id)arg10 cosmosBridge:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
