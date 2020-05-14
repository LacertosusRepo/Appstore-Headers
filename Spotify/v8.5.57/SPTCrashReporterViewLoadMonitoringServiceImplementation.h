//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashReporterViewLoadMonitoringService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCrashReporterViewLoggerObserver;
@protocol SPTCrashReporterService, SPTPerformanceMetricsService;

@interface SPTCrashReporterViewLoadMonitoringServiceImplementation : NSObject <SPTCrashReporterViewLoadMonitoringService>
{
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    SPTCrashReporterViewLoggerObserver *_observer;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCrashReporterViewLoggerObserver *observer; // @synthesize observer=_observer;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
- (void).cxx_destruct;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
