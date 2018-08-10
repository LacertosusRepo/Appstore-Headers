//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEGradientStyle, GLUEImageStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTArtistNPVTrackModuleViewStyle : NSObject <GLUEStyle>
{
    double _preferredHeight;
    double _biographyToButtonMargin;
    double _cornerRadius;
    UIColor *_backgroundColor;
    GLUEImageStyle *_imageStyle;
    GLUEGradientStyle *_imageGradientStyle;
    GLUELabelStyle *_nameLabelStyle;
    GLUELabelStyle *_biographyLabelStyle;
    GLUELabelStyle *_buttonLabelStyle;
    struct UIEdgeInsets _contentMargins;
}

@property(copy, nonatomic) GLUELabelStyle *buttonLabelStyle; // @synthesize buttonLabelStyle=_buttonLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *biographyLabelStyle; // @synthesize biographyLabelStyle=_biographyLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *nameLabelStyle; // @synthesize nameLabelStyle=_nameLabelStyle;
@property(copy, nonatomic) GLUEGradientStyle *imageGradientStyle; // @synthesize imageGradientStyle=_imageGradientStyle;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double biographyToButtonMargin; // @synthesize biographyToButtonMargin=_biographyToButtonMargin;
@property(nonatomic) struct UIEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

