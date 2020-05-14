//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol GCKRequestTrackerDelegate;

@interface GCKRequestTracker : NSObject
{
    double _timeout;
    long long _requestID;
    double _startTime;
    id <GCKRequestTrackerDelegate> _delegate;
    NSTimer *_timer;
}

@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <GCKRequestTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property double startTime; // @synthesize startTime=_startTime;
@property long long requestID; // @synthesize requestID=_requestID;
@property double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (_Bool)isTracking;
- (void)timerDidFire;
- (_Bool)cancelIfTracking:(long long)arg1;
- (_Bool)clearIfTracking:(long long)arg1;
- (_Bool)clear;
- (void)track:(long long)arg1;
- (id)init;
- (id)initWithTimeout:(double)arg1;

@end

