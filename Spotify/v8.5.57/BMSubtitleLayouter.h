//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BMSubtitleLayouter : NSObject
{
}

- (double)widthPercentageForVideoSize:(struct CGSize)arg1 inViewableArea:(struct CGSize)arg2;
- (double)fontPercentageForVideoSize:(struct CGSize)arg1 inViewableArea:(struct CGSize)arg2;
- (struct CGRect)displayViewFrameForViewableArea:(struct CGSize)arg1 videoAspectRatio:(double)arg2 gravity:(long long)arg3;

@end

