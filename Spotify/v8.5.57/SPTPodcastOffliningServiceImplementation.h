//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastOffliningService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTContainerUIService, SPTFreeTierPlaylistService, SPTNetworkService, SPTPlaylistPlatformService, SPTSessionService, SPTURIDispatchService;

@interface SPTPodcastOffliningServiceImplementation : NSObject <SPTPodcastOffliningService>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTNetworkService> _networkFeature;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTFreeTierPlaylistService> _freetierPlaylistService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTFreeTierPlaylistService> freetierPlaylistService; // @synthesize freetierPlaylistService=_freetierPlaylistService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideOffliningManager;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

