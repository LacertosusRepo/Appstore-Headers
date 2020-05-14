//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GLUELabelStyle, UIColor;

@interface SPTPodcastUIEditorialHeaderStyle : NSObject
{
    GLUELabelStyle *_subtitleLabelStyle;
    double _podcastUIWidescreenMetric;
    double _titleProtectionColorAlpha;
    double _statusBarProtectionColorAlpha;
    UIColor *_statusBarProtectionGradientFromColor;
    UIColor *_statusBarProtectionGradientToColor;
    struct CGPoint _titleProtectionGradientCurveStartPoint;
    struct CGPoint _titleProtectionGradientCurveEndPoint;
    struct CGPoint _statusBarProtectionGradientCurveStartPoint;
    struct CGPoint _statusBarProtectionGradientCurveEndPoint;
}

+ (id)defaultStyleWithTheme:(id)arg1;
@property(copy, nonatomic) UIColor *statusBarProtectionGradientToColor; // @synthesize statusBarProtectionGradientToColor=_statusBarProtectionGradientToColor;
@property(copy, nonatomic) UIColor *statusBarProtectionGradientFromColor; // @synthesize statusBarProtectionGradientFromColor=_statusBarProtectionGradientFromColor;
@property(nonatomic) struct CGPoint statusBarProtectionGradientCurveEndPoint; // @synthesize statusBarProtectionGradientCurveEndPoint=_statusBarProtectionGradientCurveEndPoint;
@property(nonatomic) struct CGPoint statusBarProtectionGradientCurveStartPoint; // @synthesize statusBarProtectionGradientCurveStartPoint=_statusBarProtectionGradientCurveStartPoint;
@property(nonatomic) struct CGPoint titleProtectionGradientCurveEndPoint; // @synthesize titleProtectionGradientCurveEndPoint=_titleProtectionGradientCurveEndPoint;
@property(nonatomic) struct CGPoint titleProtectionGradientCurveStartPoint; // @synthesize titleProtectionGradientCurveStartPoint=_titleProtectionGradientCurveStartPoint;
@property(nonatomic) double statusBarProtectionColorAlpha; // @synthesize statusBarProtectionColorAlpha=_statusBarProtectionColorAlpha;
@property(nonatomic) double titleProtectionColorAlpha; // @synthesize titleProtectionColorAlpha=_titleProtectionColorAlpha;
@property(nonatomic) double podcastUIWidescreenMetric; // @synthesize podcastUIWidescreenMetric=_podcastUIWidescreenMetric;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
