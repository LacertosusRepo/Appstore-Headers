//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (imAdditions)
+ (id)imImageWithDataWithDeviceScale:(id)arg1;
- (_Bool)imIsValidThumbnail;
- (id)imImageByFlippingHorizontally;
- (id)imImageByFlippingVertically;
- (id)imDecompress;
- (id)imImageByClipingToRoundRectWithCornerRadius:(double)arg1;
- (id)imImageForThumbnailWithRadius:(double)arg1 highResolution:(_Bool)arg2;
- (id)imImageWithRemovedBands;
- (struct CGRect)imGetActualThumbnailViewport:(struct CGImage *)arg1;
- (id)imImageByScalingToSize:(struct CGSize)arg1 scale:(double)arg2 fast:(_Bool)arg3;
- (id)imImageByScalingToSize:(struct CGSize)arg1 fast:(_Bool)arg2;
- (id)imImageByScalingToSize:(struct CGSize)arg1;
- (id)imImageByScalingProportionallyToSize:(struct CGSize)arg1 scale:(double)arg2 fill:(_Bool)arg3 fast:(_Bool)arg4;
- (id)imImageByScalingProportionallyToSize:(struct CGSize)arg1 fill:(_Bool)arg2 fast:(_Bool)arg3;
- (id)imImageByScalingProportionallyToSize:(struct CGSize)arg1 fill:(_Bool)arg2;
- (id)imImageByScalingProportionallyToSize:(struct CGSize)arg1;
- (struct CGRect)imScaledImageRectForDestinationSize:(struct CGSize)arg1 adjustmentScale:(float)arg2 fill:(_Bool)arg3;
- (id)imImageCroppedToRect:(struct CGRect)arg1;
- (id)imReflectedImageWithHeight:(unsigned long long)arg1;
@end

