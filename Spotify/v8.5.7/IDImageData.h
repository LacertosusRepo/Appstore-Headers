//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDImageData : NSObject
{
    NSData *_imageData;
    struct CGSize _imageSize;
}

+ (id)imageDataWithURL:(id)arg1;
+ (id)imageDataWithData:(id)arg1;
+ (id)emptyImageData;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (struct CGSize)extractImageSizeFromData:(id)arg1;
- (_Bool)dataContainsValidImageType:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToImageData:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;

@end

