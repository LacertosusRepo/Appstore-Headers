//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTShowsFormatService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPContextMenuFeature, SPTCollectionPlatformService, SPTContainerService, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTFreeTierPlaylistService, SPTFreeTierPlaylistUIService, SPTGLUEService, SPTNetworkService, SPTPlayerFeature, SPTPodcastFeature, SPTVideoFeature;

@interface SPTShowsFormatServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTShowsFormatService>
{
    _Bool _handlerRegistered;
    _Bool _betamaxPlayerEnabled;
    _Bool _betamaxCacheEnabled;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTFreeTierPlaylistUIService> _playlistUIService;
    id <SPTFreeTierPlaylistService> _playlistService;
    id <SPTVideoFeature> _videoFeature;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFeatureFlagSignal> _betamaxPlayerSignal;
    id <SPTFeatureFlagSignal> _betamaxCacheSignal;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool betamaxCacheEnabled; // @synthesize betamaxCacheEnabled=_betamaxCacheEnabled;
@property(nonatomic) _Bool betamaxPlayerEnabled; // @synthesize betamaxPlayerEnabled=_betamaxPlayerEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> betamaxCacheSignal; // @synthesize betamaxCacheSignal=_betamaxCacheSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> betamaxPlayerSignal; // @synthesize betamaxPlayerSignal=_betamaxPlayerSignal;
@property(nonatomic, getter=isHandlerRegistered) _Bool handlerRegistered; // @synthesize handlerRegistered=_handlerRegistered;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTVideoFeature> videoFeature; // @synthesize videoFeature=_videoFeature;
@property(nonatomic) __weak id <SPTFreeTierPlaylistService> playlistService; // @synthesize playlistService=_playlistService;
@property(nonatomic) __weak id <SPTFreeTierPlaylistUIService> playlistUIService; // @synthesize playlistUIService=_playlistUIService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)createSignalForAnyFiveSignalsWithAbbaKey:(id)arg1 pageTitle:(id)arg2 itemTitle:(id)arg3 itemDescription:(id)arg4;
- (void)setupBetamaxPlayerSignal;
- (void)registerHandlerForShowsFormat;
- (id)provideContextMenuProvider;
- (void)configureShowsFormatPlaylistViewControllerWithURL:(id)arg1 context:(id)arg2 configurationBuilder:(id)arg3;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

