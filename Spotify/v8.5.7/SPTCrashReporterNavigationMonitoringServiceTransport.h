//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationTransport-Protocol.h"

@class NSString;
@protocol SPTCrashReporter;

@interface SPTCrashReporterNavigationMonitoringServiceTransport : NSObject <SPTInstrumentationTransport>
{
    id <SPTCrashReporter> _crashReporter;
}

@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
- (void).cxx_destruct;
- (void)send:(id)arg1;
- (id)initWithCrashReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

