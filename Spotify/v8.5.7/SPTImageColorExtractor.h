//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTImageColorExtractor : NSObject
{
}

- (struct CGSize)optimizedSizeForImageSize:(struct CGSize)arg1;
- (id)createColorWithBitmapPixelData:(char *)arg1;
- (id)colorWithMaxFrequencyInHistogram:(id)arg1;
- (double)weightFactorForBrightness:(double)arg1;
- (_Bool)isColorGrayscale:(id)arg1;
- (double)weightedFrequencyForColor:(id)arg1;
- (id)prominentColorForImage:(id)arg1;

@end
