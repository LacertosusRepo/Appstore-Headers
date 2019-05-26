//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEButton.h"

@class NSLayoutConstraint, UIView;
@protocol GLUEStatefulAnimationLoading><GLUEStatefulAnimationControlling;

@interface GLUEButtonAnimatable : GLUEButton
{
    struct UIView *_animationView;
    NSLayoutConstraint *_animationWidthConstraint;
    NSLayoutConstraint *_animationHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *animationHeightConstraint; // @synthesize animationHeightConstraint=_animationHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *animationWidthConstraint; // @synthesize animationWidthConstraint=_animationWidthConstraint;
@property(readonly, nonatomic) UIView<GLUEStatefulAnimationLoading><GLUEStatefulAnimationControlling> *animationView; // @synthesize animationView=_animationView;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setAnimationSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

