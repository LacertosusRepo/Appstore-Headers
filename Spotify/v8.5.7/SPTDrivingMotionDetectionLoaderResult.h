//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTDrivingMotionDetectionLoaderResult : NSObject
{
    _Bool _driving;
    float _confidence;
    NSString *_predictionID;
}

@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic, getter=isDriving) _Bool driving; // @synthesize driving=_driving;
@property(readonly, nonatomic) NSString *predictionID; // @synthesize predictionID=_predictionID;
- (void).cxx_destruct;
- (id)initWithPredictionID:(id)arg1 drivingPrediction:(_Bool)arg2 confidence:(float)arg3;

@end

