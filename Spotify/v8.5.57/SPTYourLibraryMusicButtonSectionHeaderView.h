//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, NSLayoutConstraint, NSString, SPTYourLibraryMusicButtonSectionHeaderViewStyle;

@interface SPTYourLibraryMusicButtonSectionHeaderView : UIView <GLUEStyleable>
{
    GLUEButton *_sectionHeaderButton;
    SPTYourLibraryMusicButtonSectionHeaderViewStyle *_style;
    NSLayoutConstraint *_buttonTopConstraint;
    NSLayoutConstraint *_buttonBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonBottomConstraint; // @synthesize buttonBottomConstraint=_buttonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonTopConstraint; // @synthesize buttonTopConstraint=_buttonTopConstraint;
@property(copy, nonatomic) SPTYourLibraryMusicButtonSectionHeaderViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) GLUEButton *sectionHeaderButton; // @synthesize sectionHeaderButton=_sectionHeaderButton;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

