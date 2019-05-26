//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol SPTNowPlayingIgnoringGestureRecognizerDelegate;

@interface SPTNowPlayingIgnoringGestureRecognizer : UIGestureRecognizer
{
    _Bool _idle;
    id <SPTNowPlayingIgnoringGestureRecognizerDelegate> _idleDelegate;
}

@property(nonatomic, getter=isIdle) _Bool idle; // @synthesize idle=_idle;
@property(nonatomic) __weak id <SPTNowPlayingIgnoringGestureRecognizerDelegate> idleDelegate; // @synthesize idleDelegate=_idleDelegate;
- (void).cxx_destruct;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cancelIdleCountdown;
- (void)startIdleCountdown;
- (void)endIdlePeriod:(_Bool)arg1;
- (void)beginIdlePeriod:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
