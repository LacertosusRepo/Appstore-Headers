//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDrivingState;

@protocol SPTDrivingStateDetector <NSObject>
@property(readonly, nonatomic) SPTDrivingState *currentState;
- (void)removeObserver:(id <SPTDrivingStateObserver>)arg1;
- (void)addObserver:(id <SPTDrivingStateObserver>)arg1;
- (void)endObservingDrivingState;
- (void)beginObservingDrivingState;
@end

