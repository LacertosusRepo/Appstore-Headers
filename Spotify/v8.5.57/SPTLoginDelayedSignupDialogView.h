//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString, SPTSignupTermsAndPolicyView, UIImageView, UIStackView;

@interface SPTLoginDelayedSignupDialogView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    UIImageView *_logoImageView;
    GLUEButton *_firstButton;
    GLUEButton *_secondButton;
    GLUEButton *_thirdButton;
    SPTSignupTermsAndPolicyView *_termsView;
    UIView *_contentView;
    UIStackView *_buttonStackView;
    UIStackView *_titleStackView;
    NSLayoutConstraint *_contentHorizontalMargin;
    NSLayoutConstraint *_titleStackViewTopGap;
    NSLayoutConstraint *_buttonStackViewGap;
    NSLayoutConstraint *_logoImageHeight;
    NSLayoutConstraint *_termsViewBottomGap;
}

@property(retain, nonatomic) NSLayoutConstraint *termsViewBottomGap; // @synthesize termsViewBottomGap=_termsViewBottomGap;
@property(retain, nonatomic) NSLayoutConstraint *logoImageHeight; // @synthesize logoImageHeight=_logoImageHeight;
@property(retain, nonatomic) NSLayoutConstraint *buttonStackViewGap; // @synthesize buttonStackViewGap=_buttonStackViewGap;
@property(retain, nonatomic) NSLayoutConstraint *titleStackViewTopGap; // @synthesize titleStackViewTopGap=_titleStackViewTopGap;
@property(retain, nonatomic) NSLayoutConstraint *contentHorizontalMargin; // @synthesize contentHorizontalMargin=_contentHorizontalMargin;
@property(retain, nonatomic) UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyView *termsView; // @synthesize termsView=_termsView;
@property(readonly, nonatomic) GLUEButton *thirdButton; // @synthesize thirdButton=_thirdButton;
@property(readonly, nonatomic) GLUEButton *secondButton; // @synthesize secondButton=_secondButton;
@property(readonly, nonatomic) GLUEButton *firstButton; // @synthesize firstButton=_firstButton;
@property(readonly, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)configureConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

