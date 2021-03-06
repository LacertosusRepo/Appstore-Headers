//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, SPTSnackbarView, UIView;

@interface SPTSnackbarViewPresenter : NSObject
{
    _Bool _isAnimationInProgress;
    UIView *_containerView;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    SPTSnackbarView *_currentPresentedSnackbar;
    double _snackBarHeight;
}

@property(nonatomic) double snackBarHeight; // @synthesize snackBarHeight=_snackBarHeight;
@property(nonatomic) _Bool isAnimationInProgress; // @synthesize isAnimationInProgress=_isAnimationInProgress;
@property(nonatomic) __weak SPTSnackbarView *currentPresentedSnackbar; // @synthesize currentPresentedSnackbar=_currentPresentedSnackbar;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (_Bool)animationView:(id)arg1 shouldHandleTouchAtPoint:(struct CGPoint)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)runHorizontalAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)runVerticalAnimationWithBottomConstant:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runVerticalAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)hideSnackbarWithAnimatinType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideSnackbarWithSwipeDirection:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideSnackbarWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupSnackbarViewConstraints;
- (void)showSnackbarView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContainerView:(id)arg1;

@end

