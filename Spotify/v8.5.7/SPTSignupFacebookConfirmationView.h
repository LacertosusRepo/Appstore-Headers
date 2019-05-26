//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLoginLoadingView.h"

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUEGradientView, GLUEImageView, GLUELabel, NSArray, NSLayoutConstraint, NSString, SPTLoginLoadingActionButton, SPTSignupTermsAndPolicyView, UIScrollView, UIStackView, UIView;

@interface SPTSignupFacebookConfirmationView : SPTLoginLoadingView <GLUEStyleable>
{
    SPTLoginLoadingActionButton *_submitButton;
    GLUEImageView *_profilePicture;
    GLUELabel *_titleHeader;
    GLUELabel *_textBody;
    GLUELabel *_separatorLabel;
    GLUEButton *_loginButton;
    SPTSignupTermsAndPolicyView *_termsView;
    UIScrollView *_scrollView;
    GLUEGradientView *_backgroundGradientView;
    UIStackView *_separatorView;
    UIView *_separatorLeftLine;
    UIView *_separatorRightLine;
    UIView *_contentView;
    NSArray *_profilePictureSizeConstraints;
    NSLayoutConstraint *_profilePictureTopMarginConstraint;
    NSLayoutConstraint *_titleHeaderTopMarginConstraint;
    NSLayoutConstraint *_textBodyTopMarginConstraint;
    NSLayoutConstraint *_createButtonTopMarginConstraint;
    NSLayoutConstraint *_separatorViewHorizontalMarginConstraint;
    NSLayoutConstraint *_separatorRightLineHeightConstraint;
    NSLayoutConstraint *_separatorLeftLineHeightConstraint;
    NSLayoutConstraint *_separatorViewTopMarginConstraint;
    NSLayoutConstraint *_loginButtonTopMarginConstraint;
    NSLayoutConstraint *_horizontalMarginConstraint;
    NSLayoutConstraint *_termsViewMaxTopMarginConstraint;
    NSLayoutConstraint *_termsViewBottomMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *termsViewBottomMarginConstraint; // @synthesize termsViewBottomMarginConstraint=_termsViewBottomMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *termsViewMaxTopMarginConstraint; // @synthesize termsViewMaxTopMarginConstraint=_termsViewMaxTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *horizontalMarginConstraint; // @synthesize horizontalMarginConstraint=_horizontalMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *loginButtonTopMarginConstraint; // @synthesize loginButtonTopMarginConstraint=_loginButtonTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorViewTopMarginConstraint; // @synthesize separatorViewTopMarginConstraint=_separatorViewTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorLeftLineHeightConstraint; // @synthesize separatorLeftLineHeightConstraint=_separatorLeftLineHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorRightLineHeightConstraint; // @synthesize separatorRightLineHeightConstraint=_separatorRightLineHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *separatorViewHorizontalMarginConstraint; // @synthesize separatorViewHorizontalMarginConstraint=_separatorViewHorizontalMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *createButtonTopMarginConstraint; // @synthesize createButtonTopMarginConstraint=_createButtonTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textBodyTopMarginConstraint; // @synthesize textBodyTopMarginConstraint=_textBodyTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleHeaderTopMarginConstraint; // @synthesize titleHeaderTopMarginConstraint=_titleHeaderTopMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *profilePictureTopMarginConstraint; // @synthesize profilePictureTopMarginConstraint=_profilePictureTopMarginConstraint;
@property(retain, nonatomic) NSArray *profilePictureSizeConstraints; // @synthesize profilePictureSizeConstraints=_profilePictureSizeConstraints;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *separatorRightLine; // @synthesize separatorRightLine=_separatorRightLine;
@property(retain, nonatomic) UIView *separatorLeftLine; // @synthesize separatorLeftLine=_separatorLeftLine;
@property(retain, nonatomic) UIStackView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyView *termsView; // @synthesize termsView=_termsView;
@property(readonly, nonatomic) GLUEButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) GLUELabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(readonly, nonatomic) GLUELabel *textBody; // @synthesize textBody=_textBody;
@property(readonly, nonatomic) GLUELabel *titleHeader; // @synthesize titleHeader=_titleHeader;
@property(readonly, nonatomic) GLUEImageView *profilePicture; // @synthesize profilePicture=_profilePicture;
- (id)submitButton;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutProfilePicture;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

