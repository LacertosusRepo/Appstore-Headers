//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTNetworkConnectivityController;

@interface SPTFreeTierPlaylistOfflineSwitchFactory : NSObject
{
    id <SPTProductState> _productState;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)offlineSwitchCell;
- (id)initWithProductState:(id)arg1 modalPresentationController:(id)arg2 networkConnectivityController:(id)arg3;

@end

