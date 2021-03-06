//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEGradientStyle, GLUELabelStyle, NSString;

@interface SPTFreeTierRecoverAccountResetPasswordConfirmationViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUELabelStyle *_titleHeaderStyle;
    GLUELabelStyle *_textBodyStyle;
    double _titleTopMargin;
    double _textBodyTopMargin;
    double _imageTopMargin;
    double _horizontalEdgeMargin;
}

@property(nonatomic) double horizontalEdgeMargin; // @synthesize horizontalEdgeMargin=_horizontalEdgeMargin;
@property(nonatomic) double imageTopMargin; // @synthesize imageTopMargin=_imageTopMargin;
@property(nonatomic) double textBodyTopMargin; // @synthesize textBodyTopMargin=_textBodyTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
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

