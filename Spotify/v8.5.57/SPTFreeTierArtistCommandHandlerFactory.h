//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTEntitySeeAllSongsService, SPTHubCommandHandlerFactory, SPTHubsRendererFactory, SPTPlayerFeature;

@interface SPTFreeTierArtistCommandHandlerFactory : NSObject
{
    id <SPTHubCommandHandlerFactory> _defaultCommandHandlerFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTEntitySeeAllSongsService> _allSongsService;
}

@property(readonly, nonatomic) __weak id <SPTEntitySeeAllSongsService> allSongsService; // @synthesize allSongsService=_allSongsService;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <SPTHubCommandHandlerFactory> defaultCommandHandlerFactory; // @synthesize defaultCommandHandlerFactory=_defaultCommandHandlerFactory;
- (void).cxx_destruct;
- (id)createLoggerForViewURI:(id)arg1;
- (id)createArtistReleasesCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3;
- (id)createArtistViewCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3 explicitContentAccessManager:(id)arg4 ageVerificationProvider:(id)arg5;
- (id)createCommandHandlerForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignalSource:(id)arg3 explicitContentAccessManager:(id)arg4 ageVerificationProvider:(id)arg5;
- (id)initWithDefaultCommandHandlerFactory:(id)arg1 playerService:(id)arg2 hubsRendererFactory:(id)arg3 allSongsService:(id)arg4;

@end

