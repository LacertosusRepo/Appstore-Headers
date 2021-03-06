//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierRecommendationsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol EXP_SPTHubFrameworkService, SPTFreeTierRecommendationsPlaylistViewProvider, SPTGLUEService, SPTNetworkService, SPTOnDemandService, SPTSessionService;

@interface SPTFreeTierRecommendationsServiceImplementation : NSObject <SPTFreeTierRecommendationsService>
{
    id <EXP_SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTSessionService> _clientSessionService;
    id <SPTNetworkService> _networkService;
    id <SPTFreeTierRecommendationsPlaylistViewProvider> _playlistProvider;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFreeTierRecommendationsPlaylistViewProvider> playlistProvider; // @synthesize playlistProvider=_playlistProvider;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <EXP_SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
- (void).cxx_destruct;
- (id)provideRecommendedTracksDataLoader;
- (id)recommenedPlaylistViewProvider;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

