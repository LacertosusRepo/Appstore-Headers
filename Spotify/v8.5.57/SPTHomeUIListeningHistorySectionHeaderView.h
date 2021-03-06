//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEButton, GLUELabel;
@protocol GLUETheme;

@interface SPTHomeUIListeningHistorySectionHeaderView : UIView
{
    GLUEButton *_sectionHeaderButton;
    id <GLUETheme> _theme;
    GLUELabel *_sectionHeaderLabel;
}

+ (double)preferredHeightForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUELabel *sectionHeaderLabel; // @synthesize sectionHeaderLabel=_sectionHeaderLabel;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) GLUEButton *sectionHeaderButton; // @synthesize sectionHeaderButton=_sectionHeaderButton;
- (void).cxx_destruct;
- (id)constraintsForSectionHeaderButton:(id)arg1;
- (void)constraintSectionHeaderButton:(id)arg1;
- (id)constraintsForSectionHeaderLabel:(id)arg1;
- (void)constrainSectionHeaderLabel:(id)arg1;
- (id)sectionHeaderLabelStyle;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

