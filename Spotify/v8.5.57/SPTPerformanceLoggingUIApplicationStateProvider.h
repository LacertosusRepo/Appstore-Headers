//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPerformanceLoggingApplicationStateProvider-Protocol.h"

@class NSString, UIApplication;

@interface SPTPerformanceLoggingUIApplicationStateProvider : NSObject <SPTPerformanceLoggingApplicationStateProvider>
{
    UIApplication *_application;
}

@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentApplicationState;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

