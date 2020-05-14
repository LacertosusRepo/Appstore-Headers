//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSLayoutConstraint, NSString, SPTFreeTierPlaylistButtonSectionHeaderViewStyle;

@interface SPTFreeTierPlaylistButtonSectionHeaderView : UIView <GLUEStyleable>
{
    GLUEButton *_sectionHeaderButton;
    GLUELabel *_educationalText;
    SPTFreeTierPlaylistButtonSectionHeaderViewStyle *_style;
    NSLayoutConstraint *_educationalTextTopEdgeConstraint;
    NSLayoutConstraint *_educationalTextLeftEdgeConstraint;
    NSLayoutConstraint *_educationalTextRightEdgeConstraint;
    NSLayoutConstraint *_sectionHeaderButtonTopConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *sectionHeaderButtonTopConstraint; // @synthesize sectionHeaderButtonTopConstraint=_sectionHeaderButtonTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *educationalTextRightEdgeConstraint; // @synthesize educationalTextRightEdgeConstraint=_educationalTextRightEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *educationalTextLeftEdgeConstraint; // @synthesize educationalTextLeftEdgeConstraint=_educationalTextLeftEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *educationalTextTopEdgeConstraint; // @synthesize educationalTextTopEdgeConstraint=_educationalTextTopEdgeConstraint;
@property(copy, nonatomic) SPTFreeTierPlaylistButtonSectionHeaderViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) GLUELabel *educationalText; // @synthesize educationalText=_educationalText;
@property(retain, nonatomic) GLUEButton *sectionHeaderButton; // @synthesize sectionHeaderButton=_sectionHeaderButton;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

