//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBConnectivityStateResolverObserver-Protocol.h"
#import "HUBContentOperationWrapperDelegate-Protocol.h"
#import "HUBViewModelLoaderWithActions-Protocol.h"

@class HUBComponentDefaults, HUBViewModelBuilderImplementation, NSArray, NSMutableArray, NSMutableDictionary, NSURL;
@protocol HUBActionPerformer, HUBConnectivityStateResolver, HUBContentReloadPolicy, HUBFeatureInfo, HUBIconImageResolver, HUBJSONSchema, HUBViewModel, HUBViewModelLoaderDelegate;

@interface HUBViewModelLoaderImplementation : NSObject <HUBContentOperationWrapperDelegate, HUBConnectivityStateResolverObserver, HUBViewModelLoaderWithActions>
{
    _Bool _anyContentOperationSupportsPagination;
    id <HUBViewModelLoaderDelegate> _delegate;
    id <HUBActionPerformer> _actionPerformer;
    NSURL *_viewURI;
    id <HUBFeatureInfo> _featureInfo;
    NSArray *_contentOperations;
    NSMutableDictionary *_contentOperationWrappers;
    NSMutableArray *_contentOperationQueue;
    id <HUBContentReloadPolicy> _contentReloadPolicy;
    id <HUBJSONSchema> _JSONSchema;
    HUBComponentDefaults *_componentDefaults;
    id <HUBConnectivityStateResolver> _connectivityStateResolver;
    unsigned long long _connectivityState;
    id <HUBIconImageResolver> _iconImageResolver;
    id <HUBViewModel> _cachedInitialViewModel;
    id <HUBViewModel> _previouslyLoadedViewModel;
    NSMutableDictionary *_builderSnapshots;
    NSMutableDictionary *_errorSnapshots;
    HUBViewModelBuilderImplementation *_currentBuilder;
    unsigned long long _pageIndex;
}

@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool anyContentOperationSupportsPagination; // @synthesize anyContentOperationSupportsPagination=_anyContentOperationSupportsPagination;
@property(retain, nonatomic) HUBViewModelBuilderImplementation *currentBuilder; // @synthesize currentBuilder=_currentBuilder;
@property(readonly, nonatomic) NSMutableDictionary *errorSnapshots; // @synthesize errorSnapshots=_errorSnapshots;
@property(readonly, nonatomic) NSMutableDictionary *builderSnapshots; // @synthesize builderSnapshots=_builderSnapshots;
@property(retain, nonatomic) id <HUBViewModel> previouslyLoadedViewModel; // @synthesize previouslyLoadedViewModel=_previouslyLoadedViewModel;
@property(retain, nonatomic) id <HUBViewModel> cachedInitialViewModel; // @synthesize cachedInitialViewModel=_cachedInitialViewModel;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(nonatomic) unsigned long long connectivityState; // @synthesize connectivityState=_connectivityState;
@property(readonly, nonatomic) id <HUBConnectivityStateResolver> connectivityStateResolver; // @synthesize connectivityStateResolver=_connectivityStateResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <HUBJSONSchema> JSONSchema; // @synthesize JSONSchema=_JSONSchema;
@property(readonly, nonatomic) id <HUBContentReloadPolicy> contentReloadPolicy; // @synthesize contentReloadPolicy=_contentReloadPolicy;
@property(readonly, nonatomic) NSMutableArray *contentOperationQueue; // @synthesize contentOperationQueue=_contentOperationQueue;
@property(readonly, nonatomic) NSMutableDictionary *contentOperationWrappers; // @synthesize contentOperationWrappers=_contentOperationWrappers;
@property(readonly, copy, nonatomic) NSArray *contentOperations; // @synthesize contentOperations=_contentOperations;
@property(readonly, nonatomic) id <HUBFeatureInfo> featureInfo; // @synthesize featureInfo=_featureInfo;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic) __weak id <HUBActionPerformer> actionPerformer; // @synthesize actionPerformer=_actionPerformer;
@property(nonatomic) __weak id <HUBViewModelLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getOrCreateWrapperForContentOperationAtIndex:(unsigned long long)arg1;
- (void)contentOperationQueueDidBecomeEmpty;
- (void)performFirstContentOperationInQueue;
- (void)scheduleContentOperationsFromIndex:(unsigned long long)arg1 executionMode:(unsigned long long)arg2;
- (id)previousErrorForExecutionInfo:(id)arg1;
- (id)pageIndexForExecutionInfo:(id)arg1;
- (id)createBuilder;
- (id)snapshotOfBuilderAtIndex:(unsigned long long)arg1;
- (id)builderForExecutionInfo:(id)arg1;
- (void)connectivityStateResolverStateDidChange:(id)arg1;
- (void)contentOperationWrapperRequiresRescheduling:(id)arg1;
- (void)contentOperationWrapperDidFinish:(id)arg1 withError:(id)arg2;
- (void)contentOperationWrapper:(id)arg1 didFailWithError:(id)arg2;
- (void)contentOperationWrapperDidFinish:(id)arg1;
- (void)loadNextPageForCurrentViewModel;
- (void)reloadViewModel;
- (void)loadViewModel;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) id <HUBViewModel> initialViewModel;
- (void)actionPerformedWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithViewURI:(id)arg1 featureInfo:(id)arg2 contentOperations:(id)arg3 contentReloadPolicy:(id)arg4 JSONSchema:(id)arg5 componentDefaults:(id)arg6 connectivityStateResolver:(id)arg7 iconImageResolver:(id)arg8 initialViewModel:(id)arg9;

@end

