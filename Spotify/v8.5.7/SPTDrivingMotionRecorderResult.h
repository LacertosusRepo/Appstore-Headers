//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTDrivingMotionRecorderResult : NSObject
{
    NSArray *_accelerometerMeasurements;
    NSArray *_gyroscopeMeasurements;
}

@property(readonly, nonatomic) NSArray *gyroscopeMeasurements; // @synthesize gyroscopeMeasurements=_gyroscopeMeasurements;
@property(readonly, nonatomic) NSArray *accelerometerMeasurements; // @synthesize accelerometerMeasurements=_accelerometerMeasurements;
- (void).cxx_destruct;
- (id)initWithAccelerometerMeasurements:(id)arg1 gyroscopeMeasurements:(id)arg2;

@end

