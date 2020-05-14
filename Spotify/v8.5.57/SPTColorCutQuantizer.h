//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTColorCutQuantizer : NSObject
{
}

+ (struct ColorCube)colorCubeFromPixels:(const union SPTColor *)arg1 count:(unsigned long long)arg2 filter:(CDUnknownBlockType)arg3;
+ (id)swatchesByQuantizingPixelsFromColorCube:(struct ColorCube)arg1 toMaxColorsCount:(unsigned long long)arg2;
+ (id)swatchesFromColorCube:(const struct ColorCube *)arg1;
+ (id)swatchesByIncreasingDepthOfColorsInSwatches:(id)arg1 filter:(CDUnknownBlockType)arg2;
+ (id)quantizePixels:(const union SPTColor *)arg1 count:(unsigned long long)arg2 maxColors:(unsigned long long)arg3 filters:(id)arg4;

@end

