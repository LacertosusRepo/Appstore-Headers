//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeService-Protocol.h"

@class NSString, SPTAllocationContext, SPTVolumeBuffer, SPTVolumeCosmosResolver, SPTVolumeDebugInstrumentation, SPTVolumeLogger, SPTVolumeMobileToMobileCoordinator, SPTVolumeRemotePopupPresenter, SPTVolumeSliderViewFactory, SPTVolumeSystemPopupHideEmitter, SPTVolumeUbiLogger;
@protocol CosmosFeature, GaiaFeature, SPTAbbaService, SPTContainerService, SPTEventSenderService, SPTGaiaConnectAPI, SPTPlayerFeature, SPTUBIService, SPTVolumeAPI, SPTVolumeFlagsManager, SPTVolumeSynchronizationManager, SPTVolumeSystemAPI;

@interface SPTVolumeServiceImplementation : NSObject <SPTVolumeService>
{
    id <SPTContainerService> _containerService;
    id <GaiaFeature> _gaiaService;
    id <CosmosFeature> _cosmosService;
    id <SPTAbbaService> _abbaService;
    id <SPTPlayerFeature> _playerService;
    id <SPTUBIService> _ubiService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTVolumeAPI> _volumeManager;
    SPTVolumeMobileToMobileCoordinator *_mobileToMobileManager;
    SPTVolumeRemotePopupPresenter *_remoteVolumePopupPresenter;
    SPTVolumeCosmosResolver *_resolver;
    id <SPTVolumeFlagsManager> _flagManager;
    id <SPTGaiaConnectAPI> _connectManager;
    id <SPTVolumeSystemAPI> _systemVolumeManager;
    SPTVolumeBuffer *_remoteBuffer;
    SPTVolumeSystemPopupHideEmitter *_systemPopupEmitter;
    SPTVolumeLogger *_logger;
    SPTVolumeUbiLogger *_ubiLogger;
    SPTVolumeDebugInstrumentation *_debugLogger;
    id <SPTVolumeSynchronizationManager> _synchronizationManager;
    SPTVolumeSliderViewFactory *_volumeSliderViewFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTVolumeSliderViewFactory *volumeSliderViewFactory; // @synthesize volumeSliderViewFactory=_volumeSliderViewFactory;
@property(retain, nonatomic) id <SPTVolumeSynchronizationManager> synchronizationManager; // @synthesize synchronizationManager=_synchronizationManager;
@property(retain, nonatomic) SPTVolumeDebugInstrumentation *debugLogger; // @synthesize debugLogger=_debugLogger;
@property(retain, nonatomic) SPTVolumeUbiLogger *ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(retain, nonatomic) SPTVolumeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTVolumeSystemPopupHideEmitter *systemPopupEmitter; // @synthesize systemPopupEmitter=_systemPopupEmitter;
@property(retain, nonatomic) SPTVolumeBuffer *remoteBuffer; // @synthesize remoteBuffer=_remoteBuffer;
@property(retain, nonatomic) id <SPTVolumeSystemAPI> systemVolumeManager; // @synthesize systemVolumeManager=_systemVolumeManager;
@property(retain, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) id <SPTVolumeFlagsManager> flagManager; // @synthesize flagManager=_flagManager;
@property(retain, nonatomic) SPTVolumeCosmosResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) SPTVolumeRemotePopupPresenter *remoteVolumePopupPresenter; // @synthesize remoteVolumePopupPresenter=_remoteVolumePopupPresenter;
@property(retain, nonatomic) SPTVolumeMobileToMobileCoordinator *mobileToMobileManager; // @synthesize mobileToMobileManager=_mobileToMobileManager;
@property(retain, nonatomic) id <SPTVolumeAPI> volumeManager; // @synthesize volumeManager=_volumeManager;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <GaiaFeature> gaiaService; // @synthesize gaiaService=_gaiaService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideVolumeSystemAPI;
- (id)provideVolumeUIFactory;
- (id)provideVolumeAPI;
- (void)setupVolumeSliderView;
- (void)setupRemoteVolumePopupPresenter;
- (id)buildVolumeSynchronizationManager;
- (id)buildRemoteControllerRouter;
- (void)setupMobileToMobileManager;
- (void)setupVolumeManager;
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

