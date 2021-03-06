//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, SPTSignupTermsAndPolicyViewStyle, UIColor;

@interface SPTLoginDelayedSignupDialogViewStyle : NSObject <GLUEStyle>
{
    GLUEButtonStyle *_firstButtonStyle;
    GLUEButtonStyle *_secondButtonStyle;
    GLUEButtonStyle *_thirdButtonStyle;
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleLabelStyle;
    SPTSignupTermsAndPolicyViewStyle *_termsViewStyle;
    UIColor *_headerImageColor;
    double _buttonSpacing;
    double _titleSpacing;
    double _titleTopMargin;
    double _headerImageHeight;
    double _contentHorizontalMargin;
    double _buttonsTopMargin;
    double _termsViewBottomMargin;
}

@property(nonatomic) double termsViewBottomMargin; // @synthesize termsViewBottomMargin=_termsViewBottomMargin;
@property(nonatomic) double buttonsTopMargin; // @synthesize buttonsTopMargin=_buttonsTopMargin;
@property(nonatomic) double contentHorizontalMargin; // @synthesize contentHorizontalMargin=_contentHorizontalMargin;
@property(nonatomic) double headerImageHeight; // @synthesize headerImageHeight=_headerImageHeight;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(nonatomic) double titleSpacing; // @synthesize titleSpacing=_titleSpacing;
@property(nonatomic) double buttonSpacing; // @synthesize buttonSpacing=_buttonSpacing;
@property(copy, nonatomic) UIColor *headerImageColor; // @synthesize headerImageColor=_headerImageColor;
@property(copy, nonatomic) SPTSignupTermsAndPolicyViewStyle *termsViewStyle; // @synthesize termsViewStyle=_termsViewStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) GLUEButtonStyle *thirdButtonStyle; // @synthesize thirdButtonStyle=_thirdButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *secondButtonStyle; // @synthesize secondButtonStyle=_secondButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *firstButtonStyle; // @synthesize firstButtonStyle=_firstButtonStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

