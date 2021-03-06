//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCrashReporterService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCrashReporterImplementation;
@protocol SPTCoreService;

@interface SPTCrashReporterServiceImplementation : NSObject <SPTCrashReporterService>
{
    SPTCrashReporterImplementation *_crashReporter;
    id <SPTCoreService> _coreService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(retain, nonatomic) SPTCrashReporterImplementation *crashReporter; // @synthesize crashReporter=_crashReporter;
- (void).cxx_destruct;
- (id)provideCrashReporter;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

