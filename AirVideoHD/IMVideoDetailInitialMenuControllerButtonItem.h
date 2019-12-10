//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMVideoDetailPhoneMenuControllerItem.h"

@class IMLayout, NSString, UIButton, UILabel, UIView;

@interface IMVideoDetailInitialMenuControllerButtonItem : IMVideoDetailPhoneMenuControllerItem
{
    UILabel *titleLabel;
    UILabel *titleLabelSelected;
    UILabel *valueLabel;
    UIButton *backButton;
    UIView *separator;
    double initialAnimationDelay;
    IMLayout *layout;
    double height;
    double heightSelected;
    double margin;
    double valueLabelOffset;
}

@property(nonatomic) double valueLabelOffset; // @synthesize valueLabelOffset;
@property(nonatomic) double margin; // @synthesize margin;
@property(nonatomic) double heightSelected; // @synthesize heightSelected;
@property(nonatomic) double height; // @synthesize height;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setPressed:(_Bool)arg1;
- (_Bool)touchInView:(id)arg1;
- (void)performDeselectionAnimation;
- (void)performSelectionAnimation;
- (void)itemDidChange;
- (void)updateAlpha;
- (void)layoutSubviews;
- (void)performInitialAnimation;
@property(retain, nonatomic) NSString *value;
- (id)initWithTitle:(id)arg1 initialAnimationDelay:(double)arg2;

@end
