//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteVolumeMasterDelegate-Protocol.h"
#import "SPTVolumeRemoteCoordinator-Protocol.h"
#import "SPTVolumeSynchronizationManagerObserver-Protocol.h"

@class NSString, SPTVolumeBuffer, SPTVolumeDebugInstrumentation, SPTVolumeOutputRouteManager, SPTVolumeRemoteControllerRouter;
@protocol SPTVolumeRemoteCoordinatorDelegate, SPTVolumeSynchronizationManager, SPTVolumeSystemAPI;

@interface SPTVolumeRemoteCoordinatorImplementation : NSObject <SPTRemoteVolumeMasterDelegate, SPTVolumeSynchronizationManagerObserver, SPTVolumeRemoteCoordinator>
{
    _Bool _hasActiveConnection;
    id <SPTVolumeRemoteCoordinatorDelegate> delegate;
    id <SPTVolumeSystemAPI> _systemVolumeManager;
    SPTVolumeRemoteControllerRouter *_remoteVolumeManager;
    SPTVolumeBuffer *_remoteBuffer;
    SPTVolumeOutputRouteManager *_outputRoutesManager;
    id <SPTVolumeSynchronizationManager> _volumeSynchronizationManager;
    SPTVolumeDebugInstrumentation *_debugLogger;
}

@property(nonatomic) _Bool hasActiveConnection; // @synthesize hasActiveConnection=_hasActiveConnection;
@property(readonly, nonatomic) SPTVolumeDebugInstrumentation *debugLogger; // @synthesize debugLogger=_debugLogger;
@property(readonly, nonatomic) id <SPTVolumeSynchronizationManager> volumeSynchronizationManager; // @synthesize volumeSynchronizationManager=_volumeSynchronizationManager;
@property(readonly, nonatomic) SPTVolumeOutputRouteManager *outputRoutesManager; // @synthesize outputRoutesManager=_outputRoutesManager;
@property(readonly, nonatomic) SPTVolumeBuffer *remoteBuffer; // @synthesize remoteBuffer=_remoteBuffer;
@property(readonly, nonatomic) SPTVolumeRemoteControllerRouter *remoteVolumeManager; // @synthesize remoteVolumeManager=_remoteVolumeManager;
@property(readonly, nonatomic) id <SPTVolumeSystemAPI> systemVolumeManager; // @synthesize systemVolumeManager=_systemVolumeManager;
@property(nonatomic) __weak id <SPTVolumeRemoteCoordinatorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)hasActiveRemoteVolumeController;
- (_Bool)shouldResetSystemVolume;
- (void)stopRemoteVolumeSynchronization;
- (void)startSynchronizingWithRemoteVolume;
- (void)shouldSyncRemoteVolumeChanged:(_Bool)arg1;
- (void)activeVolumeControllerRemoteVolumeDidChange:(double)arg1;
- (_Bool)isSystemVolumeChangeCausedByOutputRouteChange:(double)arg1;
@property(readonly, nonatomic) double volumeStep;
- (void)remoteVolumeCommandSent;
- (long long)sendRemoteVolumeSetCommand:(double)arg1;
- (void)dealloc;
- (void)setupObserving;
- (id)initWithSystemVolumeManager:(id)arg1 remoteVolumeManager:(id)arg2 remoteBuffer:(id)arg3 outputRoutesManager:(id)arg4 volumeSynchronizationManager:(id)arg5 debugLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

