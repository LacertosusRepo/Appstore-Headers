//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTCosmosDataLoaderService, SPTPlaylistPlatformPlaylistSynchroniser, SPTResolver;

@interface SPTPlaylistPlatformServiceImplementation : NSObject
{
    CDUnknownBlockType _timeGetter;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTResolver> _playlistCosmosRouter;
    id <SPTPlaylistPlatformPlaylistSynchroniser> _playlistSynchroniser;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistSynchroniser> playlistSynchroniser; // @synthesize playlistSynchroniser=_playlistSynchroniser;
@property(retain, nonatomic) id <SPTResolver> playlistCosmosRouter; // @synthesize playlistCosmosRouter=_playlistCosmosRouter;
@property(retain, nonatomic) id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(retain, nonatomic) id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(copy, nonatomic) CDUnknownBlockType timeGetter; // @synthesize timeGetter=_timeGetter;
- (void).cxx_destruct;
- (id)provideResolverPlaylist;
- (id)providePlaylistURIResolver;
- (id)providePlaylistSynchroniser;
- (id)providePlaylistPlatformDataLoader;
- (id)providePlaylistModel;
- (void)configureWithServices:(id)arg1;
- (id)init;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

