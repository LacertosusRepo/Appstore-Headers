//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class GLUELabel, NSLayoutConstraint, NSString, UIStackView;

@interface SPTFreeTierTasteOnboardingArtistPickerOfflineView : UIView <GLUEStyleable>
{
    UIStackView *_stackView;
    GLUELabel *_titleLabel;
    GLUELabel *_bodyLabel;
    NSLayoutConstraint *_stackViewWidthMarginConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *stackViewWidthMarginConstraint; // @synthesize stackViewWidthMarginConstraint=_stackViewWidthMarginConstraint;
@property(retain, nonatomic) GLUELabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

