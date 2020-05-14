//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButtonStyle, GLUEViewAnimator, NSMutableDictionary, NSString;

@interface GLUEButton : UIButton <GLUEStyleable>
{
    GLUEButtonStyle *_glueStyle;
    GLUEViewAnimator *_animator;
    NSMutableDictionary *_accessibilityTitles;
}

+ (id)retryActionButton;
+ (id)playActionButton;
+ (id)shuffleActionButton;
@property(retain, nonatomic) NSMutableDictionary *accessibilityTitles; // @synthesize accessibilityTitles=_accessibilityTitles;
@property(retain, nonatomic) GLUEViewAnimator *animator; // @synthesize animator=_animator;
@property(copy, nonatomic) GLUEButtonStyle *glueStyle; // @synthesize glueStyle=_glueStyle;
- (void).cxx_destruct;
- (void)bounce;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)accessibilityLabel;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)animateToHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateStyleForState;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTextWithImageButtonStyle:(id)arg1;
- (void)setTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
