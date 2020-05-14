//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperationDelegate-Protocol.h"
#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTSearchOnDemandPermissionMonitorObserver-Protocol.h"
#import "SPTSearchPlatformContext-Protocol.h"
#import "_TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_-Protocol.h"

@class NSArray, NSString;
@protocol HUBViewModel, SPTSearch2CancellationToken, SPTSearchOnDemandPermissionMonitor, SPTSearchPlatformContextDelegate, SPTSearchPlatformViewModelFetcher, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTSearchPlatformResultsContext : NSObject <HUBContentOperationDelegate, SPTExplicitContentEnabledStateObserver, _TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_, SPTSearchOnDemandPermissionMonitorObserver, SPTSearchPlatformContext>
{
    id <SPTSearchPlatformContextDelegate> _delegate;
    NSString *_query;
    unsigned long long _state;
    id <HUBViewModel> _viewModel;
    id <HUBViewModel> _unprocessedViewModel;
    id <SPTSearchPlatformViewModelFetcher> _viewModelFetcher;
    id <SPTSearchPlatformViewModelFetcher> _nextPageFetcher;
    id <SPTSearch2CancellationToken> _nextPageFetchCancellationToken;
    NSArray *_postProcessContentOperations;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    id <SPTSearchOnDemandPermissionMonitor> _onDemandPermissionMonitor;
}

@property(readonly, nonatomic) id <SPTSearchOnDemandPermissionMonitor> onDemandPermissionMonitor; // @synthesize onDemandPermissionMonitor=_onDemandPermissionMonitor;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, copy, nonatomic) NSArray *postProcessContentOperations; // @synthesize postProcessContentOperations=_postProcessContentOperations;
@property(retain, nonatomic) id <SPTSearch2CancellationToken> nextPageFetchCancellationToken; // @synthesize nextPageFetchCancellationToken=_nextPageFetchCancellationToken;
@property(retain, nonatomic) id <SPTSearchPlatformViewModelFetcher> nextPageFetcher; // @synthesize nextPageFetcher=_nextPageFetcher;
@property(readonly, nonatomic) id <SPTSearchPlatformViewModelFetcher> viewModelFetcher; // @synthesize viewModelFetcher=_viewModelFetcher;
@property(retain, nonatomic) id <HUBViewModel> unprocessedViewModel; // @synthesize unprocessedViewModel=_unprocessedViewModel;
@property(readonly, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak id <SPTSearchPlatformContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)postProcessViewModel:(id)arg1;
- (void)onDemandPermissionMonitorDidChangeState:(id)arg1;
- (void)didChangeCanPlayAgeRestrictedContent:(_Bool)arg1;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)contentOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)contentOperationDidFinish:(id)arg1;
- (void)contentOperationRequiresRescheduling:(id)arg1;
- (void)loadNextPage;
- (void)reload;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModelFetcher:(id)arg1 postProcessContentOperations:(id)arg2 query:(id)arg3 explicitContentAccessManager:(id)arg4 ageVerificationProvider:(id)arg5 onDemandPermissionMonitor:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
