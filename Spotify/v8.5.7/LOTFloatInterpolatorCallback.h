//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LOTNumberValueDelegate-Protocol.h"

@class NSString;

@interface LOTFloatInterpolatorCallback : NSObject <LOTNumberValueDelegate>
{
    double _fromFloat;
    double _toFloat;
    double _currentProgress;
}

+ (id)withFromFloat:(double)arg1 toFloat:(double)arg2;
@property(nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property(nonatomic) double toFloat; // @synthesize toFloat=_toFloat;
@property(nonatomic) double fromFloat; // @synthesize fromFloat=_fromFloat;
- (double)floatValueForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startValue:(double)arg5 endValue:(double)arg6 currentValue:(double)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
