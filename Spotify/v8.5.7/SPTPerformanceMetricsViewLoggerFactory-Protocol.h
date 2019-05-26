//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTViewLogger, SPTViewLoggerObserver;

@protocol SPTPerformanceMetricsViewLoggerFactory <NSObject>
- (void)removeDefaultObserver:(id <SPTViewLoggerObserver>)arg1;
- (void)addDefaultObserver:(id <SPTViewLoggerObserver>)arg1;
- (id <SPTViewLogger>)createViewLoggerForViewURI:(NSURL *)arg1;
@end

