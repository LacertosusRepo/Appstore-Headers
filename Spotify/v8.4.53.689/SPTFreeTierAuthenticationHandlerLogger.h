//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTFreeTierAuthenticationHandlerLogger : NSObject
{
    id <SPTAdjustUserTrackerProtocol> _adjustTracker;
}

@property(retain, nonatomic) id <SPTAdjustUserTrackerProtocol> adjustTracker; // @synthesize adjustTracker=_adjustTracker;
- (void).cxx_destruct;
- (void)logUserDidAuthFromScreen:(unsigned long long)arg1;
- (void)logUserDidSignup;
- (id)initWithAdjustTracker:(id)arg1;

@end

