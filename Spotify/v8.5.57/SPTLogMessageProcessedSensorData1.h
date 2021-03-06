//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageProcessedSensorData1 : SPTLogMessage
{
    NSString *_sensorTypeValue;
    NSString *_loggingStartReasonValue;
    double _minValueValue;
    double _maxValueValue;
    double _meanValueValue;
    double _stdDevValue;
}

+ (id)messageWithSensorType:(id)arg1 loggingStartReason:(id)arg2 minValue:(double)arg3 maxValue:(double)arg4 meanValue:(double)arg5 stdDev:(double)arg6;
@property(nonatomic) double stdDevValue; // @synthesize stdDevValue=_stdDevValue;
@property(nonatomic) double meanValueValue; // @synthesize meanValueValue=_meanValueValue;
@property(nonatomic) double maxValueValue; // @synthesize maxValueValue=_maxValueValue;
@property(nonatomic) double minValueValue; // @synthesize minValueValue=_minValueValue;
@property(copy, nonatomic) NSString *loggingStartReasonValue; // @synthesize loggingStartReasonValue=_loggingStartReasonValue;
@property(copy, nonatomic) NSString *sensorTypeValue; // @synthesize sensorTypeValue=_sensorTypeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

