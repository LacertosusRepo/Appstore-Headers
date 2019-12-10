//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCDAsyncSocket, HTTPConfig, HTTPMessage, NSMutableArray, NSString;
@protocol HTTPResponse, OS_dispatch_queue;

@interface HTTPConnection : NSObject
{
    NSObject<OS_dispatch_queue> *connectionQueue;
    GCDAsyncSocket *asyncSocket;
    HTTPConfig *config;
    _Bool started;
    HTTPMessage *request;
    unsigned int numHeaderLines;
    _Bool sentResponseHeaders;
    NSString *nonce;
    long long lastNC;
    NSObject<HTTPResponse> *httpResponse;
    NSMutableArray *ranges;
    NSMutableArray *ranges_headers;
    NSString *ranges_boundry;
    int rangeIndex;
    unsigned long long requestContentLength;
    unsigned long long requestContentLengthReceived;
    unsigned long long requestChunkSize;
    unsigned long long requestChunkSizeReceived;
    NSMutableArray *responseDataSizes;
}

+ (_Bool)hasRecentNonce:(id)arg1;
+ (id)generateNonce;
+ (void)initialize;
- (void).cxx_destruct;
- (void)die;
- (_Bool)shouldDie;
- (void)finishResponse;
- (void)responseDidAbort:(id)arg1;
- (void)responseHasAvailableData:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (id)preprocessErrorResponse:(id)arg1;
- (id)preprocessResponse:(id)arg1;
- (id)dateAsString:(id)arg1;
- (void)handleResourceNotFound;
- (void)handleUnknownMethod:(id)arg1;
- (void)handleInvalidRequest:(id)arg1;
- (void)handleAuthenticationFailed;
- (void)handleVersionNotSupported:(id)arg1;
- (void)finishBody;
- (void)processBodyData:(id)arg1;
- (void)prepareForBodyWithSize:(unsigned long long)arg1;
- (id)webSocketForURI:(id)arg1;
- (id)httpResponseForMethod:(id)arg1 URI:(id)arg2;
- (id)filePathForURI:(id)arg1 allowDirectory:(_Bool)arg2;
- (id)filePathForURI:(id)arg1;
- (id)directoryIndexFileNames;
- (void)continueSendingMultiRangeResponseBody;
- (void)continueSendingSingleRangeResponseBody;
- (void)continueSendingStandardResponseBody;
- (unsigned long long)writeQueueSize;
- (void)sendResponseHeadersAndBody;
- (id)chunkedTransferFooter;
- (id)chunkedTransferSizeLineForLength:(unsigned long long)arg1;
- (id)newMultiRangeResponse:(unsigned long long)arg1;
- (id)newUniRangeResponse:(unsigned long long)arg1;
- (void)replyToHTTPRequest;
- (id)requestURI;
- (_Bool)parseRangeRequest:(id)arg1 withContentLength:(unsigned long long)arg2;
- (id)parseGetParams;
- (id)parseParams:(id)arg1;
- (void)startReadingRequest;
- (void)startConnection;
- (void)stop;
- (void)start;
- (void)addBasicAuthChallenge:(id)arg1;
- (void)addDigestAuthChallenge:(id)arg1;
- (_Bool)isAuthenticated;
- (id)passwordForUser:(id)arg1;
- (id)realm;
- (_Bool)useDigestAccessAuthentication;
- (_Bool)isPasswordProtected:(id)arg1;
- (id)sslIdentityAndCertificates;
- (_Bool)isSecureServer;
- (_Bool)expectsRequestBodyFromMethod:(id)arg1 atPath:(id)arg2;
- (_Bool)supportsMethod:(id)arg1 atPath:(id)arg2;
- (void)dealloc;
- (id)initWithAsyncSocket:(id)arg1 configuration:(id)arg2;

@end

