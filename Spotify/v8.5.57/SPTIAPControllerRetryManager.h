//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSDate, NSString, NSTimer;
@protocol SPTIAPControllerRetryManagerDelegate, SPTOfflineModeState;

@interface SPTIAPControllerRetryManager : NSObject <SPTOfflineModeStateObserver>
{
    id <SPTIAPControllerRetryManagerDelegate> _delegate;
    NSDate *_retryDate;
    NSTimer *_retryTimer;
    double _timeInterval;
    id <SPTOfflineModeState> _offlineState;
    double _initialDelay;
    double _maximumDelay;
    double _backoffMultiplier;
}

@property(nonatomic) double backoffMultiplier; // @synthesize backoffMultiplier=_backoffMultiplier;
@property(nonatomic) double maximumDelay; // @synthesize maximumDelay=_maximumDelay;
@property(nonatomic) double initialDelay; // @synthesize initialDelay=_initialDelay;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(copy, nonatomic) NSDate *retryDate; // @synthesize retryDate=_retryDate;
@property(nonatomic) __weak id <SPTIAPControllerRetryManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)retryDateForCurrentTimeInterval;
- (double)nextTimeInterval;
- (void)notifyAndPrepareForNextIteration;
- (void)notifyIfRequirementsAreMet;
- (void)timerDidFire:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)resetRetryTimer;
- (void)startRetryTimer;
- (void)dealloc;
- (id)initWithOfflineState:(id)arg1;
- (id)initWithOfflineState:(id)arg1 initialDelay:(double)arg2 backoffMultiplier:(double)arg3 maximumDelay:(double)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

