//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLSURLSessionTaskDelegate-Protocol.h"

@class CLSURLSessionDataTask, NSData, NSURLResponse;

@protocol CLSURLSessionDataDelegate <CLSURLSessionTaskDelegate>
- (void)task:(CLSURLSessionDataTask *)arg1 didReceiveData:(NSData *)arg2;
- (void)task:(CLSURLSessionDataTask *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end

