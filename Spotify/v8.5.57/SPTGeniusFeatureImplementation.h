//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGeniusFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTGeniusScrollProvider, SPTGeniusService;
@protocol SPTContainerService, SPTCoreService, SPTLyricsFeature, SPTNetworkService, SPTNowPlayingPlatformService, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTGeniusFeatureImplementation : NSObject <SPTGeniusFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTLyricsFeature> _lyricsFeature;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTGeniusService *_geniusService;
    SPTGeniusScrollProvider *_scrollProvider;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTGeniusScrollProvider *scrollProvider; // @synthesize scrollProvider=_scrollProvider;
@property(retain, nonatomic) SPTGeniusService *geniusService; // @synthesize geniusService=_geniusService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTLyricsFeature> lyricsFeature; // @synthesize lyricsFeature=_lyricsFeature;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)unregisterScrollProvider;
- (void)registerScrollProvider;
- (void)registerFeatureSettingsPage;
- (void)idleStateWasReached;
- (void)initialViewDidAppear;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

