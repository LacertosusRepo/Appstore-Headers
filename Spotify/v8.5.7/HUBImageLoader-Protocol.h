//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL;
@protocol HUBImageLoaderDelegate;

@protocol HUBImageLoader
@property(nonatomic) __weak id <HUBImageLoaderDelegate> delegate;
- (void)loadImageForURL:(NSURL *)arg1 targetSize:(struct CGSize)arg2;
@end

