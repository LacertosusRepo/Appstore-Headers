//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUELabel, NSLayoutConstraint, NSString;

@interface SPTLanguageOnboardingOfflineView : UIView <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    NSLayoutConstraint *_verticalSpacingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *verticalSpacingConstraint; // @synthesize verticalSpacingConstraint=_verticalSpacingConstraint;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
