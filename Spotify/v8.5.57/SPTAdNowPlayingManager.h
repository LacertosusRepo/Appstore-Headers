//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdFocusManagerObserver-Protocol.h"
#import "SPTAdsBaseRegistryObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTVolumeSystemObserver-Protocol.h"

@class AVAudioSession, NSString, SPTAdFeatureFlagChecks, SPTAdFocusManager, SPTPlayerState;
@protocol SPContextMenuFeature, SPTAdsBaseCosmosBridge, SPTAdsBaseRegistry, SPTNowPlayingManager, SPTPlayer, SPTVolumeSystemAPI;

@interface SPTAdNowPlayingManager : NSObject <SPTAdsBaseRegistryObserver, SPTPlayerObserver, SPTAdFocusManagerObserver, SPTVolumeSystemObserver>
{
    _Bool _inAdBreak;
    _Bool _nowPlayingViewHiddenBeforeAdStart;
    float _previousVolume;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTAdsBaseRegistry> _adRegistry;
    id <SPTPlayer> _player;
    SPTAdFeatureFlagChecks *_featureChecker;
    SPTAdFocusManager *_adFocusManager;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTVolumeSystemAPI> _systemVolumeManager;
    AVAudioSession *_audioSession;
    NSString *_previousAudioOutput;
}

@property(nonatomic, getter=isNowPlayingViewHiddenBeforeAdStart) _Bool nowPlayingViewHiddenBeforeAdStart; // @synthesize nowPlayingViewHiddenBeforeAdStart=_nowPlayingViewHiddenBeforeAdStart;
@property(retain, nonatomic) NSString *previousAudioOutput; // @synthesize previousAudioOutput=_previousAudioOutput;
@property(nonatomic) float previousVolume; // @synthesize previousVolume=_previousVolume;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) id <SPTVolumeSystemAPI> systemVolumeManager; // @synthesize systemVolumeManager=_systemVolumeManager;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) SPTAdFocusManager *adFocusManager; // @synthesize adFocusManager=_adFocusManager;
@property(retain, nonatomic) SPTAdFeatureFlagChecks *featureChecker; // @synthesize featureChecker=_featureChecker;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTAdsBaseRegistry> adRegistry; // @synthesize adRegistry=_adRegistry;
@property(retain, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic, getter=isInAdBreak) _Bool inAdBreak; // @synthesize inAdBreak=_inAdBreak;
@property(nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void).cxx_destruct;
- (void)systemVolumeDidUpdate:(double)arg1;
- (void)adFocusManagerDidEnterBackground:(id)arg1;
- (void)adFocusManagerWillEnterForeground:(id)arg1;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)processAdBreakChange:(id)arg1;
- (void)subscribeToAdBreakChanges;
- (void)logEvent:(id)arg1;
- (id)getAudioRoute;
- (void)volumeChanged;
- (void)audioRouteChanged:(id)arg1;
- (void)addAVAudioChangeObservers;
- (void)showNowPlayingView:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPlayingSkippableAd) _Bool playingSkippableAd;
@property(readonly, nonatomic, getter=isPlayingVideoAd) _Bool playingVideoAd;
@property(readonly, nonatomic, getter=isPlayingAd) _Bool playingAd;
@property(readonly, nonatomic) SPTPlayerState *currentPlayerState;
- (void)dealloc;
- (id)initWithCosmosBridge:(id)arg1 adRegistry:(id)arg2 player:(id)arg3 featureChecker:(id)arg4 adFocusManager:(id)arg5 contextMenuFeature:(id)arg6 systemVolumeManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

