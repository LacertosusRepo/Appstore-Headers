//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTBundlingOfferDataSource.h"
#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader, SPTDataLoaderRequest;

@interface SPTBundlingOfferNetworkDataSource : NSObject <SPTBundlingOfferDataSource, SPTDataLoaderDelegate>
{
    SPTDataLoader *_networkLoader;
    SPTDataLoaderRequest *_networkRequest;
    CDUnknownBlockType _requestCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(retain, nonatomic) SPTDataLoaderRequest *networkRequest; // @synthesize networkRequest=_networkRequest;
@property(retain, nonatomic) SPTDataLoader *networkLoader; // @synthesize networkLoader=_networkLoader;
- (void).cxx_destruct;
- (id)placeboURL;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)handleResponse:(id)arg1 withError:(id)arg2;
- (_Bool)hasDataAvailable;
- (void)load:(CDUnknownBlockType)arg1;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

