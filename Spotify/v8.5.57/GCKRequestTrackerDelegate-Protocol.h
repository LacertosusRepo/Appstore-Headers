//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKRequestTracker;

@protocol GCKRequestTrackerDelegate <NSObject>
- (void)requestTracker:(GCKRequestTracker *)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(GCKRequestTracker *)arg1 didTimeOut:(long long)arg2;

@optional
- (void)requestTracker:(GCKRequestTracker *)arg1 didCancel:(long long)arg2;
@end

