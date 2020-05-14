//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString;

@interface SPTLoginSlideUpDefaultDialogView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_messageLabel;
    GLUEButton *_mainActionButton;
    GLUEButton *_secondaryActionButton;
    UIView *_contentView;
    NSLayoutConstraint *_contentHorizontalMargin;
    NSLayoutConstraint *_titleTopGap;
    NSLayoutConstraint *_messageTopGap;
    NSLayoutConstraint *_mainActionButtonTopGap;
    NSLayoutConstraint *_secondaryActionButtonTopGap;
    NSLayoutConstraint *_secondaryActionButtonBottomGap;
}

@property(retain, nonatomic) NSLayoutConstraint *secondaryActionButtonBottomGap; // @synthesize secondaryActionButtonBottomGap=_secondaryActionButtonBottomGap;
@property(retain, nonatomic) NSLayoutConstraint *secondaryActionButtonTopGap; // @synthesize secondaryActionButtonTopGap=_secondaryActionButtonTopGap;
@property(retain, nonatomic) NSLayoutConstraint *mainActionButtonTopGap; // @synthesize mainActionButtonTopGap=_mainActionButtonTopGap;
@property(retain, nonatomic) NSLayoutConstraint *messageTopGap; // @synthesize messageTopGap=_messageTopGap;
@property(retain, nonatomic) NSLayoutConstraint *titleTopGap; // @synthesize titleTopGap=_titleTopGap;
@property(retain, nonatomic) NSLayoutConstraint *contentHorizontalMargin; // @synthesize contentHorizontalMargin=_contentHorizontalMargin;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) GLUEButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
@property(readonly, nonatomic) GLUEButton *mainActionButton; // @synthesize mainActionButton=_mainActionButton;
@property(readonly, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1 ignoreMessageLabelStyle:(_Bool)arg2;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
