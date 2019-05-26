//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUELabelStyle, NSString;

@interface SPTLoginMagicLinkSentConfirmationViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUELabelStyle *_titleHeaderStyle;
    GLUELabelStyle *_textBodyStyle;
    GLUEButtonStyle *_openEmailButtonStyle;
    double _titleTopMargin;
    double _verticalSpacing;
    double _horizontalMargin;
    double _openEmailButtonTopMargin;
    double _lowerLabelTopMargin;
}

@property(nonatomic) double lowerLabelTopMargin; // @synthesize lowerLabelTopMargin=_lowerLabelTopMargin;
@property(nonatomic) double openEmailButtonTopMargin; // @synthesize openEmailButtonTopMargin=_openEmailButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *openEmailButtonStyle; // @synthesize openEmailButtonStyle=_openEmailButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *textBodyStyle; // @synthesize textBodyStyle=_textBodyStyle;
@property(copy, nonatomic) GLUELabelStyle *titleHeaderStyle; // @synthesize titleHeaderStyle=_titleHeaderStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
