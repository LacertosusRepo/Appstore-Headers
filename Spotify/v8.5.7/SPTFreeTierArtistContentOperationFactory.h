//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTNetworkConnectivityController;
@protocol EXP_SPTHubContentOperationFactory, SPTExplicitContentAccessManager, SPTFollowModelFactory, SPTOnDemandService, SPTOnDemandTrialService, SPTPlayerFeature, SPTProductState;

@interface SPTFreeTierArtistContentOperationFactory : NSObject
{
    id <EXP_SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTOnDemandTrialService> _onDemandTrialService;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTProductState> _productState;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
}

@property(readonly, nonatomic) __weak id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) __weak SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak id <SPTOnDemandTrialService> onDemandTrialService; // @synthesize onDemandTrialService=_onDemandTrialService;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createArtistReleasesContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createArtistViewContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)initWithHubContentOperationFactory:(id)arg1 playerService:(id)arg2 onDemandService:(id)arg3 onDemandTrialService:(id)arg4 networkConnectivityController:(id)arg5 followModelFactory:(id)arg6 productState:(id)arg7 explicitContentAccessManager:(id)arg8;

@end

