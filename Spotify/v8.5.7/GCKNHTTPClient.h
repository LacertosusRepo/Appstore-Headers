//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class GCKNHTTPRequestMap, NSString, NSURLSession, NSURLSessionConfiguration;

@interface GCKNHTTPClient : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSessionConfiguration *_sessionConfig;
    NSURLSessionConfiguration *_backgroundSessionConfig;
    NSURLSession *_session;
    GCKNHTTPRequestMap *_requests;
    unsigned long long _nextIdentifier;
    _Bool _allowsCellularAccess;
    double _timeout;
    long long _maxResponseSize;
    double _backgroundDownloadTimeout;
}

@property(nonatomic) double backgroundDownloadTimeout; // @synthesize backgroundDownloadTimeout=_backgroundDownloadTimeout;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) long long maxResponseSize; // @synthesize maxResponseSize=_maxResponseSize;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)removeRequestForSession:(id)arg1 task:(id)arg2;
- (id)lookupRequestForSession:(id)arg1 task:(id)arg2;
- (id)URL:(id)arg1 withQueryParameters:(id)arg2;
- (id)createHTTPRequestForURLRequest:(id)arg1;
- (id)createDeleteRequestWithURL:(id)arg1;
- (id)createPostRequestWithURL:(id)arg1 data:(id)arg2 mimeType:(id)arg3;
- (id)createGetRequestWithURL:(id)arg1 queryParams:(id)arg2;
- (id)createGetRequestWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithTimeout:(double)arg1;
- (id)initWithBackgroundDownloadTimeout:(double)arg1 sharedContainerIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

