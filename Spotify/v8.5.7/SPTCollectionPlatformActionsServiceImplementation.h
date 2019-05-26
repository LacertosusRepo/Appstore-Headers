//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformActionsService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCollectionLoggerImplementation;
@protocol SPContextMenuFeature, SPTCollectionPlatformService, SPTContainerService, SPTCoreService, SPTFreeTierPreCurationService, SPTPlaylistPlatformService, SPTShelfService;

@interface SPTCollectionPlatformActionsServiceImplementation : NSObject <SPTCollectionPlatformActionsService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTFreeTierPreCurationService> _preCurationService;
    id <SPTShelfService> _shelfService;
    id <SPTCoreService> _coreService;
    SPTCollectionLoggerImplementation *_collectionLogger;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCollectionLoggerImplementation *collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> preCurationService; // @synthesize preCurationService=_preCurationService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
- (id)provideCollectionLogger;
- (id)provideAddAllTracksAlbumActionTaskForURL:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 contextURL:(id)arg4;
- (id)provideCompleteAlbumActionTaskForURL:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3;
- (id)provideBanActionTaskForURL:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 contextURL:(id)arg4;
- (id)provideSaveRemoveActionTaskForURL:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 contextURL:(id)arg4;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

