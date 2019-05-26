//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTSearch2ConnectivityMonitorObserver-Protocol.h"
#import "SPTSearchPlatformContext-Protocol.h"
#import "SPTSearchRecentsDataSourceDelegate-Protocol.h"

@class EXP_HUBViewModelBuilderFactory, NSString, NSURL;
@protocol EXP_HUBViewModel, SPTPlayer, SPTSearch2ConnectivityMonitor, SPTSearch2EmptyStatePropertiesProvider, SPTSearchPlatformContextDelegate, SPTSearchRecentsDataSource;

@interface SPTSearchPlatformEmptyStateContext : NSObject <SPTSearchRecentsDataSourceDelegate, SPTPlayerObserver, SPTSearch2ConnectivityMonitorObserver, SPTSearchPlatformContext>
{
    id <SPTSearchPlatformContextDelegate> _delegate;
    NSString *_query;
    unsigned long long _state;
    id <EXP_HUBViewModel> _viewModel;
    EXP_HUBViewModelBuilderFactory *_viewModelBuilderFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTSearchRecentsDataSource> _recentsDataSource;
    id <SPTPlayer> _player;
    NSString *_recentsCommandName;
    id <SPTSearch2ConnectivityMonitor> _connectivityMonitor;
    NSString *_featureID;
    NSURL *_pageURI;
}

@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic) id <SPTSearch2ConnectivityMonitor> connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(readonly, copy, nonatomic) NSString *recentsCommandName; // @synthesize recentsCommandName=_recentsCommandName;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> recentsDataSource; // @synthesize recentsDataSource=_recentsDataSource;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) EXP_HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, nonatomic) id <EXP_HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak id <SPTSearchPlatformContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)recentsViewModel;
- (void)addInfoViewOverlayWithTitle:(id)arg1 subtitle:(id)arg2 toViewModel:(id)arg3;
- (void)addEmptyStateOverlayConnectivityState:(unsigned long long)arg1 toViewModel:(id)arg2;
- (id)offlinePlaceholderViewModel;
- (id)onlinePlaceholderViewModel;
- (void)connectivityMonitorDidChangeState:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)recentsDataSourceItemsDidChange:(id)arg1;
- (void)loadNextPage;
- (void)reload;
- (void)setState:(unsigned long long)arg1;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModelBuilderFactory:(id)arg1 emptyStatePropertiesProvider:(id)arg2 recentsDataSource:(id)arg3 player:(id)arg4 recentsCommandName:(id)arg5 connectivityMonitor:(id)arg6 featureID:(id)arg7 pageURI:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

