//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTPhoneNumberSignupInputFieldStackViewDelegate-Protocol.h"

@class GLUEButton, GLUEGradientView, GLUELabel, NSString, SPTPhoneNumberSignupInputFieldStackView, SPTPhoneNumberSignupValidateOtpContainerViewStyle, UIScrollView;
@protocol GLUEStyle, SPTPhoneNumberSignupValidateOtpContainerViewDelegate;

@interface SPTPhoneNumberSignupValidateOtpContainerView : UIView <SPTPhoneNumberSignupInputFieldStackViewDelegate, GLUEStyleable>
{
    UIScrollView *_scrollView;
    GLUEGradientView *_backgroundGradientView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUEButton *_nextButton;
    GLUEButton *_resendSMSButton;
    GLUEButton *_editPhoneNumberButton;
    id <SPTPhoneNumberSignupValidateOtpContainerViewDelegate> _delegate;
    SPTPhoneNumberSignupValidateOtpContainerViewStyle<GLUEStyle> *_style;
    SPTPhoneNumberSignupInputFieldStackView *_inputFieldStackView;
}

@property(retain, nonatomic) SPTPhoneNumberSignupInputFieldStackView *inputFieldStackView; // @synthesize inputFieldStackView=_inputFieldStackView;
@property(retain, nonatomic) SPTPhoneNumberSignupValidateOtpContainerViewStyle<GLUEStyle> *style; // @synthesize style=_style;
@property(readonly, nonatomic) __weak id <SPTPhoneNumberSignupValidateOtpContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GLUEButton *editPhoneNumberButton; // @synthesize editPhoneNumberButton=_editPhoneNumberButton;
@property(retain, nonatomic) GLUEButton *resendSMSButton; // @synthesize resendSMSButton=_resendSMSButton;
@property(retain, nonatomic) GLUEButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didUpdateInputField;
@property(readonly, nonatomic) NSString *completePassword;
- (_Bool)becomeFirstResponder;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)subscribeToKeyboardNotifications;
- (void)setupDelegate;
- (void)setupEditPhoneNumberButton;
- (void)setupResendSMSButton;
- (void)setupNextButton;
- (void)setupSubtitleLabelWithNumberOfInputs:(unsigned long long)arg1;
- (void)setupCodeInputStackViewWithNumberOfInputs:(unsigned long long)arg1;
- (void)setupTitleLabelWithPhoneNumber:(id)arg1;
- (void)setupScrollView;
- (void)setupBackgroundView;
- (id)initWithTheme:(id)arg1 numberOfInputs:(unsigned long long)arg2 phoneNumber:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

