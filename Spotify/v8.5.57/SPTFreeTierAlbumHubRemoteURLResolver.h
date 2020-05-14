//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHubRemoteContentOperationURLResolver-Protocol.h"

@class NSString;
@protocol SPTOnDemandTrialService, SPTProductState;

@interface SPTFreeTierAlbumHubRemoteURLResolver : NSObject <SPTHubRemoteContentOperationURLResolver>
{
    NSString *_albumIdentifier;
    id <SPTProductState> _productState;
    id <SPTOnDemandTrialService> _onDemandTrialService;
}

@property(readonly, nonatomic) __weak id <SPTOnDemandTrialService> onDemandTrialService; // @synthesize onDemandTrialService=_onDemandTrialService;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, copy, nonatomic) NSString *albumIdentifier; // @synthesize albumIdentifier=_albumIdentifier;
- (void).cxx_destruct;
- (_Bool)isOnDemandTrialEnabled;
- (_Bool)isVideoFeatureEnabled;
- (_Bool)isShowsCollectionFeatureEnabled;
- (id)resolveContentURL;
- (id)initWithAlbumIdentifier:(id)arg1 productState:(id)arg2 onDemandTrialService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
