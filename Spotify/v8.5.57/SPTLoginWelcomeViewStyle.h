//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"
#import "SPTLoginViewWithActionButtonsStyleable-Protocol.h"

@class GLUEGradientStyle, GLUELabelStyle, NSDictionary, NSString, UIColor;

@interface SPTLoginWelcomeViewStyle : NSObject <GLUEStyle, SPTLoginViewWithActionButtonsStyleable>
{
    _Bool _spotifyLogoPlacementTightToTitle;
    NSDictionary *buttonStyles;
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_helpLabelStyle;
    double _titleLabelHorizontalEdgeMargin;
    double _spotifyLogoTopEdgePreferedMargin;
    double _spotifyLogoTopEdgeMinimumMargin;
    double _spotifyLogoTopEdgeMarginPreferedIPad;
    double _spotifyLogoWidth;
    double _mainContainerWidth;
    double _mainContainerIPadWidth;
    double _spotifyLogoHeight;
    double _titleTopMargin;
    double _titleBottomMargin;
    double _helpTextBottomMargin;
    double _buttonRegularSizeClassWidth;
    double _buttonMinimumHorizontalEdgeMargin;
    double _buttonMaximumHorizontalEdgeMargin;
    double _buttonsContainerHorizontalMargin;
    double _buttonsContainerBottomEdgeMargin;
    double _betweenButtonsMargin;
    double _titleMessageVerticalSpacing;
    double _minTitleMessageScale;
    GLUEGradientStyle *_gradientStyle;
    double _spotifyLogoBottomMargin;
}

@property(nonatomic) double spotifyLogoBottomMargin; // @synthesize spotifyLogoBottomMargin=_spotifyLogoBottomMargin;
@property(nonatomic) _Bool spotifyLogoPlacementTightToTitle; // @synthesize spotifyLogoPlacementTightToTitle=_spotifyLogoPlacementTightToTitle;
@property(copy, nonatomic) GLUEGradientStyle *gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(nonatomic) double minTitleMessageScale; // @synthesize minTitleMessageScale=_minTitleMessageScale;
@property(nonatomic) double titleMessageVerticalSpacing; // @synthesize titleMessageVerticalSpacing=_titleMessageVerticalSpacing;
@property(nonatomic) double betweenButtonsMargin; // @synthesize betweenButtonsMargin=_betweenButtonsMargin;
@property(nonatomic) double buttonsContainerBottomEdgeMargin; // @synthesize buttonsContainerBottomEdgeMargin=_buttonsContainerBottomEdgeMargin;
@property(nonatomic) double buttonsContainerHorizontalMargin; // @synthesize buttonsContainerHorizontalMargin=_buttonsContainerHorizontalMargin;
@property(nonatomic) double buttonMaximumHorizontalEdgeMargin; // @synthesize buttonMaximumHorizontalEdgeMargin=_buttonMaximumHorizontalEdgeMargin;
@property(nonatomic) double buttonMinimumHorizontalEdgeMargin; // @synthesize buttonMinimumHorizontalEdgeMargin=_buttonMinimumHorizontalEdgeMargin;
@property(nonatomic) double buttonRegularSizeClassWidth; // @synthesize buttonRegularSizeClassWidth=_buttonRegularSizeClassWidth;
@property(nonatomic) double helpTextBottomMargin; // @synthesize helpTextBottomMargin=_helpTextBottomMargin;
@property(nonatomic) double titleBottomMargin; // @synthesize titleBottomMargin=_titleBottomMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(nonatomic) double spotifyLogoHeight; // @synthesize spotifyLogoHeight=_spotifyLogoHeight;
@property(nonatomic) double mainContainerIPadWidth; // @synthesize mainContainerIPadWidth=_mainContainerIPadWidth;
@property(nonatomic) double mainContainerWidth; // @synthesize mainContainerWidth=_mainContainerWidth;
@property(nonatomic) double spotifyLogoWidth; // @synthesize spotifyLogoWidth=_spotifyLogoWidth;
@property(nonatomic) double spotifyLogoTopEdgeMarginPreferedIPad; // @synthesize spotifyLogoTopEdgeMarginPreferedIPad=_spotifyLogoTopEdgeMarginPreferedIPad;
@property(nonatomic) double spotifyLogoTopEdgeMinimumMargin; // @synthesize spotifyLogoTopEdgeMinimumMargin=_spotifyLogoTopEdgeMinimumMargin;
@property(nonatomic) double spotifyLogoTopEdgePreferedMargin; // @synthesize spotifyLogoTopEdgePreferedMargin=_spotifyLogoTopEdgePreferedMargin;
@property(nonatomic) double titleLabelHorizontalEdgeMargin; // @synthesize titleLabelHorizontalEdgeMargin=_titleLabelHorizontalEdgeMargin;
@property(copy, nonatomic) GLUELabelStyle *helpLabelStyle; // @synthesize helpLabelStyle=_helpLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSDictionary *buttonStyles; // @synthesize buttonStyles;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

