//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseRegistryObserver-Protocol.h"

@class NSString;
@protocol SPTAdNPVModeGeneratorProtocol, SPTAdsBaseRegistry, SPTAdsManager, SPTNowPlayingMode, SPTNowPlayingModesRegistry;

@interface SPTAdNPVModeCreator : NSObject <SPTAdsBaseRegistryObserver>
{
    id <SPTNowPlayingMode> _audioAdMode;
    id <SPTNowPlayingMode> _videoAdMode;
    id <SPTAdsManager> _adManager;
    id <SPTNowPlayingModesRegistry> _npvModeRegistry;
    id <SPTAdsBaseRegistry> _adRegistry;
    id <SPTAdNPVModeGeneratorProtocol> _audioModeGenerator;
    id <SPTAdNPVModeGeneratorProtocol> _videoModeGenerator;
}

@property(retain, nonatomic) id <SPTAdNPVModeGeneratorProtocol> videoModeGenerator; // @synthesize videoModeGenerator=_videoModeGenerator;
@property(retain, nonatomic) id <SPTAdNPVModeGeneratorProtocol> audioModeGenerator; // @synthesize audioModeGenerator=_audioModeGenerator;
@property(retain, nonatomic) id <SPTAdsBaseRegistry> adRegistry; // @synthesize adRegistry=_adRegistry;
@property(nonatomic) __weak id <SPTNowPlayingModesRegistry> npvModeRegistry; // @synthesize npvModeRegistry=_npvModeRegistry;
@property(nonatomic) __weak id <SPTAdsManager> adManager; // @synthesize adManager=_adManager;
@property(readonly, nonatomic) id <SPTNowPlayingMode> videoAdMode; // @synthesize videoAdMode=_videoAdMode;
@property(readonly, nonatomic) id <SPTNowPlayingMode> audioAdMode; // @synthesize audioAdMode=_audioAdMode;
- (void).cxx_destruct;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)dealloc;
- (id)initWithAdManager:(id)arg1 adRegistry:(id)arg2 adNowPlayingManager:(id)arg3 animationView:(id)arg4 feedbackModel:(id)arg5 featureChecker:(id)arg6 modeRegistry:(id)arg7 theme:(id)arg8 linkDispatcher:(id)arg9 playerObserver:(id)arg10 cosmosBridge:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

