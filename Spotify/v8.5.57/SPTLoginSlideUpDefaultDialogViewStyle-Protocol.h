//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, UIColor;

@protocol SPTLoginSlideUpDefaultDialogViewStyle <GLUEStyle>
@property(nonatomic) double contentHorizontalMargin;
@property(nonatomic) double secondaryActionButtonBottomMargin;
@property(nonatomic) double secondaryActionButtonTopMargin;
@property(nonatomic) double mainActionButtonTopMargin;
@property(nonatomic) double messageTopMargin;
@property(nonatomic) double titleTopMargin;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(copy, nonatomic) GLUEButtonStyle *secondaryActionButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *mainActionButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle;
@end
