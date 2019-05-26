//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSURL;
@protocol SPTVideoDataLoaderResponseHandler;

@protocol SPTVideoDataLoader <NSObject>
- (void)requestWithURL:(NSURL *)arg1 method:(unsigned long long)arg2 headers:(NSDictionary *)arg3 body:(NSData *)arg4 success:(void (^)(long long, NSDictionary *, NSData *))arg5 failure:(void (^)(long long, NSError *, NSData *))arg6;
- (void)requestWithURL:(NSURL *)arg1 method:(unsigned long long)arg2 headers:(NSDictionary *)arg3 body:(NSData *)arg4 responseHandler:(id <SPTVideoDataLoaderResponseHandler>)arg5;
@end

