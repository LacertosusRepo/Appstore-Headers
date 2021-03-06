//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, UIView;

@interface GLUEViewAnimator : NSObject
{
    UIView *_animatedView;
    CALayer *_animatedLayer;
    double _pressedScaleFactor;
    double _restoreAnimationDuration;
}

@property(nonatomic) double restoreAnimationDuration; // @synthesize restoreAnimationDuration=_restoreAnimationDuration;
@property(nonatomic) double pressedScaleFactor; // @synthesize pressedScaleFactor=_pressedScaleFactor;
@property(retain, nonatomic) CALayer *animatedLayer; // @synthesize animatedLayer=_animatedLayer;
@property(readonly, nonatomic) __weak UIView *animatedView; // @synthesize animatedView=_animatedView;
- (void).cxx_destruct;
- (void)restoreAnimatedViewWithDelay:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startAnimationAndRestoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)startAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)viewWasAnimated;
- (id)initWithView:(id)arg1;

@end

