//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GLUEStatefulView.h"

#import "GLUEContextMenuRow.h"

@class GLUEAccessoryIconView, GLUELabel, NSLayoutConstraint, NSString, SPTLayoutConstraintBuilder;

@interface GLUEContextMenuRowView : GLUEStatefulView <GLUEContextMenuRow>
{
    GLUELabel *_titleLabel;
    long long _icon;
    SPTLayoutConstraintBuilder *_containerLayout;
    GLUEStatefulView *_contextMenuContentView;
    GLUEAccessoryIconView *_accessoryIconView;
    NSLayoutConstraint *_contentToLeadingAccessoryViewConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentToLeadingAccessoryViewConstraint; // @synthesize contentToLeadingAccessoryViewConstraint=_contentToLeadingAccessoryViewConstraint;
@property(retain, nonatomic) GLUEAccessoryIconView *accessoryIconView; // @synthesize accessoryIconView=_accessoryIconView;
@property(retain, nonatomic) GLUEStatefulView *contextMenuContentView; // @synthesize contextMenuContentView=_contextMenuContentView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *containerLayout; // @synthesize containerLayout=_containerLayout;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)applyStateStyle:(id)arg1;
- (id)accessibilityLabel;
- (_Bool)shouldGroupAccessibilityChildren;
- (void)replaceViewConstraints;
- (void)removeViewConstraints;
- (void)updateConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly) Class superclass;

@end

