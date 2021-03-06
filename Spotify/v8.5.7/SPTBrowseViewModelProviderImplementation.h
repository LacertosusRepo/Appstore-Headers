//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseConnectivityMonitorObserver-Protocol.h"
#import "SPTBrowseViewModelProvider-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol EXP_HUBViewModel, SPTBrowseConnectivityMonitor, SPTBrowseViewModelFetcher, SPTDataLoaderCancellationToken, SPTPlayer;

@interface SPTBrowseViewModelProviderImplementation : NSObject <SPTBrowseConnectivityMonitorObserver, SPTPlayerObserver, SPTBrowseViewModelProvider>
{
    _Bool _refreshDisallowed;
    id <EXP_HUBViewModel> _viewModel;
    id <SPTBrowseViewModelFetcher> _viewModelFetcher;
    SPTObserverManager *_observers;
    id <SPTBrowseViewModelFetcher> _nextPageFetcher;
    unsigned long long _state;
    id <SPTDataLoaderCancellationToken> _nextPageFetchCancellationToken;
    id <SPTBrowseConnectivityMonitor> _connectivityMonitor;
    id <EXP_HUBViewModel> _initialViewModel;
    id <EXP_HUBViewModel> _offlineViewModel;
    id <EXP_HUBViewModel> _errorViewModel;
    id <SPTPlayer> _player;
}

@property(nonatomic, getter=isRefreshDisallowed) _Bool refreshDisallowed; // @synthesize refreshDisallowed=_refreshDisallowed;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <EXP_HUBViewModel> errorViewModel; // @synthesize errorViewModel=_errorViewModel;
@property(readonly, nonatomic) id <EXP_HUBViewModel> offlineViewModel; // @synthesize offlineViewModel=_offlineViewModel;
@property(readonly, nonatomic) id <EXP_HUBViewModel> initialViewModel; // @synthesize initialViewModel=_initialViewModel;
@property(readonly, nonatomic) id <SPTBrowseConnectivityMonitor> connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> nextPageFetchCancellationToken; // @synthesize nextPageFetchCancellationToken=_nextPageFetchCancellationToken;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <SPTBrowseViewModelFetcher> nextPageFetcher; // @synthesize nextPageFetcher=_nextPageFetcher;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTBrowseViewModelFetcher> viewModelFetcher; // @synthesize viewModelFetcher=_viewModelFetcher;
@property(retain, nonatomic) id <EXP_HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)viewModelByAppendingViewModel:(id)arg1 toViewModel:(id)arg2;
- (void)cancelLoadingNextPage;
- (_Bool)updatePlayableHeroCardModelBuilder:(id)arg1 playerState:(id)arg2;
- (void)updatePlayableHeroCardsWithPlayerState:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)connectivityMonitorDidChangeState:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)loadNextPage;
- (void)refresh;
- (void)reload;
- (id)initWithViewModelFetcher:(id)arg1 connectivityMonitor:(id)arg2 initialViewModel:(id)arg3 offlineViewModel:(id)arg4 errorViewModel:(id)arg5 player:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

