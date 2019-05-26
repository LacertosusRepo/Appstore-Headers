//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSString, SPTSocialListeningSessionScannableView, UIActivityIndicatorView, UIStackView, UITableView;

@interface SPTSocialListeningSessionCardView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_descriptionLabel;
    SPTSocialListeningSessionScannableView *_scannableView;
    GLUELabel *_scanInstructionsLabel;
    GLUEButton *_tryAgainButton;
    GLUEButton *_scanCodeButton;
    GLUEButton *_leaveSessionButton;
    UIActivityIndicatorView *_activityIndicatorView;
    UITableView *_participantsTableView;
    UIView *_backgroundView;
    UIStackView *_stackView;
    GLUELabel *_privacyDisclaimerLabel;
}

@property(readonly, nonatomic) GLUELabel *privacyDisclaimerLabel; // @synthesize privacyDisclaimerLabel=_privacyDisclaimerLabel;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UITableView *participantsTableView; // @synthesize participantsTableView=_participantsTableView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) GLUEButton *leaveSessionButton; // @synthesize leaveSessionButton=_leaveSessionButton;
@property(readonly, nonatomic) GLUEButton *scanCodeButton; // @synthesize scanCodeButton=_scanCodeButton;
@property(readonly, nonatomic) GLUEButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(readonly, nonatomic) GLUELabel *scanInstructionsLabel; // @synthesize scanInstructionsLabel=_scanInstructionsLabel;
@property(readonly, nonatomic) SPTSocialListeningSessionScannableView *scannableView; // @synthesize scannableView=_scannableView;
@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (void)setupPrivacyDisclaimerLabel;
- (void)setupParticipantsTableView;
- (void)setupLeaveSessionButton;
- (void)setupScanCodeButton;
- (void)setupScanInstructionsLabel;
- (void)setupTryAgainButton;
- (void)setupActivityIndicatorView;
- (void)setupScannableView;
- (void)setupDescriptionLabel;
- (void)setupTitleLabel;
- (void)setupStackView;
- (void)setupBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

