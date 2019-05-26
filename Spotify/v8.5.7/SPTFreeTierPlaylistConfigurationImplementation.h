//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistConfiguration-Protocol.h"

@class GLUEEntityRowStyle, NSString, SPTFreeTierPlaylistCellProviderDelegateWrapper;
@protocol SPTFreeTierPlaylistCellProviderDelegate, SPTFreeTierPlaylistCellProviderFactory, SPTFreeTierPlaylistContextMenuPresenter, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistFollowViewModel, SPTFreeTierPlaylistFullbleedHeaderViewModel, SPTFreeTierPlaylistHeaderProvider, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistPlayModel, SPTFreeTierPlaylistPlayViewModel;

@interface SPTFreeTierPlaylistConfigurationImplementation : NSObject <SPTFreeTierPlaylistConfiguration>
{
    _Bool _showTrackArtwork;
    long long _headerType;
    id <SPTFreeTierPlaylistHeaderProvider> _headerProvider;
    id <SPTFreeTierPlaylistPlayViewModel> _playViewModel;
    id <SPTFreeTierPlaylistPlayModel> _playModel;
    id <SPTFreeTierPlaylistFollowViewModel> _followViewModel;
    id <SPTFreeTierPlaylistDefaultHeaderViewModel> _defaultHeaderViewModel;
    id <SPTFreeTierPlaylistFullbleedHeaderViewModel> _fullbleedHeaderViewModel;
    id <SPTFreeTierPlaylistContextMenuPresenter> _contextMenuPresenter;
    id <SPTFreeTierPlaylistCellProviderFactory> _cellProviderFactory;
    id <SPTFreeTierPlaylistItemsViewModel> _itemsViewModel;
    GLUEEntityRowStyle *_rowStyle;
    SPTFreeTierPlaylistCellProviderDelegateWrapper *_wrapper;
}

@property(retain, nonatomic) SPTFreeTierPlaylistCellProviderDelegateWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(nonatomic) _Bool showTrackArtwork; // @synthesize showTrackArtwork=_showTrackArtwork;
@property(copy, nonatomic) GLUEEntityRowStyle *rowStyle; // @synthesize rowStyle=_rowStyle;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel; // @synthesize itemsViewModel=_itemsViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistCellProviderFactory> cellProviderFactory; // @synthesize cellProviderFactory=_cellProviderFactory;
@property(retain, nonatomic) id <SPTFreeTierPlaylistContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFullbleedHeaderViewModel> fullbleedHeaderViewModel; // @synthesize fullbleedHeaderViewModel=_fullbleedHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistDefaultHeaderViewModel> defaultHeaderViewModel; // @synthesize defaultHeaderViewModel=_defaultHeaderViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistFollowViewModel> followViewModel; // @synthesize followViewModel=_followViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayModel> playModel; // @synthesize playModel=_playModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> playViewModel; // @synthesize playViewModel=_playViewModel;
@property(retain, nonatomic) id <SPTFreeTierPlaylistHeaderProvider> headerProvider; // @synthesize headerProvider=_headerProvider;
@property(nonatomic) long long headerType; // @synthesize headerType=_headerType;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> cellProviderDelegate;
- (id)initWithPlaylistViewModel:(id)arg1 playViewModel:(id)arg2 model:(id)arg3 rowStyle:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

