//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTPreSignupExperimentationLogger : NSObject
{
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
}

@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
- (void).cxx_destruct;
- (void)logDidFailToFetchFeatureFlags;
- (void)logDidFetchFeatureFlags:(id)arg1 fromCache:(_Bool)arg2;
- (id)initWithAdjustTracker:(id)arg1;

@end
