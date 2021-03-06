//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivitySessionObserver-Protocol.h"
#import "SPTWatchPlatformApplicationService-Protocol.h"

@class NSArray, NSString, SPTAllocationContext;

@interface SPTWatchPlatformApplicationServiceImplementation : NSObject <SPTWatchConnectivitySessionObserver, SPTWatchPlatformApplicationService>
{
    NSArray *_publishers;
}

+ (id)serviceIdentifier;
@property(copy, nonatomic) NSArray *publishers; // @synthesize publishers=_publishers;
- (void).cxx_destruct;
- (id)watchConnectivityManager;
- (void)sessionReachabilityDidChange:(id)arg1;
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

