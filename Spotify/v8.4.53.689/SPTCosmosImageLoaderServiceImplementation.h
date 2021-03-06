//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCosmosImageLoaderService.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext, SPTSpotifyImageRequestFactory;

@interface SPTCosmosImageLoaderServiceImplementation : NSObject <SPTService, SPTCosmosImageLoaderService>
{
    id <SPTSessionService> _clientSessionService;
    id <CosmosFeature> _cosmosService;
    id <SPTNetworkService> _networkService;
    SPTSpotifyImageRequestFactory *_spotifyImageRequestFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTSpotifyImageRequestFactory *spotifyImageRequestFactory; // @synthesize spotifyImageRequestFactory=_spotifyImageRequestFactory;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)registerCosmosImageRequestFactory;
- (void)registerLegacySpotifyImageRequestFactoryWithProductState:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

