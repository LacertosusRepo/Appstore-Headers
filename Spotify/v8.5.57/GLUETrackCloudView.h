//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUETrackCloud-Protocol.h"

@class GLUELabel, GLUEViewAnimator, NSLayoutConstraint, NSString, UIView;

@interface GLUETrackCloudView : GLUEStatefulView <GLUETrackCloud>
{
    GLUELabel *_titleLabel;
    UIView *_containerView;
    GLUELabel *_tracksLabel;
    NSLayoutConstraint *_containerViewTopConstraint;
    NSLayoutConstraint *_containerViewLeadingConstraint;
    NSLayoutConstraint *_containerViewTrailingConstraint;
    NSLayoutConstraint *_containerViewBottomConstraint;
    NSLayoutConstraint *_tracksToTitleVerticalConstraint;
    GLUEViewAnimator *_animator;
}

+ (double)heightForTrackCloudWithTitle:(id)arg1 data:(id)arg2 containerWidth:(double)arg3 style:(id)arg4;
+ (double)titleHeightWithString:(id)arg1 style:(id)arg2;
+ (id)trackCloudStringWithData:(id)arg1 containerWidth:(double)arg2 style:(id)arg3;
+ (double)maximumTrackCloudHeight:(id)arg1;
+ (double)heightPerLine:(id)arg1;
+ (id)trackAttributedStringWithStyle:(id)arg1 fromItem:(id)arg2 trackCounter:(unsigned long long)arg3 isLastTrack:(_Bool)arg4;
@property(retain, nonatomic) GLUEViewAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) NSLayoutConstraint *tracksToTitleVerticalConstraint; // @synthesize tracksToTitleVerticalConstraint=_tracksToTitleVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerViewBottomConstraint; // @synthesize containerViewBottomConstraint=_containerViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerViewTrailingConstraint; // @synthesize containerViewTrailingConstraint=_containerViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerViewLeadingConstraint; // @synthesize containerViewLeadingConstraint=_containerViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerViewTopConstraint; // @synthesize containerViewTopConstraint=_containerViewTopConstraint;
@property(retain, nonatomic) GLUELabel *tracksLabel; // @synthesize tracksLabel=_tracksLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateContentWithData:(id)arg1 andContainerWidth:(double)arg2;
- (void)animateToHighlighted:(_Bool)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (id)accessibilityLabel;
- (void)applyStateStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraintsWithStateStyle:(id)arg1;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly) Class superclass;

@end

