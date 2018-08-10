//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPercentDrivenInteractiveTransition.h"

#import "UIViewControllerAnimatedTransitioning.h"
#import "YTBaseAnimatorStatus.h"

@class NSString, UIView;

@interface YTReelWatchDismissAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, YTBaseAnimatorStatus>
{
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
    struct CGRect _interactiveFinalFrame;
    UIView *_backdropView;
    id <YTReelWatchTransitionItem> _reelsWatchTransitionItemView;
    UIView *_sourceView;
    id <UIViewControllerContextTransitioning> _transitionContext;
    double _percentComplete;
    _Bool _isAnimating;
    _Bool _shouldCancelTransition;
    _Bool _shouldFinishInteraction;
}

- (void).cxx_destruct;
- (struct CGRect)portraitContentFrameInSize:(struct CGSize)arg1;
- (void)setupAnimationWithContext:(id)arg1;
- (struct CGAffineTransform)dismissTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;
- (id)avatarImageViewSnapshot:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (_Bool)isAnimating;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

