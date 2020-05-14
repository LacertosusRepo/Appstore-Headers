//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerView.h"

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString;

@interface SPTLoginDelayedSignupBannerView : SPTBannerView <GLUEStyleable>
{
    GLUELabel *_topTitleLabel;
    GLUEButton *_loginButton;
    GLUEButton *_signupButton;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_loginButtonTopMargin;
    NSLayoutConstraint *_signupButtonTopMargin;
    double _signupButtonBottomSpacing;
}

@property(nonatomic) double signupButtonBottomSpacing; // @synthesize signupButtonBottomSpacing=_signupButtonBottomSpacing;
@property(retain, nonatomic) NSLayoutConstraint *signupButtonTopMargin; // @synthesize signupButtonTopMargin=_signupButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *loginButtonTopMargin; // @synthesize loginButtonTopMargin=_loginButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(readonly, nonatomic) GLUEButton *signupButton; // @synthesize signupButton=_signupButton;
@property(readonly, nonatomic) GLUEButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) GLUELabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)topMargin;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)hideUnusedSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

