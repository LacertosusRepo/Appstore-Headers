//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LOTAnimatorNode.h"

@class LOTNumberInterpolator, LOTPointInterpolator;

@interface LOTPolygonAnimator : LOTAnimatorNode
{
    LOTNumberInterpolator *_outerRadiusInterpolator;
    LOTNumberInterpolator *_outerRoundnessInterpolator;
    LOTPointInterpolator *_positionInterpolator;
    LOTNumberInterpolator *_pointsInterpolator;
    LOTNumberInterpolator *_rotationInterpolator;
}

- (void).cxx_destruct;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapePolygon:(id)arg2;

@end

