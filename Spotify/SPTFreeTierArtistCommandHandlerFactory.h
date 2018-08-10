//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFreeTierArtistCommandHandlerFactory : NSObject
{
    id <EXP_SPTHubCommandHandlerFactory> _defaultCommandHandlerFactory;
    id <SPTPlayerFeature> _playerService;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTEntitySeeAllSongsService> _allSongsService;
}

@property(readonly, nonatomic) __weak id <SPTEntitySeeAllSongsService> allSongsService; // @synthesize allSongsService=_allSongsService;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> defaultCommandHandlerFactory; // @synthesize defaultCommandHandlerFactory=_defaultCommandHandlerFactory;
- (void).cxx_destruct;
- (id)createLoggerForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createArtistReleasesCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3;
- (id)createArtistViewCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3;
- (id)createCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3;
- (id)initWithDefaultCommandHandlerFactory:(id)arg1 playerService:(id)arg2 hubsRendererFactory:(id)arg3 allSongsService:(id)arg4;

@end

