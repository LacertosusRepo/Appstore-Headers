//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAbbaFeatureFlagsObserver-Protocol.h"

@class NSArray, NSString;

@interface SPTAbbaFeatureAATestLogger : NSObject <SPTAbbaFeatureFlagsObserver>
{
}

- (void)featureFlagsDidChange:(id)arg1;
- (void)logAATestFlags:(id)arg1;
@property(readonly, nonatomic) NSArray *currentAATestNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

