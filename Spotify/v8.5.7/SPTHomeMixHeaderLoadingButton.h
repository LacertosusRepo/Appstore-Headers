//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEButton.h"

@class NSLayoutConstraint, NSString, UIView;
@protocol GLUEAnimationLoading><GLUEAnimationControlling><GLUEAnimationLottieStyling;

@interface SPTHomeMixHeaderLoadingButton : GLUEButton
{
    unsigned long long _currentState;
    NSString *_initialTitle;
    double _initialHeight;
    NSLayoutConstraint *_widthConstraint;
    struct UIView *_spinnerAnimationView;
}

@property(nonatomic) __weak UIView<GLUEAnimationLoading><GLUEAnimationControlling><GLUEAnimationLottieStyling> *spinnerAnimationView; // @synthesize spinnerAnimationView=_spinnerAnimationView;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) double initialHeight; // @synthesize initialHeight=_initialHeight;
@property(copy, nonatomic) NSString *initialTitle; // @synthesize initialTitle=_initialTitle;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (void)removeSpinnerAnimationView;
- (void)addSpinnerAnimationView;
- (void)restoreState;
- (void)saveCurrentState;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

