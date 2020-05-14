//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTLoginMagicLinkSentConfirmationViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleHeaderStyle;
    GLUELabelStyle *_upperTextStyle;
    GLUELabelStyle *_textBodyStyle;
    GLUEButtonStyle *_openEmailButtonStyle;
    double _titleTopMargin;
    double _verticalSpacing;
    double _horizontalMargin;
    double _openEmailButtonTopMargin;
    double _upperLabelTopMargin;
    double _lowerLabelTopMargin;
}

@property(nonatomic) double lowerLabelTopMargin; // @synthesize lowerLabelTopMargin=_lowerLabelTopMargin;
@property(nonatomic) double upperLabelTopMargin; // @synthesize upperLabelTopMargin=_upperLabelTopMargin;
@property(nonatomic) double openEmailButtonTopMargin; // @synthesize openEmailButtonTopMargin=_openEmailButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *openEmailButtonStyle; // @synthesize openEmailButtonStyle=_openEmailButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *textBodyStyle; // @synthesize textBodyStyle=_textBodyStyle;
@property(copy, nonatomic) GLUELabelStyle *upperTextStyle; // @synthesize upperTextStyle=_upperTextStyle;
@property(copy, nonatomic) GLUELabelStyle *titleHeaderStyle; // @synthesize titleHeaderStyle=_titleHeaderStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

