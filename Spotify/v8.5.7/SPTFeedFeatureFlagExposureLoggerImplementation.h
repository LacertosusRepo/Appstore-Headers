//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeedFeatureFlagExposureLogger-Protocol.h"

@class NSString, SPTFeedFeatureFlagsManager;

@interface SPTFeedFeatureFlagExposureLoggerImplementation : NSObject <SPTFeedFeatureFlagExposureLogger>
{
    SPTFeedFeatureFlagsManager *_featureFlagsManager;
}

@property(retain, nonatomic) SPTFeedFeatureFlagsManager *featureFlagsManager; // @synthesize featureFlagsManager=_featureFlagsManager;
- (void).cxx_destruct;
- (void)logFeedFeatureFlagExposure;
- (id)initWithFeatureFlagsManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

