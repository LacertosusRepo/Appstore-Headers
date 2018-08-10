//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUEImageStyle, GLUELabelStyle, NSString, SPTFreeTierTermsAndPolicyViewStyle, UIColor;

@interface SPTFreeTierSignupFacebookConfirmationViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEImageStyle *_profilePictureStyle;
    GLUELabelStyle *_titleHeaderStyle;
    GLUELabelStyle *_textBodyStyle;
    GLUEButtonStyle *_createButtonStyle;
    GLUEButtonStyle *_loginButtonStyle;
    GLUELabelStyle *_separatorLabelStyle;
    UIColor *_separatorLineBackgroundColor;
    double _profilePictureTopMargin;
    double _titleHeaderTopMargin;
    double _textBodyTopMargin;
    double _horizontalMargin;
    double _createButtonTopMargin;
    double _separatorViewHorizontalMargin;
    double _separatorLineHeight;
    double _separatorViewTopMargin;
    double _separatorViewSpacing;
    double _loginButtonTopMargin;
    SPTFreeTierTermsAndPolicyViewStyle *_termsViewStyle;
    double _termsViewTopMargin;
    double _termsViewBottomMargin;
    struct CGSize _profilePictureSize;
}

@property(nonatomic) double termsViewBottomMargin; // @synthesize termsViewBottomMargin=_termsViewBottomMargin;
@property(nonatomic) double termsViewTopMargin; // @synthesize termsViewTopMargin=_termsViewTopMargin;
@property(copy, nonatomic) SPTFreeTierTermsAndPolicyViewStyle *termsViewStyle; // @synthesize termsViewStyle=_termsViewStyle;
@property(nonatomic) double loginButtonTopMargin; // @synthesize loginButtonTopMargin=_loginButtonTopMargin;
@property(nonatomic) double separatorViewSpacing; // @synthesize separatorViewSpacing=_separatorViewSpacing;
@property(nonatomic) double separatorViewTopMargin; // @synthesize separatorViewTopMargin=_separatorViewTopMargin;
@property(nonatomic) double separatorLineHeight; // @synthesize separatorLineHeight=_separatorLineHeight;
@property(nonatomic) double separatorViewHorizontalMargin; // @synthesize separatorViewHorizontalMargin=_separatorViewHorizontalMargin;
@property(nonatomic) double createButtonTopMargin; // @synthesize createButtonTopMargin=_createButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double textBodyTopMargin; // @synthesize textBodyTopMargin=_textBodyTopMargin;
@property(nonatomic) double titleHeaderTopMargin; // @synthesize titleHeaderTopMargin=_titleHeaderTopMargin;
@property(nonatomic) double profilePictureTopMargin; // @synthesize profilePictureTopMargin=_profilePictureTopMargin;
@property(nonatomic) struct CGSize profilePictureSize; // @synthesize profilePictureSize=_profilePictureSize;
@property(copy, nonatomic) UIColor *separatorLineBackgroundColor; // @synthesize separatorLineBackgroundColor=_separatorLineBackgroundColor;
@property(copy, nonatomic) GLUELabelStyle *separatorLabelStyle; // @synthesize separatorLabelStyle=_separatorLabelStyle;
@property(copy, nonatomic) GLUEButtonStyle *loginButtonStyle; // @synthesize loginButtonStyle=_loginButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *createButtonStyle; // @synthesize createButtonStyle=_createButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *textBodyStyle; // @synthesize textBodyStyle=_textBodyStyle;
@property(copy, nonatomic) GLUELabelStyle *titleHeaderStyle; // @synthesize titleHeaderStyle=_titleHeaderStyle;
@property(copy, nonatomic) GLUEImageStyle *profilePictureStyle; // @synthesize profilePictureStyle=_profilePictureStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

