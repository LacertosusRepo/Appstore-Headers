//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMViewControllerTransition-Protocol.h"
#import "IMViewControllerTransitionNotifications-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMInteractiveAnimation, IMPanGestureRecognizer, IMScreenEdgePanGestureRecognizer, IMViewController, NSArray, NSMutableArray, NSPointerArray, NSString, UIColor;
@protocol IMViewStackDelegate;

@interface IMViewStack : UIView <UIGestureRecognizerDelegate, IMViewControllerTransition, IMViewControllerTransitionNotifications>
{
    NSMutableArray *viewControllers;
    _Bool visible;
    _Bool disableLayout;
    IMPanGestureRecognizer *panGestureRecognizer;
    IMScreenEdgePanGestureRecognizer *screenEdgeGestureRecognizer;
    IMInteractiveAnimation *interactiveAnimation;
    UIView *interactiveShadowView;
    NSPointerArray *viewsForLayoutNotification;
    _Bool pushingAnimationInProgress;
    IMViewController *parentController;
    id <IMViewStackDelegate> delegate;
    UIColor *shadowColor;
    UIColor *separatorColor;
    IMViewController *_topViewController;
}

@property(retain, nonatomic) IMViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
@property(nonatomic) __weak id <IMViewStackDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak IMViewController *parentController; // @synthesize parentController;
- (void).cxx_destruct;
- (void)unregisterViewForLayoutNotification:(id)arg1;
- (void)registerViewForLayoutNotification:(id)arg1;
- (void)scheduleAnimation:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool transitionCancelled;
@property(readonly, nonatomic) _Bool interactive;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) _Bool animated;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)panGestureRecognizerAction:(id)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewControllers:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fireControllersDidChange;
- (void)hideSpearatorLine:(id)arg1;
- (void)makeShadowView:(id)arg1 visible:(_Bool)arg2 separatorVisible:(_Bool)arg3;
- (id)addShadowViewToClippingView:(id)arg1;
- (struct CGRect)frameForControllerBelow;
- (void)fireLayoutNotification;
- (void)layoutSubviews;
- (void)initialize;
@property(readonly, nonatomic) NSArray *viewControllers;
- (void)didEndDisappearanceTransition:(id)arg1;
- (void)willBeginDisappearanceTransition:(id)arg1;
- (void)didEndAppearanceTransition:(id)arg1;
- (void)willBeginAppearanceTransition:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

