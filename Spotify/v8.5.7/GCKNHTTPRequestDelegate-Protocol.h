//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKNHTTPRequest, NSError;

@protocol GCKNHTTPRequestDelegate <NSObject>
- (void)httpRequest:(GCKNHTTPRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)httpRequest:(GCKNHTTPRequest *)arg1 didCompleteWithStatusCode:(long long)arg2;
@end

