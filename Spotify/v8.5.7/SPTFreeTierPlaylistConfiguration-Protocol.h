//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEEntityRowStyle;
@protocol SPTFreeTierPlaylistCellProviderDelegate, SPTFreeTierPlaylistCellProviderFactory, SPTFreeTierPlaylistContextMenuPresenter, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistHeaderProvider, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistPlayModel, SPTFreeTierPlaylistPlayViewModel;

@protocol SPTFreeTierPlaylistConfiguration <NSObject>
@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> cellProviderDelegate;
@property(copy, nonatomic) GLUEEntityRowStyle *rowStyle;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistContextMenuPresenter> contextMenuPresenter;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFullbleedHeaderViewModel> fullbleedHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistDefaultHeaderViewModel> defaultHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayModel> playModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistCellProviderFactory> cellProviderFactory;
@property(retain, nonatomic) id <SPTFreeTierPlaylistHeaderProvider> headerProvider;
@property(nonatomic) _Bool showTrackArtwork;
@property(nonatomic) long long headerType;
@end

