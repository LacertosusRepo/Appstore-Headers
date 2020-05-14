//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTCarmageddonMotionRecorderConfiguration : NSObject
{
    long long _sensors;
    double _interval;
    double _duration;
}

+ (id)motionManagerDefaultRecorderConfiguration;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) long long sensors; // @synthesize sensors=_sensors;
- (id)initWithSensors:(long long)arg1 interval:(double)arg2 duration:(double)arg3;

@end

