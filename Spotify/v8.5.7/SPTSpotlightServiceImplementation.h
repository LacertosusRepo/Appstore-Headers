//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSpotlightService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSpotlightIndexImplementation;
@protocol SPTAbbaService, SPTCollectionPlatformService, SPTNetworkService, SPTPlaylistPlatformService, SPTSettingsFeature, SPTSpotlightIndexGatekeeper, SPTUserActivityService;

@interface SPTSpotlightServiceImplementation : NSObject <SPTSpotlightService>
{
    id <SPTUserActivityService> _userActivityService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNetworkService> _networkService;
    id <SPTAbbaService> _abbaService;
    id <SPTSettingsFeature> _settingsService;
    SPTSpotlightIndexImplementation *_index;
    id <SPTSpotlightIndexGatekeeper> _gatekeeper;
}

+ (_Bool)isSpotlightIndexingSupportedByOS;
+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTSpotlightIndexGatekeeper> gatekeeper; // @synthesize gatekeeper=_gatekeeper;
@property(retain, nonatomic) SPTSpotlightIndexImplementation *index; // @synthesize index=_index;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTUserActivityService> userActivityService; // @synthesize userActivityService=_userActivityService;
- (void).cxx_destruct;
- (void)registerSettings;
- (void)registerUpdateIndexSetting;
- (void)registerDropIndexSetting;
- (id)provideSpotlightIndex;
- (id)provideItemsProviders;
- (id)createItemsImageLoader;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
