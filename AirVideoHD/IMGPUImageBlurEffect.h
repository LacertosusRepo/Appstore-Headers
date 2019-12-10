//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageAlphaBlendFilter, GPUImageGaussianBlurFilter, GPUImageSaturationFilter, GPUImageSolidColorGenerator;

@interface IMGPUImageBlurEffect : GPUImageFilterGroup
{
    GPUImageSaturationFilter *saturationFilter;
    GPUImageGaussianBlurFilter *blurFilter;
    GPUImageSolidColorGenerator *colorGenerator;
    GPUImageAlphaBlendFilter *blendFilter;
    int _effectType;
    double blurRadiusInPixels;
    double saturation;
    double _downsampling;
}

@property(nonatomic) int effectType; // @synthesize effectType=_effectType;
@property(nonatomic) double downsampling; // @synthesize downsampling=_downsampling;
- (void).cxx_destruct;
@property(nonatomic) double saturation; // @synthesize saturation;
@property(nonatomic) double blurRadiusInPixels; // @synthesize blurRadiusInPixels;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (id)init;

@end

