//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GLUEEntityRow-Protocol.h"

@class GLUEEntityRowView, NSArray, NSLayoutConstraint, NSString, UIView;
@protocol GLUEEntityRowContent;

@interface GLUEEntityRowTableViewCell : UITableViewCell <GLUEEntityRow>
{
    GLUEEntityRowView *_rowView;
    NSArray *_leadingAccessoryLayoutConstraints;
    NSLayoutConstraint *_leadingAccessoryViewEditingConstraint;
    NSLayoutConstraint *_rowViewNormalLeadingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *rowViewNormalLeadingConstraint; // @synthesize rowViewNormalLeadingConstraint=_rowViewNormalLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingAccessoryViewEditingConstraint; // @synthesize leadingAccessoryViewEditingConstraint=_leadingAccessoryViewEditingConstraint;
@property(copy, nonatomic) NSArray *leadingAccessoryLayoutConstraints; // @synthesize leadingAccessoryLayoutConstraints=_leadingAccessoryLayoutConstraints;
@property(readonly, nonatomic) GLUEEntityRowView *rowView; // @synthesize rowView=_rowView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) unsigned long long state;
@property(retain, nonatomic) UIView *trailingAccessoryView;
@property(retain, nonatomic) UIView<GLUEEntityRowContent> *entityContentView;
@property(retain, nonatomic) UIView *leadingAccessoryView;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

