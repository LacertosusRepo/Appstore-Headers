//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUELabel, NSLayoutConstraint, SPTHomeMixHeaderActionBarAuxViewStyle, SPTHomeMixHeaderActionButton;

@interface SPTHomeMixHeaderActionBarAuxView : UIView
{
    GLUELabel *_label;
    SPTHomeMixHeaderActionButton *_button;
    SPTHomeMixHeaderActionBarAuxViewStyle *_style;
    NSLayoutConstraint *_labelButtonConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *labelButtonConstraint; // @synthesize labelButtonConstraint=_labelButtonConstraint;
@property(copy, nonatomic) SPTHomeMixHeaderActionBarAuxViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) __weak SPTHomeMixHeaderActionButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) __weak GLUELabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)glue_applyStyle:(id)arg1;
- (id)accessibilityElements;
- (id)initWithButton:(id)arg1 label:(id)arg2;

@end

