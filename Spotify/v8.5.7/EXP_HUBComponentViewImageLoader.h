//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBImageLoaderDelegate-Protocol.h"

@class NSMutableDictionary;
@protocol EXP_HUBImageLoader;

@interface EXP_HUBComponentViewImageLoader : NSObject <EXP_HUBImageLoaderDelegate>
{
    id <EXP_HUBImageLoader> _imageLoader;
    NSMutableDictionary *_componentImageLoadingContexts;
}

@property(readonly, nonatomic) NSMutableDictionary *componentImageLoadingContexts; // @synthesize componentImageLoadingContexts=_componentImageLoadingContexts;
@property(readonly, nonatomic) id <EXP_HUBImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailLoadingImageForURL:(id)arg2 error:(id)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3;
- (void)handleLoadedComponentImage:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)loadImageFromData:(id)arg1 model:(id)arg2 componentView:(id)arg3 containerViewSize:(struct CGSize)arg4;
- (void)loadImagesForComponentView:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)initWithImageLoader:(id)arg1;

@end

