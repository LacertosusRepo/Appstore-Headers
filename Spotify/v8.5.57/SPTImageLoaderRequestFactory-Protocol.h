//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, SPTDataLoader;
@protocol SPTImageLoaderRemote, SPTImageLoaderRemoteCallback, SPTImageLoaderRequest, SPTImageLoaderRequestDelegate;

@protocol SPTImageLoaderRequestFactory <NSObject>
- (id <SPTImageLoaderRequest>)provideImageLoaderRequestForURL:(NSURL *)arg1 sourceIdentifier:(NSString *)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 callback:(id <SPTImageLoaderRemoteCallback>)arg7 dataLoader:(SPTDataLoader *)arg8 delegate:(id <SPTImageLoaderRequestDelegate>)arg9 baseImageLoader:(id <SPTImageLoaderRemote>)arg10;
@end

