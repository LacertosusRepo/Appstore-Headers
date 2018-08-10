//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLUEViewAnimator.h"

#import "CAAnimationDelegate.h"

@class CALayer, NSString;

@interface SPTFriendsHomeEntityViewCellPressedAnimator : GLUEViewAnimator <CAAnimationDelegate>
{
    id <GLUETheme> _theme;
    CALayer *_animatedContentLayer;
    double _contentPressedScaleFactor;
    double _pressAnimationDuration;
    double _restoreAnimationDuration;
    long long _runningAnimationCount;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long runningAnimationCount; // @synthesize runningAnimationCount=_runningAnimationCount;
@property(nonatomic) double restoreAnimationDuration; // @synthesize restoreAnimationDuration=_restoreAnimationDuration;
@property(nonatomic) double pressAnimationDuration; // @synthesize pressAnimationDuration=_pressAnimationDuration;
@property(nonatomic) double contentPressedScaleFactor; // @synthesize contentPressedScaleFactor=_contentPressedScaleFactor;
@property(nonatomic) __weak CALayer *animatedContentLayer; // @synthesize animatedContentLayer=_animatedContentLayer;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)contentLayer;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)restoreAnimatedViewWithDelay:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
