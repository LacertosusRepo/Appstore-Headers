//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError, NSURL, UIImage;
@protocol HUBImageLoader;

@protocol HUBImageLoaderDelegate
- (void)imageLoader:(id <HUBImageLoader>)arg1 didFailLoadingImageForURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)imageLoader:(id <HUBImageLoader>)arg1 didLoadImage:(UIImage *)arg2 forURL:(NSURL *)arg3;
@end
