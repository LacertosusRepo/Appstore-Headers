//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTFreeTierEntityOfflineViewModel, SPTFreeTierPlaylistAdditionalCallToAction, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistPlayLogger, SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistVISREFHeaderViewModel;

@protocol SPTFreeTierPlaylistHeaderConfiguration <NSObject>
@property(readonly, nonatomic) id <SPTFreeTierPlaylistAdditionalCallToAction> additionalCallToAction;
@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistPlayLogger> playLogger;
@property(readonly, nonatomic) id <SPTFreeTierEntityOfflineViewModel> offlineViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistVISREFHeaderViewModel> visrefHeaderViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistFullbleedHeaderViewModel> fullbleedHeaderViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistDefaultHeaderViewModel> defaultHeaderViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel;
@end
