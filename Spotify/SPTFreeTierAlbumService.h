//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

@class SPTFreeTierAlbumHubManager, SPTFreeTierTrackContextAwareURITypeManager;

@interface SPTFreeTierAlbumService : SPTUIPageService
{
    id <SPTCoreService> _coreService;
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTSessionService> _clientSessionService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTEntitySeeAllSongsService> _entitySeeAllSongsService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlayerFeature> _playerService;
    id <SPTNetworkService> _networkService;
    id <SPTAlbumService> _albumService;
    id <SPTPermissionsService> _permissionService;
    id <SPTContextDispatchService> _contextDispatchService;
    id <SPTFeatureFlagSignal> _nftAlbumFeatureEnabledSignal;
    SPTFreeTierAlbumHubManager *_hubManager;
    SPTFreeTierTrackContextAwareURITypeManager *_nptTrackURITypeManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierTrackContextAwareURITypeManager *nptTrackURITypeManager; // @synthesize nptTrackURITypeManager=_nptTrackURITypeManager;
@property(retain, nonatomic) SPTFreeTierAlbumHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> nftAlbumFeatureEnabledSignal; // @synthesize nftAlbumFeatureEnabledSignal=_nftAlbumFeatureEnabledSignal;
@property(nonatomic) __weak id <SPTContextDispatchService> contextDispatchService; // @synthesize contextDispatchService=_contextDispatchService;
@property(nonatomic) __weak id <SPTPermissionsService> permissionService; // @synthesize permissionService=_permissionService;
@property(nonatomic) __weak id <SPTAlbumService> albumService; // @synthesize albumService=_albumService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTEntitySeeAllSongsService> entitySeeAllSongsService; // @synthesize entitySeeAllSongsService=_entitySeeAllSongsService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (void).cxx_destruct;
- (void)configureMasterFeatureFlag:(id)arg1;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end

