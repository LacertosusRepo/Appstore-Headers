//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSURLSession;
@protocol NSURLSessionDataDelegate;

@interface FBSDKURLSession : NSObject
{
    NSURLSession *_session;
    id <NSURLSessionDataDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
}

@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (_Bool)valid;
- (void)invalidateAndCancel;
- (void)updateSessionWithBlock:(CDUnknownBlockType)arg1;
- (void)executeURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

@end

