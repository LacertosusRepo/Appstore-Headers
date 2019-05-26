//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTWatchConnectivityMessageHandlerRegistry.h"

@class NSMutableDictionary, NSString;

@interface SPTWatchConnectivityMessageDispatcher : NSObject <SPTWatchConnectivityMessageHandlerRegistry>
{
    NSMutableDictionary *_requestHandlers;
    NSMutableDictionary *_responseHandlers;
}

@property(readonly, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
@property(readonly, nonatomic) NSMutableDictionary *requestHandlers; // @synthesize requestHandlers=_requestHandlers;
- (void).cxx_destruct;
- (void)registerResponseHandler:(id)arg1 forRequest:(id)arg2;
- (void)deregisterRequestHandlerForURI:(id)arg1;
- (void)registerRequestHandler:(id)arg1 forURI:(id)arg2;
- (void)handleResponse:(id)arg1;
- (void)handleRequest:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
