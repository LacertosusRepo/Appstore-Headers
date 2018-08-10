//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerTransitioningDelegate.h"
#import "YTSwipePresentInteractiveTransitionDelegate.h"

@class NSString, UIViewController, UIViewController<YTGraftingViewController>, YTInteractionLoggingProxyButton;

@interface YTSwipePresentTransitionManager : NSObject <UIViewControllerTransitioningDelegate, YTSwipePresentInteractiveTransitionDelegate>
{
    UIViewController *_presentedViewController;
    UIViewController *_presentingViewController;
    UIViewController<YTGraftingViewController> *_loggingViewController;
    id <UIViewControllerAnimatedTransitioning> _presentAnimator;
    id <UIViewControllerAnimatedTransitioning> _dismissAnimator;
    id <UIViewControllerInteractiveTransitioning> _presentInteraction;
    id <UIViewControllerInteractiveTransitioning> _dismissInteraction;
    YTInteractionLoggingProxyButton *_swipeProxyButton;
    YTInteractionLoggingProxyButton *_swipeCancelledProxyButton;
}

- (void).cxx_destruct;
- (void)logSwipeForButton:(id)arg1;
- (void)setupLoggingWithViewController:(id)arg1 presentVEType:(int)arg2 cancelledVEType:(int)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (void)didCancelPresentation;
- (void)didCompletePresentation;
- (void)setupSwipeTransitionDelegateForViewController:(id)arg1 fromPresentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

