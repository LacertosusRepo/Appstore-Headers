//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class NSMutableSet, NSString;
@protocol SPTImageLoader;

@interface SPTAppProtocolBlockBasedImageLoader : NSObject <SPTImageLoaderDelegate>
{
    NSMutableSet *_pendingRequests;
    id <SPTImageLoader> _imageLoader;
}

@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void).cxx_destruct;
- (void)handleCompletedImageLoadingWithContext:(id)arg1 image:(id)arg2 error:(id)arg3;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)loadImageForURL:(id)arg1 sourceIdentifier:(id)arg2 size:(struct CGSize)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (id)initWithImageLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

