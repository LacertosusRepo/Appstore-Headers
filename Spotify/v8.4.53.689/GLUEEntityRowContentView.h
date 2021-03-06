//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEEntityRowContent.h"
#import "GLUEReusable.h"

@class GLUEEntityRowContentStyle, GLUELabel, NSLayoutConstraint, NSString;

@interface GLUEEntityRowContentView : UIView <GLUEEntityRowContent, GLUEReusable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    UIView *_subtitleAccessoryView;
    GLUEEntityRowContentStyle *_style;
    UIView *_containerView;
    UIView *_subtitleAccessoryContainerView;
    NSLayoutConstraint *_titleTopAnchorConstraint;
    NSLayoutConstraint *_titleCenterYAnchorConstraint;
    NSLayoutConstraint *_subtitleToAccessoryViewConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *subtitleToAccessoryViewConstraint; // @synthesize subtitleToAccessoryViewConstraint=_subtitleToAccessoryViewConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleCenterYAnchorConstraint; // @synthesize titleCenterYAnchorConstraint=_titleCenterYAnchorConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTopAnchorConstraint; // @synthesize titleTopAnchorConstraint=_titleTopAnchorConstraint;
@property(retain, nonatomic) UIView *subtitleAccessoryContainerView; // @synthesize subtitleAccessoryContainerView=_subtitleAccessoryContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) GLUEEntityRowContentStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView=_subtitleAccessoryView;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)updateSubtitleConstraints;
- (void)updateTitleConstraints;
- (void)createTitleConstraints;
- (void)createContentLayoutConstraints;
- (void)createConstraints;
- (void)setAccessoryView:(id)arg1 forContainer:(id)arg2;
- (id)accessibilityTextForTitle:(id)arg1 subtitleAccessory:(id)arg2 subtitle:(id)arg3;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)isAccessibilityElement;
- (void)setupLabels;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

