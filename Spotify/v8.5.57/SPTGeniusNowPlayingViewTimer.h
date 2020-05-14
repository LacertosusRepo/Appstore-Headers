//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

@interface SPTGeniusNowPlayingViewTimer : UIView
{
    _Bool _isPaused;
    double _duration;
    NSTimer *_timer;
    double _currentTimeLeft;
    double _lastTimeTick;
    double _angle;
    double _timerSize;
}

@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) double timerSize; // @synthesize timerSize=_timerSize;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) double lastTimeTick; // @synthesize lastTimeTick=_lastTimeTick;
@property(nonatomic) double currentTimeLeft; // @synthesize currentTimeLeft=_currentTimeLeft;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (double)mapValue:(double)arg1 fromRangeWithMin:(double)arg2 max:(double)arg3 ToRangeWithMin:(double)arg4 max:(double)arg5;
- (void)setHidden:(_Bool)arg1;
- (void)resetTimerWithDurationInSeconds:(double)arg1 timeLeft:(double)arg2;
- (void)resetTimerAtTimeInSeconds:(double)arg1;
- (void)resetTimer;
- (void)pauseTimer;
- (void)redrawTimer;
- (void)handleTimer;
- (void)destroyTimer;
- (void)stopAndResetToZero;
- (void)startTimer;
- (void)startTimerWithDurationInSeconds:(double)arg1;
- (id)createArcPath;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithSize:(double)arg1;

@end

