//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEInterpolator-Protocol.h"

@interface GLUETimingFunctionInterpolator : NSObject <GLUEInterpolator>
{
    double ax;
    double bx;
    double cx;
    double ay;
    double by;
    double cy;
    struct CGPoint p1;
    struct CGPoint p2;
    unsigned long long _functionType;
}

@property(nonatomic) unsigned long long functionType; // @synthesize functionType=_functionType;
- (double)interpolateWithValue:(double)arg1;
- (double)sampleCurveDerivativeX:(double)arg1;
- (double)sampleCurveY:(double)arg1;
- (double)sampleCurveX:(double)arg1;
- (void)calculatePolynomialCoefficients;
- (id)initWithCAMediaTimingFunction:(id)arg1;

@end

