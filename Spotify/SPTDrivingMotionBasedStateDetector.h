//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDrivingMotionManagerDelegate.h"
#import "SPTDrivingStateDetector.h"

@class NSArray, NSNotificationCenter, NSString, NSTimer, SPTDrivingMotionDetectionLoader, SPTDrivingMotionManager, SPTDrivingState, SPTObserverManager;

@interface SPTDrivingMotionBasedStateDetector : NSObject <SPTDrivingMotionManagerDelegate, SPTDrivingStateDetector>
{
    _Bool _observing;
    _Bool _triggeredManually;
    id <SPTDrivingMotionBasedStateDetectorDelegate> _delegate;
    SPTDrivingMotionManager *_motionManager;
    SPTDrivingMotionDetectionLoader *_dataLoader;
    NSNotificationCenter *_notificationCenter;
    double _recordingDelay;
    SPTObserverManager *_observerProxy;
    SPTDrivingState *_state;
    NSArray *_pendingRecordingResults;
    NSTimer *_delayedRecordingTimer;
}

@property(retain, nonatomic) NSTimer *delayedRecordingTimer; // @synthesize delayedRecordingTimer=_delayedRecordingTimer;
@property(nonatomic, getter=isTriggeredManually) _Bool triggeredManually; // @synthesize triggeredManually=_triggeredManually;
@property(retain, nonatomic) NSArray *pendingRecordingResults; // @synthesize pendingRecordingResults=_pendingRecordingResults;
@property(retain, nonatomic) SPTDrivingState *state; // @synthesize state=_state;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(readonly, nonatomic) SPTObserverManager *observerProxy; // @synthesize observerProxy=_observerProxy;
@property(readonly, nonatomic) double recordingDelay; // @synthesize recordingDelay=_recordingDelay;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTDrivingMotionDetectionLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTDrivingMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) __weak id <SPTDrivingMotionBasedStateDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)motionManager:(id)arg1 didFinishBatchRecordingWithResults:(id)arg2;
- (void)predictDrivingStateForMotionData:(id)arg1;
- (void)startRecordingSensorData;
- (void)delayedRecordingTimerFired;
- (void)audioRouteChanged:(id)arg1;
- (void)updateWithState:(id)arg1;
@property(readonly, nonatomic) SPTDrivingState *currentState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)endObservingDrivingState;
- (void)beginObservingDrivingState;
- (void)startSamplingSensorsManually;
- (id)initWithMotionManager:(id)arg1 dataLoader:(id)arg2 notificationCenter:(id)arg3 recordingDelay:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

