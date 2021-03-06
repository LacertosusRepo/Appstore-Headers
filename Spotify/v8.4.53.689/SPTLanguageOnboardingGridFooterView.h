//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUEButton, NSLayoutConstraint, NSString, SPTLanguageOnboardingPassthroughGradientView;

@interface SPTLanguageOnboardingGridFooterView : UIView <GLUEStyleable>
{
    GLUEButton *_nextButton;
    SPTLanguageOnboardingPassthroughGradientView *_fadeGradientView;
    NSLayoutConstraint *_nextButtonBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *nextButtonBottomConstraint; // @synthesize nextButtonBottomConstraint=_nextButtonBottomConstraint;
@property(readonly, nonatomic) SPTLanguageOnboardingPassthroughGradientView *fadeGradientView; // @synthesize fadeGradientView=_fadeGradientView;
@property(readonly, nonatomic) GLUEButton *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setUpConstraints;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

