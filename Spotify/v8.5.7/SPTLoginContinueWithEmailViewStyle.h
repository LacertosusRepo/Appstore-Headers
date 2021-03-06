//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTLoginContinueWithEmailViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_orLabelStyle;
    GLUEButtonStyle *_signupButtonStyle;
    GLUEButtonStyle *_loginButtonStyle;
    double _titleLabelTopMargin;
    double _titleLabelHorizontalMargin;
    double _titleLabelBottomMargin;
    double _signupButtonTopMargin;
    double _signupButtonBottomMargin;
    double _linesHorizontalMargin;
    double _orLabelHorizontalMargin;
    double _loginButtonTopMargin;
    double _lineViewHeight;
    double _buttonRegularSizeClassWidth;
    double _buttonMinimumHorizontalEdgeMargin;
    double _buttonMaximumHorizontalEdgeMargin;
    UIColor *_lineViewBackgroundColor;
    double _orLabelWidth;
}

@property(nonatomic) double orLabelWidth; // @synthesize orLabelWidth=_orLabelWidth;
@property(copy, nonatomic) UIColor *lineViewBackgroundColor; // @synthesize lineViewBackgroundColor=_lineViewBackgroundColor;
@property(nonatomic) double buttonMaximumHorizontalEdgeMargin; // @synthesize buttonMaximumHorizontalEdgeMargin=_buttonMaximumHorizontalEdgeMargin;
@property(nonatomic) double buttonMinimumHorizontalEdgeMargin; // @synthesize buttonMinimumHorizontalEdgeMargin=_buttonMinimumHorizontalEdgeMargin;
@property(nonatomic) double buttonRegularSizeClassWidth; // @synthesize buttonRegularSizeClassWidth=_buttonRegularSizeClassWidth;
@property(nonatomic) double lineViewHeight; // @synthesize lineViewHeight=_lineViewHeight;
@property(nonatomic) double loginButtonTopMargin; // @synthesize loginButtonTopMargin=_loginButtonTopMargin;
@property(nonatomic) double orLabelHorizontalMargin; // @synthesize orLabelHorizontalMargin=_orLabelHorizontalMargin;
@property(nonatomic) double linesHorizontalMargin; // @synthesize linesHorizontalMargin=_linesHorizontalMargin;
@property(nonatomic) double signupButtonBottomMargin; // @synthesize signupButtonBottomMargin=_signupButtonBottomMargin;
@property(nonatomic) double signupButtonTopMargin; // @synthesize signupButtonTopMargin=_signupButtonTopMargin;
@property(nonatomic) double titleLabelBottomMargin; // @synthesize titleLabelBottomMargin=_titleLabelBottomMargin;
@property(nonatomic) double titleLabelHorizontalMargin; // @synthesize titleLabelHorizontalMargin=_titleLabelHorizontalMargin;
@property(nonatomic) double titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *loginButtonStyle; // @synthesize loginButtonStyle=_loginButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *signupButtonStyle; // @synthesize signupButtonStyle=_signupButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *orLabelStyle; // @synthesize orLabelStyle=_orLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

