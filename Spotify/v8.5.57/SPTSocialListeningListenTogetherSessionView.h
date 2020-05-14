//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTSocialListeningSessionViewProtocol-Protocol.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString, SPTListenTogetherBetaLabel, SPTSocialListeningSessionScannableView, UIActivityIndicatorView, UIStackView;
@protocol GLUEAnimationLoading><GLUEAnimationControlling;

@interface SPTSocialListeningListenTogetherSessionView : UIView <SPTSocialListeningSessionViewProtocol>
{
    UIActivityIndicatorView *_activityIndicatorView;
    SPTListenTogetherBetaLabel *_betaLabel;
    GLUELabel *_descriptionLabel;
    UIStackView *_facepileStackView;
    GLUEButton *_leaveSessionButton;
    GLUELabel *_privacyDisclaimerLabel;
    SPTSocialListeningSessionScannableView *_scannableView;
    GLUEButton *_seeListenersButton;
    GLUEButton *_sessionButton;
    GLUELabel *_titleLabel;
    GLUEButton *_tryAgainButton;
    GLUELabel *_tryAgainLabel;
    UIStackView *_headerStackView;
    UIStackView *_stackView;
    struct UIView *_sessionActiveIndicatorView;
    UIView *_descriptionContainerView;
    NSLayoutConstraint *_descriptionLabelToActiveIndicatorConstraint;
    NSLayoutConstraint *_descriptionLabelToContainerConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *descriptionLabelToContainerConstraint; // @synthesize descriptionLabelToContainerConstraint=_descriptionLabelToContainerConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *descriptionLabelToActiveIndicatorConstraint; // @synthesize descriptionLabelToActiveIndicatorConstraint=_descriptionLabelToActiveIndicatorConstraint;
@property(readonly, nonatomic) UIView *descriptionContainerView; // @synthesize descriptionContainerView=_descriptionContainerView;
@property(retain, nonatomic) UIView<GLUEAnimationLoading><GLUEAnimationControlling> *sessionActiveIndicatorView; // @synthesize sessionActiveIndicatorView=_sessionActiveIndicatorView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIStackView *headerStackView; // @synthesize headerStackView=_headerStackView;
@property(readonly, nonatomic) GLUELabel *tryAgainLabel; // @synthesize tryAgainLabel=_tryAgainLabel;
@property(readonly, nonatomic) GLUEButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEButton *sessionButton; // @synthesize sessionButton=_sessionButton;
@property(readonly, nonatomic) GLUEButton *seeListenersButton; // @synthesize seeListenersButton=_seeListenersButton;
@property(readonly, nonatomic) SPTSocialListeningSessionScannableView *scannableView; // @synthesize scannableView=_scannableView;
@property(readonly, nonatomic) GLUELabel *privacyDisclaimerLabel; // @synthesize privacyDisclaimerLabel=_privacyDisclaimerLabel;
@property(readonly, nonatomic) GLUEButton *leaveSessionButton; // @synthesize leaveSessionButton=_leaveSessionButton;
@property(readonly, nonatomic) UIStackView *facepileStackView; // @synthesize facepileStackView=_facepileStackView;
@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) SPTListenTogetherBetaLabel *betaLabel; // @synthesize betaLabel=_betaLabel;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setSessionActiveIndicatorViewVisible:(_Bool)arg1;
- (void)addViewConstraints;
- (void)setupSeeListenersButton;
- (void)setupLeaveSessionButton;
- (void)setupStartSessionButton;
- (void)setupTryAgainButton;
- (void)setupTryAgainLabel;
- (void)setupFacepileStackView;
- (void)setupActivityIndicatorView;
- (void)setupTitleLabel;
- (void)setupDescriptionLabel;
- (void)setupHeaderStackView;
- (void)setupStackView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
