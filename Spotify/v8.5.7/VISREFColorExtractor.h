//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VISREFColorExtractor : NSObject
{
}

+ (double)colorfulnessOfColor:(id)arg1;
+ (double)populationFractionOfColor:(id)arg1 withPixelCount:(double)arg2;
+ (id)filterLightnessOfSwatches:(id)arg1 withConfig:(struct VISREFColorExtractionConfiguration)arg2 pixelCount:(long long)arg3;
+ (id)filterAverageSaturationOfSwatches:(id)arg1 withConfig:(struct VISREFColorExtractionConfiguration)arg2 pixelCount:(long long)arg3;
+ (_Bool)filterSaturationOfSwatch:(id)arg1 withConfig:(struct VISREFColorExtractionConfiguration)arg2;
+ (id)extractColorFromImage:(id)arg1 withConfiguration:(struct VISREFColorExtractionConfiguration)arg2;
+ (id)extractColorFromImage:(id)arg1;
+ (id)paletteConfiguration;
+ (struct VISREFColorExtractionConfiguration)defaultConfiguration;

@end

