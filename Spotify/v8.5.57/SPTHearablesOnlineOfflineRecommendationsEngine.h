//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHearablesRecommendationEngine-Protocol.h"

@class NSString;
@protocol SPTHearablesRecommendationEngine, SPTNetworkConnectivityController;

@interface SPTHearablesOnlineOfflineRecommendationsEngine : NSObject <SPTHearablesRecommendationEngine>
{
    id <SPTHearablesRecommendationEngine> _onlineRecommendations;
    id <SPTHearablesRecommendationEngine> _offlineRecommendations;
    id <SPTNetworkConnectivityController> _connectivityController;
}

@property(readonly, nonatomic) id <SPTNetworkConnectivityController> connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) id <SPTHearablesRecommendationEngine> offlineRecommendations; // @synthesize offlineRecommendations=_offlineRecommendations;
@property(readonly, nonatomic) id <SPTHearablesRecommendationEngine> onlineRecommendations; // @synthesize onlineRecommendations=_onlineRecommendations;
- (void).cxx_destruct;
- (_Bool)isOffline;
- (void)fetchRecommendationWithSessionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOfflineRecommendation:(id)arg1 onlineRecommendations:(id)arg2 connectivityController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
