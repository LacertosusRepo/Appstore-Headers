//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol EXP_SPTHubContentOperationFactory, SPTOnDemandService, SPTProductState;

@interface SPTFreeTierRecommendationsPlaylistContentOperationsFactory : NSObject
{
    id <EXP_SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTOnDemandService> _onDemandService;
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithHubContentOperationFactory:(id)arg1 onDemandService:(id)arg2 productState:(id)arg3;

@end

