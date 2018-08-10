//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTSearch2ViewControllerDependencies : NSObject
{
    id <SPTNetworkService> _networkService;
    id <SPTSessionService> _sessionService;
    id <SPTGLUEService> _glueService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTContainerService> _containerService;
    id <SPTPodcastFeature> _podcastService;
    id <SPTShelfService> _shelfService;
    id <SPTSearch2FancyRecentsDataSourceProviding> _recentsDataSourceProvider;
    id <SPTOnDemandService> _onDemandService;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) id <SPTSearch2FancyRecentsDataSourceProviding> recentsDataSourceProvider; // @synthesize recentsDataSourceProvider=_recentsDataSourceProvider;
@property(readonly, nonatomic) id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(readonly, nonatomic) id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(readonly, nonatomic) id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(readonly, nonatomic) id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(readonly, nonatomic) id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
- (void).cxx_destruct;
- (id)initWithNetworkService:(id)arg1 sessionService:(id)arg2 glueService:(id)arg3 playlistPlatformService:(id)arg4 hubsRendererFactory:(id)arg5 playerService:(id)arg6 containerService:(id)arg7 podcastService:(id)arg8 shelfService:(id)arg9 recentsDataSourceProvider:(id)arg10 onDemandService:(id)arg11 logCenter:(id)arg12;

@end

