//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString;

@interface SPTLanguageOnboardingHeaderView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_subtitleLabelTopConstraint;
    NSLayoutConstraint *_subtitleLabelBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelBottomConstraint; // @synthesize subtitleLabelBottomConstraint=_subtitleLabelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelTopConstraint; // @synthesize subtitleLabelTopConstraint=_subtitleLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setUpConstraints;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

