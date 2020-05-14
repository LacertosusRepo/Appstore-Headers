//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBImageLoaderDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol HUBImageLoader;

@interface HUBComponentViewImageLoader : NSObject <HUBImageLoaderDelegate>
{
    id <HUBImageLoader> _imageLoader;
    NSMutableDictionary *_componentImageLoadingContexts;
}

@property(readonly, nonatomic) NSMutableDictionary *componentImageLoadingContexts; // @synthesize componentImageLoadingContexts=_componentImageLoadingContexts;
@property(readonly, nonatomic) id <HUBImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailLoadingImageForURL:(id)arg2 error:(id)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3;
- (void)handleComponentImageFailedWithError:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)handleLoadedComponentImage:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (id)imageDataFromContext:(id)arg1 componentModel:(id)arg2;
- (void)loadImageFromData:(id)arg1 model:(id)arg2 componentView:(id)arg3 containerViewSize:(struct CGSize)arg4;
- (void)loadImagesForComponentView:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)initWithImageLoader:(id)arg1;

@end
