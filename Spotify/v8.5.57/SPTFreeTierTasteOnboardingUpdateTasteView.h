//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, UIActivityIndicatorView, UILayoutGuide;

@interface SPTFreeTierTasteOnboardingUpdateTasteView : UIView <GLUEStyleable>
{
    GLUELabel *_messageLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    UILayoutGuide *_bottomSpacerGuide;
    NSLayoutConstraint *_bottomSpacerGuideBottomConstraint;
    NSLayoutConstraint *_messageLabelLeadingConstraint;
    NSLayoutConstraint *_messageLabelTrailingConstraint;
    NSLayoutConstraint *_messageLabelTopConstraint;
    NSLayoutConstraint *_messageLabelCenterYConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *messageLabelCenterYConstraint; // @synthesize messageLabelCenterYConstraint=_messageLabelCenterYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageLabelTopConstraint; // @synthesize messageLabelTopConstraint=_messageLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageLabelTrailingConstraint; // @synthesize messageLabelTrailingConstraint=_messageLabelTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageLabelLeadingConstraint; // @synthesize messageLabelLeadingConstraint=_messageLabelLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bottomSpacerGuideBottomConstraint; // @synthesize bottomSpacerGuideBottomConstraint=_bottomSpacerGuideBottomConstraint;
@property(retain, nonatomic) UILayoutGuide *bottomSpacerGuide; // @synthesize bottomSpacerGuide=_bottomSpacerGuide;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)activateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

