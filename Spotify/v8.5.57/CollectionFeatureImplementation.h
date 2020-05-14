//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CollectionFeature-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol FollowFeature, SPContextMenuFeature, SPTCollectionPlatformService, SPTContainerService, SPTCoreService, SPTExplicitContentService, SPTNavigationFeature, SPTNetworkService, SPTPageLoaderViewService, SPTPageRegistrationToken, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTShelfService, SPTUBIService, SPTUIPresentationService, _TtP22AgeVerificationFeature25SPTAgeVerificationService_;

@interface CollectionFeatureImplementation : NSObject <SPTService, CollectionFeature>
{
    id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> _ageVerificationService;
    id <SPTSessionService> _clientSessionService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTSettingsFeature> _settingsFeature;
    id <FollowFeature> _followFeature;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTShelfService> _shelfService;
    id <SPTUBIService> _ubiService;
    id <SPTPageRegistrationToken> _collectionUnionArtistPageRegisterationToken;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPageRegistrationToken> collectionUnionArtistPageRegisterationToken; // @synthesize collectionUnionArtistPageRegisterationToken=_collectionUnionArtistPageRegisterationToken;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> ageVerificationService; // @synthesize ageVerificationService=_ageVerificationService;
- (void).cxx_destruct;
- (id)provideCollectionArtistViewController:(id)arg1 context:(id)arg2 model:(id)arg3;
- (id)provideCollectionArtistPage:(id)arg1 context:(id)arg2;
- (id)provideCollectionArtistModelForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)playerForViewURI:(id)arg1 featureIdentifier:(id)arg2 referrerIdentifier:(id)arg3;
- (void)unregisterCollectionArtistPage;
- (void)unload;
- (void)registerCollectionArtistPage;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

