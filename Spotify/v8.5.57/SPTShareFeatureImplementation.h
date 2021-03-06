//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareContainerViewControllerProtocol-Protocol.h"
#import "SPTShareFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTDataLoaderFactory, SPTShareDestinationUtility, SPTShareFeatureProperties, SPTShareLogger, SPTSharePlaylistHelper, SPTSharePresenter, SPTShareTrackHelper, SPTShareTransition, SPTSharingSDK;
@protocol SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTEventSenderService, SPTFeatureFlaggingService, SPTNetworkService, SPTPlayer, SPTPlayerFeature, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTShareDeeplinkHandler, SPTShareEntityDataFactory, SPTShareEventSenderLogger, SPTShareVideoDataProviderRegistry, _TtP21SocialOnDemandFeature24SPTSocialOnDemandService_;

@interface SPTShareFeatureImplementation : NSObject <SPTShareContainerViewControllerProtocol, SPTShareFeature>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNetworkService> _networkService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTFeatureFlaggingService> _featureFlagSignalService;
    id <SPTCoreService> _coreService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTEventSenderService> _eventSenderService;
    id <_TtP21SocialOnDemandFeature24SPTSocialOnDemandService_> _socialOnDemandService;
    SPTSharePlaylistHelper *_sharePlaylistHelper;
    SPTShareTrackHelper *_shareTrackHelper;
    NSString *_logContext;
    id <SPTPlayer> _player;
    SPTShareTransition *_shareTransition;
    SPTDataLoaderFactory *_dataloaderFactory;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    id <SPTShareEntityDataFactory> _shareEntityDataFactory;
    SPTSharePresenter *_sharePresenter;
    SPTShareDestinationUtility *_shareDestinationUtility;
    SPTShareLogger *_shareLogger;
    id <SPTShareEventSenderLogger> _shareEventSenderLogger;
    SPTShareFeatureProperties *_featureProperties;
    SPTSharingSDK *_sharingSDK;
    id <SPTShareVideoDataProviderRegistry> _videoDataProviderRegistry;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTShareVideoDataProviderRegistry> videoDataProviderRegistry; // @synthesize videoDataProviderRegistry=_videoDataProviderRegistry;
@property(retain, nonatomic) SPTSharingSDK *sharingSDK; // @synthesize sharingSDK=_sharingSDK;
@property(retain, nonatomic) SPTShareFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) id <SPTShareEventSenderLogger> shareEventSenderLogger; // @synthesize shareEventSenderLogger=_shareEventSenderLogger;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(retain, nonatomic) SPTShareDestinationUtility *shareDestinationUtility; // @synthesize shareDestinationUtility=_shareDestinationUtility;
@property(retain, nonatomic) SPTSharePresenter *sharePresenter; // @synthesize sharePresenter=_sharePresenter;
@property(retain, nonatomic) id <SPTShareEntityDataFactory> shareEntityDataFactory; // @synthesize shareEntityDataFactory=_shareEntityDataFactory;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTDataLoaderFactory *dataloaderFactory; // @synthesize dataloaderFactory=_dataloaderFactory;
@property(retain, nonatomic) SPTShareTransition *shareTransition; // @synthesize shareTransition=_shareTransition;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(retain, nonatomic) SPTShareTrackHelper *shareTrackHelper; // @synthesize shareTrackHelper=_shareTrackHelper;
@property(retain, nonatomic) SPTSharePlaylistHelper *sharePlaylistHelper; // @synthesize sharePlaylistHelper=_sharePlaylistHelper;
@property(nonatomic) __weak id <_TtP21SocialOnDemandFeature24SPTSocialOnDemandService_> socialOnDemandService; // @synthesize socialOnDemandService=_socialOnDemandService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlagSignalService; // @synthesize featureFlagSignalService=_featureFlagSignalService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideShareDemoViewControllerWithURI:(id)arg1 context:(id)arg2;
- (id)provideShareHandlerFactory;
- (id)retrieveTopLevelNavigationPageController;
- (id)retrieveModallyPresentedPageController;
- (id)visiblePageController;
- (void)presentShareViewController:(id)arg1;
- (id)provideShareDragDelegateFactory;
- (id)makeSharePresenterWithShareViewController:(id)arg1 contextViewController:(id)arg2;
- (id)makeShareViewControllerWithShareData:(id)arg1 destinations:(id)arg2;
- (id)provideContainedViewControllerWithShareData:(id)arg1 shareDestinations:(id)arg2 shareContainerViewController:(id)arg3;
- (id)provideShareViewControllerForShareEntityData:(id)arg1 withShareDestinations:(id)arg2;
- (id)provideShareViewControllerForShareEntityData:(id)arg1;
- (id)provideShareDestinationsForEntityURI:(id)arg1;
- (void)performShareToDestination:(id)arg1 withShareEntityData:(id)arg2 contextViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)provideShareEntityDataFactory;
- (id)provideShareVideoDataProviderRegistry;
- (void)registerWithContextMenu;
- (void)registerDemoViewController;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

