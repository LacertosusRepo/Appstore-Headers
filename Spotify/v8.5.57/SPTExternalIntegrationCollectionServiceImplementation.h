//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationCollectionService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTContainerService, SPTExternalIntegrationCollectionController, SPTExternalIntegrationDebugLogService, SPTExternalIntegrationPlaybackService, SPTPlaylistPlatformService;

@interface SPTExternalIntegrationCollectionServiceImplementation : NSObject <SPTExternalIntegrationCollectionService>
{
    id <SPTExternalIntegrationCollectionController> _sharedController;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTContainerService> _containerService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationCollectionController> sharedController; // @synthesize sharedController=_sharedController;
- (id)provideCollectionController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

