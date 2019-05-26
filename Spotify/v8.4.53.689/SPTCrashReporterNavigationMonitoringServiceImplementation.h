//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCrashReporterNavigationMonitoringService.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext, SPTCrashReporterNavigationMonitoringServiceTransport;

@interface SPTCrashReporterNavigationMonitoringServiceImplementation : NSObject <SPTService, SPTCrashReporterNavigationMonitoringService>
{
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTInstrumentationService> _instrumentationService;
    SPTCrashReporterNavigationMonitoringServiceTransport *_transport;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCrashReporterNavigationMonitoringServiceTransport *transport; // @synthesize transport=_transport;
@property(nonatomic) __weak id <SPTInstrumentationService> instrumentationService; // @synthesize instrumentationService=_instrumentationService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
- (void).cxx_destruct;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
