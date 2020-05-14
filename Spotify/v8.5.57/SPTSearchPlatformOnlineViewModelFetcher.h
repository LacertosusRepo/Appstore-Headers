//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTSearchPlatformViewModelFetcher-Protocol.h"

@class HUBViewModelBuilderFactory, NSString, SPTDataLoader, SPTDataLoaderFactory;
@protocol SPTSearch2DateProviding, SPTSearch2EmptyStatePropertiesProvider, SPTSearch2URLProviding, SPTSearchErrorViewModelBuilder, SPTSearchPlatformResponseParser;

@interface SPTSearchPlatformOnlineViewModelFetcher : NSObject <SPTDataLoaderDelegate, SPTSearchPlatformViewModelFetcher>
{
    id <SPTSearch2URLProviding> _urlProvider;
    NSString *_query;
    id <SPTSearch2DateProviding> _dateProvider;
    SPTDataLoader *_dataLoader;
    SPTDataLoaderFactory *_dataLoaderFactory;
    HUBViewModelBuilderFactory *_viewModelBuilderFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTSearchPlatformResponseParser> _responseParser;
    id <SPTSearchErrorViewModelBuilder> _errorViewModelBuilder;
}

@property(readonly, nonatomic) id <SPTSearchErrorViewModelBuilder> errorViewModelBuilder; // @synthesize errorViewModelBuilder=_errorViewModelBuilder;
@property(readonly, nonatomic) id <SPTSearchPlatformResponseParser> responseParser; // @synthesize responseParser=_responseParser;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
- (void).cxx_destruct;
- (id)makeFetcherWithURLProvider:(id)arg1;
- (id)nextPageFetcherForViewModel:(id)arg1;
- (void)performCompletionUnlessCancelledForRequest:(id)arg1 withViewModel:(id)arg2;
- (void)addViewModelTypeSuccessToViewModelBuilder:(id)arg1;
- (id)urlByUpdatingQueryParametersInURL:(id)arg1;
- (void)setCancellationToken:(id)arg1 forRequest:(id)arg2;
- (id)cancellationTokenForRequest:(id)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (CDUnknownBlockType)completionBlockForRequest:(id)arg1;
- (id)viewModelForErrorType:(unsigned long long)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)fetchViewModelWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURLProvider:(id)arg1 query:(id)arg2 dataLoaderFactory:(id)arg3 viewModelBuilderFactory:(id)arg4 emptyStatePropertiesProvider:(id)arg5 dateProvider:(id)arg6 responseParser:(id)arg7 errorViewModelBuilder:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

