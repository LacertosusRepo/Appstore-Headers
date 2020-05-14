//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTNowPlayingModel, SPTNowPlayingRemoteControlEventControllerManager, SPTPlayerState;
@protocol SPTAdsManager, SPTFormatListPlatformRemoteControlPolicyFactory, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingRemoteControlPolicy, SPTNowPlayingRemoteControlPolicyRegistry, SPTNowPlayingTestManager, SPTPSXTestManager, SPTPlayer;

@interface SPTNowPlayingRemoteControlPolicyResolver : NSObject <SPTPlayerObserver>
{
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    id <SPTNowPlayingRemoteControlPolicyRegistry> _remoteControlPolicyRegistry;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTPSXTestManager> _psxTestManager;
    SPTNowPlayingRemoteControlEventControllerManager *_remoteControlManager;
    id <SPTAdsManager> _adsManager;
    id <SPTFormatListPlatformRemoteControlPolicyFactory> _formatListPlatformRemoteControlPolicyFactory;
    SPTNowPlayingModel *_model;
    id <SPTPlayer> _player;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTPlayerState *_playerState;
}

@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTFormatListPlatformRemoteControlPolicyFactory> formatListPlatformRemoteControlPolicyFactory; // @synthesize formatListPlatformRemoteControlPolicyFactory=_formatListPlatformRemoteControlPolicyFactory;
@property(readonly, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) SPTNowPlayingRemoteControlEventControllerManager *remoteControlManager; // @synthesize remoteControlManager=_remoteControlManager;
@property(readonly, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTNowPlayingRemoteControlPolicyRegistry> remoteControlPolicyRegistry; // @synthesize remoteControlPolicyRegistry=_remoteControlPolicyRegistry;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)resolveRemoteControlPolicy;
- (id)initWithPlayer:(id)arg1 model:(id)arg2 remoteControlManager:(id)arg3 adsManager:(id)arg4 remoteControlPolicyFactory:(id)arg5 testManager:(id)arg6 psxTestManager:(id)arg7 remoteControlPolicyRegistry:(id)arg8 auxiliaryActionsHandler:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
