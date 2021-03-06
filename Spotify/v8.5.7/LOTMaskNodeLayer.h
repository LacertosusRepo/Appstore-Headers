//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class LOTMask, LOTNumberInterpolator, LOTPathInterpolator;

@interface LOTMaskNodeLayer : CAShapeLayer
{
    LOTPathInterpolator *_pathInterpolator;
    LOTNumberInterpolator *_opacityInterpolator;
    LOTNumberInterpolator *_expansionInterpolator;
    LOTMask *_maskNode;
}

@property(readonly, nonatomic) LOTMask *maskNode; // @synthesize maskNode=_maskNode;
- (void).cxx_destruct;
- (_Bool)hasUpdateForFrame:(id)arg1;
- (void)updateForFrame:(id)arg1 withViewBounds:(struct CGRect)arg2;
- (id)initWithMask:(id)arg1;

@end

