//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLoginLoadingView.h"

#import "GLUEStyleable-Protocol.h"
#import "SPTSignupAnimatableViewProtocol-Protocol.h"

@class GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, SPTLoginFormScrollView, SPTLoginInputFormView, SPTLoginLoadingActionButton, SPTSignupTermsAndPolicyView, UIView;

@interface SPTSignupStepThreeView : SPTLoginLoadingView <GLUEStyleable, SPTSignupAnimatableViewProtocol>
{
    NSString *_transitionContextViewKey;
    SPTLoginLoadingActionButton *_submitButton;
    GLUELabel *_titleLabel;
    SPTLoginInputFormView *_formView;
    SPTSignupTermsAndPolicyView *_termsView;
    GLUEGradientView *_backgroundGradientView;
    SPTLoginFormScrollView *_scrollView;
    UIView *_contentView;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_titleLabelEdgeMargin;
    NSLayoutConstraint *_formViewTopMargin;
    NSLayoutConstraint *_formViewHorizontalMargin;
    NSLayoutConstraint *_submitButtonTopMargin;
    NSLayoutConstraint *_termsViewMargin;
    NSLayoutConstraint *_contentViewBottomMargin;
    double _animatableContentViewOriginalX;
}

@property(nonatomic) double animatableContentViewOriginalX; // @synthesize animatableContentViewOriginalX=_animatableContentViewOriginalX;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomMargin; // @synthesize contentViewBottomMargin=_contentViewBottomMargin;
@property(retain, nonatomic) NSLayoutConstraint *termsViewMargin; // @synthesize termsViewMargin=_termsViewMargin;
@property(retain, nonatomic) NSLayoutConstraint *submitButtonTopMargin; // @synthesize submitButtonTopMargin=_submitButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewHorizontalMargin; // @synthesize formViewHorizontalMargin=_formViewHorizontalMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewTopMargin; // @synthesize formViewTopMargin=_formViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelEdgeMargin; // @synthesize titleLabelEdgeMargin=_titleLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTLoginFormScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyView *termsView; // @synthesize termsView=_termsView;
@property(readonly, nonatomic) SPTLoginInputFormView *formView; // @synthesize formView=_formView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)submitButton;
@property(retain, nonatomic) NSString *transitionContextViewKey; // @synthesize transitionContextViewKey=_transitionContextViewKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *animatableContentView;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
