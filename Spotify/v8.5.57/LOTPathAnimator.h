//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LOTAnimatorNode.h"

@class LOTPathInterpolator, LOTShapePath;

@interface LOTPathAnimator : LOTAnimatorNode
{
    LOTShapePath *_pathConent;
    LOTPathInterpolator *_interpolator;
}

- (void).cxx_destruct;
- (void)performLocalUpdate;
- (_Bool)needsUpdateForFrame:(id)arg1;
- (id)valueInterpolators;
- (id)initWithInputNode:(id)arg1 shapePath:(id)arg2;

@end

