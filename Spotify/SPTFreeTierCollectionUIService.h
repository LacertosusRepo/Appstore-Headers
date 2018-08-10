//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

@interface SPTFreeTierCollectionUIService : SPTUIPageService
{
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTSessionService> _clientSessionService;
    id <SPTFreeTierCreatePlaylistService> _createPlaylistService;
    id <CollectionFeature> _collectionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerUIService> _containerUIService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTCoreService> _coreService;
    id <SPTFreeTierCollectionService> _freeTierCollectionService;
    id <SPTFreeTierEducationService> _freeTierEducationService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTOfflineService> _offlineService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTPlayerFeature> _playerService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTPodcastFeature> _podcastService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTFreeTierPreCurationService> _preCurationService;
    id <SPTFreeTierCollectionPrivateEntityPageRegistry> _entityPageRegistry;
    id <SPTFreeTierCollectionPrivateEntityPageRegistry> _musicEntityPageRegistry;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFreeTierCollectionPrivateEntityPageRegistry> musicEntityPageRegistry; // @synthesize musicEntityPageRegistry=_musicEntityPageRegistry;
@property(retain, nonatomic) id <SPTFreeTierCollectionPrivateEntityPageRegistry> entityPageRegistry; // @synthesize entityPageRegistry=_entityPageRegistry;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> preCurationService; // @synthesize preCurationService=_preCurationService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTOfflineService> offlineService; // @synthesize offlineService=_offlineService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierEducationService> freeTierEducationService; // @synthesize freeTierEducationService=_freeTierEducationService;
@property(nonatomic) __weak id <SPTFreeTierCollectionService> freeTierCollectionService; // @synthesize freeTierCollectionService=_freeTierCollectionService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <CollectionFeature> collectionService; // @synthesize collectionService=_collectionService;
@property(nonatomic) __weak id <SPTFreeTierCreatePlaylistService> createPlaylistService; // @synthesize createPlaylistService=_createPlaylistService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
- (void).cxx_destruct;
- (void)registerEntityPages:(id)arg1 podcastsEnabled:(_Bool)arg2 isCompactMode:(_Bool)arg3;
- (id)providePrivateEntityPageRegistry;
- (id)providePrivateMusicEntityPageRegistry;
- (id)provideCollectionTheme;
- (id)provideLoggerWithType:(unsigned long long)arg1;
- (id)provideViewLoggerForURI:(id)arg1;
- (id)provideSongsViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideEntityViewControllerWithTitle:(id)arg1 entityModel:(id)arg2 theme:(id)arg3 styleFactoryBlock:(CDUnknownBlockType)arg4 emptyView:(id)arg5 linkDispatcher:(id)arg6 buttonSectionEnabled:(_Bool)arg7 logContext:(id)arg8 compactMode:(_Bool)arg9;
- (id)providePodcastsViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)providePlaylistsViewControllerForURI:(id)arg1 context:(id)arg2 compactMode:(_Bool)arg3;
- (id)provideYourLibraryViewControllerForURI:(id)arg1 context:(id)arg2 registry:(id)arg3;
- (id)provideYourMusicViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (void)configureMasterFeatureFlag:(id)arg1;
- (_Bool)claimsURI:(id)arg1;
- (void)configureWithServices:(id)arg1;

@end

