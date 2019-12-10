//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMBenchmark.h"

@class NSMutableArray, NSMutableData;

@interface IMLatencyBenchmark : IMBenchmark
{
    CDUnknownBlockType _measured;
    CDUnknownBlockType _failed;
    NSMutableArray *_measurements;
    NSMutableData *_receivedData;
    _Bool _cellular;
}

+ (id)benchmarkLatencyOfConnection:(id)arg1 withTimeout:(double)arg2 onCellularNetwork:(_Bool)arg3 onMeasured:(CDUnknownBlockType)arg4 onFailed:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)measurementSucceeded:(int)arg1;
- (void)processMeasurements:(_Bool)arg1;
- (void)failedWithMessage:(id)arg1;
- (void)cancel;
- (void)onTimeout;
- (void)start;

@end

