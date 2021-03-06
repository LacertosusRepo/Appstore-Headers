//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError;
@protocol SPTImageLoaderRequest;

@protocol SPTImageLoaderRequestDelegate <NSObject>
@property(readonly, getter=isOffline) _Bool offline;
- (void)imageLoaderRequest:(id <SPTImageLoaderRequest>)arg1 didFailWithError:(NSError *)arg2;
- (void)imageLoaderRequest:(id <SPTImageLoaderRequest>)arg1 didLoadImageData:(NSData *)arg2;
@end

