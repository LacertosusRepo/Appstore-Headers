//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoCoordinatorService-Protocol.h"

@class NSString, SPTAllocationContext, SPTVideoContextPlayerCoordinator, SPTVideoCoordinatorFeatureFlags;
@protocol CosmosFeature, SPContextMenuFeature, SPTAbbaService, SPTBannerFeature, SPTContainerService, SPTContainerUIService, SPTDebugService, SPTExternalIntegrationDriverDistractionService, SPTPlayer, SPTPlayerFeature, SPTUIPresentationService, SPTURIDispatchService, SPTVideoFeature, SPTVideoPlayer;

@interface SPTVideoCoordinatorServiceImplementation : NSObject <SPTVideoCoordinatorService>
{
    id <SPTAbbaService> _abbaService;
    id <SPTVideoFeature> _videoService;
    id <CosmosFeature> _cosmosService;
    id <SPTBannerFeature> _bannerFeature;
    id <SPTContainerUIService> _containerUIService;
    id <SPTExternalIntegrationDriverDistractionService> _driverDistractionService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTUIPresentationService> _presentationService;
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTPlayerFeature> _playerService;
    id <SPTPlayer> _contextPlayer;
    SPTVideoContextPlayerCoordinator *_coordinator;
    id <SPTVideoPlayer> _player;
    SPTVideoCoordinatorFeatureFlags *_flags;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTVideoCoordinatorFeatureFlags *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) id <SPTVideoPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTVideoContextPlayerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) id <SPTPlayer> contextPlayer; // @synthesize contextPlayer=_contextPlayer;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTExternalIntegrationDriverDistractionService> driverDistractionService; // @synthesize driverDistractionService=_driverDistractionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerFeature; // @synthesize bannerFeature=_bannerFeature;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <SPTVideoFeature> videoService; // @synthesize videoService=_videoService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (void)registerContextMenuAction;
- (void)removeVideoPlaybackEventObserver:(id)arg1;
- (void)addVideoPlaybackEventObserver:(id)arg1;
- (id)providePlayerSource;
- (id)provideSurfaceManager;
- (void)registerPlaybackEventObserverFactoryBlock:(CDUnknownBlockType)arg1;
- (void)registerPlaybackEventObserverFactory:(id)arg1;
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

