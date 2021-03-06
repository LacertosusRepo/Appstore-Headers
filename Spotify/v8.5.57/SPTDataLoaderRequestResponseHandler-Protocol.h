//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, SPTDataLoaderRequest, SPTDataLoaderResponse;
@protocol SPTDataLoaderRequestResponseHandlerDelegate;

@protocol SPTDataLoaderRequestResponseHandler <NSObject>
@property(readonly, nonatomic) __weak id <SPTDataLoaderRequestResponseHandlerDelegate> requestResponseHandlerDelegate;
- (void)needsNewBodyStream:(void (^)(NSInputStream *))arg1 forRequest:(SPTDataLoaderRequest *)arg2;
- (void)requestIsWaitingForConnectivity:(SPTDataLoaderRequest *)arg1;
- (void)receivedInitialResponse:(SPTDataLoaderResponse *)arg1;
- (void)receivedDataChunk:(NSData *)arg1 forResponse:(SPTDataLoaderResponse *)arg2;
- (void)cancelledRequest:(SPTDataLoaderRequest *)arg1;
- (void)failedResponse:(SPTDataLoaderResponse *)arg1;
- (void)successfulResponse:(SPTDataLoaderResponse *)arg1;

@optional
- (void)authoriseRequest:(SPTDataLoaderRequest *)arg1;
- (_Bool)shouldAuthoriseRequest:(SPTDataLoaderRequest *)arg1;
@end

