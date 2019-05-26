//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader, SPTDataLoaderFactory;

@interface SPTSearchAutocompleteDataFetcher : NSObject <SPTDataLoaderDelegate>
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTDataLoader *_dataLoader;
}

@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (void)performCompletionUnlessCancelledForRequest:(id)arg1 withSuggestions:(id)arg2 withRequestId:(id)arg3 withError:(id)arg4;
- (void)setCancellationToken:(id)arg1 forRequest:(id)arg2;
- (id)cancellationTokenForRequest:(id)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (CDUnknownBlockType)completionBlockForRequest:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)fetchViewModelForQuery:(id)arg1 sessionId:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithDataLoaderFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

