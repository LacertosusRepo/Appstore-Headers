//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAssetResourceLoadingRequest, NSURL;
@protocol SPTVideoResourceRequest;

@protocol SPTVideoResourceRequestFactory <NSObject>
- (id <SPTVideoResourceRequest>)createRequestForURL:(NSURL *)arg1 loadingRequest:(AVAssetResourceLoadingRequest *)arg2 completion:(void (^)(id <SPTVideoResourceRequest>))arg3;
@end
