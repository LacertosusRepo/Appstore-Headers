//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKGraphErrorRecoveryProcessorDelegate-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"

@class FBSDKGraphErrorRecoveryProcessor, FBSDKGraphRequestMetadata, FBSDKLogger, FBSDKURLSessionTask, NSHTTPURLResponse, NSMutableArray, NSOperationQueue, NSString, NSURLSession;
@protocol FBSDKGraphRequestConnectionDelegate;

@interface FBSDKGraphRequestConnection : NSObject <NSURLSessionDataDelegate, FBSDKGraphErrorRecoveryProcessorDelegate>
{
    NSString *_overrideVersionPart;
    unsigned long long _expectingResults;
    NSOperationQueue *_delegateQueue;
    FBSDKGraphRequestMetadata *_recoveringRequestMetadata;
    FBSDKGraphErrorRecoveryProcessor *_errorRecoveryProcessor;
    id <FBSDKGraphRequestConnectionDelegate> _delegate;
    double _timeout;
    NSHTTPURLResponse *_URLResponse;
    NSURLSession *_session;
    FBSDKURLSessionTask *_task;
    NSMutableArray *_requests;
    unsigned long long _state;
    FBSDKLogger *_logger;
    unsigned long long _requestStartTime;
}

+ (id)userAgent;
+ (void)setDefaultConnectionTimeout:(double)arg1;
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) FBSDKLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) FBSDKURLSessionTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, retain, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) __weak id <FBSDKGraphRequestConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)processorDidAttemptRecovery:(id)arg1 didRecover:(_Bool)arg2 error:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)cleanUpSession;
- (id)defaultSession;
- (void)registerTokenToOmitFromLog:(id)arg1;
- (id)accessTokenWithRequest:(id)arg1;
- (void)logRequest:(id)arg1 bodyLength:(unsigned long long)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4;
- (id)errorWithCode:(long long)arg1 statusCode:(long long)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5;
- (id)errorFromResult:(id)arg1 request:(id)arg2;
- (void)processResultDebugDictionary:(id)arg1;
- (void)processResultBody:(id)arg1 error:(id)arg2 metadata:(id)arg3 canNotifyDelegate:(_Bool)arg4;
- (void)completeWithResults:(id)arg1 networkError:(id)arg2;
- (id)parseJSONOrOtherwise:(id)arg1 error:(id *)arg2;
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2 statusCode:(long long)arg3;
- (void)completeFBSDKURLSessionWithResponse:(id)arg1 data:(id)arg2 networkError:(id)arg3;
- (id)urlStringForSingleRequest:(id)arg1 forBatch:(_Bool)arg2;
- (id)requestWithBatch:(id)arg1 timeout:(double)arg2;
- (void)_validateFieldsParamForGetRequests:(id)arg1;
- (_Bool)_shouldWarnOnMissingFieldsParam:(id)arg1;
- (void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4;
- (void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(_Bool)arg3 logger:(id)arg4;
- (void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 batchToken:(id)arg4;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)overrideVersionPartWith:(id)arg1;
- (void)cancel;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchEntryName:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

