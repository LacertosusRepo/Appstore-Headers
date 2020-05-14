//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTHubContentOperationFactory, SPTOnDemandService, SPTProductState;

@interface SPTFreeTierRecommendationsPlaylistContentOperationsFactory : NSObject
{
    id <SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTOnDemandService> _onDemandService;
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) id <SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithHubContentOperationFactory:(id)arg1 onDemandService:(id)arg2 productState:(id)arg3;

@end
