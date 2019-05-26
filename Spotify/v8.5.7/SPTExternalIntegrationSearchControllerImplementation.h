//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTExternalIntegrationSearchController-Protocol.h"

@class NSMutableSet, NSString, SPTDataLoader, SPTExternalIntegrationPlatformLoggerImplementation, SPTExternalIntegrationSearchRequestContentFactory;
@protocol SPTExternalIntegrationDebugLog;

@interface SPTExternalIntegrationSearchControllerImplementation : NSObject <SPTDataLoaderDelegate, SPTExternalIntegrationSearchController>
{
    SPTExternalIntegrationSearchRequestContentFactory *_searchContentFactory;
    NSMutableSet *_pendingRequests;
    SPTDataLoader *_dataLoader;
    id <SPTExternalIntegrationDebugLog> _debugLog;
    SPTExternalIntegrationPlatformLoggerImplementation *_logger;
}

@property(readonly, nonatomic) SPTExternalIntegrationPlatformLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) SPTExternalIntegrationSearchRequestContentFactory *searchContentFactory; // @synthesize searchContentFactory=_searchContentFactory;
- (void).cxx_destruct;
- (void)performSuccessCallbackForRequest:(id)arg1 withResults:(id)arg2;
- (void)performErrorCallbackForRequest:(id)arg1 withError:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)searchWithQuery:(id)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 accessorySessionID:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithDataLoaderFactory:(id)arg1 debugLog:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
