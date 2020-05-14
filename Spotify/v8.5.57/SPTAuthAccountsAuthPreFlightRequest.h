//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSHTTPCookie, NSMutableData, NSString, NSURL;

@interface SPTAuthAccountsAuthPreFlightRequest : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSString *_redirectURI;
    NSURL *_authURL;
    CDUnknownBlockType _callback;
    NSHTTPCookie *_cookie;
    NSMutableData *_responseData;
}

@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSHTTPCookie *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSURL *authURL; // @synthesize authURL=_authURL;
@property(readonly, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
- (void).cxx_destruct;
- (id)getErrorUrl:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)parseRedirectRequestAndCallback:(id)arg1;
- (void)performRequest;
- (id)initWithAuthURL:(id)arg1 redirectURI:(id)arg2 withCookie:(id)arg3 withCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
