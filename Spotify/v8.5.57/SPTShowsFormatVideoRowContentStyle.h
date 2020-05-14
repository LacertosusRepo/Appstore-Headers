//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEEntityRowContentStyle.h"

@class GLUEEntityImageStyle, GLUETrackAccessoryLabelStyle, UIColor;

@interface SPTShowsFormatVideoRowContentStyle : GLUEEntityRowContentStyle
{
    UIColor *_backgroundColor;
    double _textAlpha;
    double _imageAlpha;
    double _accessoryAlpha;
    GLUETrackAccessoryLabelStyle *_trackAccessoryLabelStyle;
    UIColor *_imageOverlayColor;
    GLUEEntityImageStyle *_imageViewStyle;
}

+ (id)contentStyleWithTheme:(id)arg1 state:(unsigned long long)arg2;
+ (id)styleWithTheme:(id)arg1 state:(unsigned long long)arg2;
@property(copy, nonatomic) GLUEEntityImageStyle *imageViewStyle; // @synthesize imageViewStyle=_imageViewStyle;
@property(retain, nonatomic) UIColor *imageOverlayColor; // @synthesize imageOverlayColor=_imageOverlayColor;
@property(retain, nonatomic) GLUETrackAccessoryLabelStyle *trackAccessoryLabelStyle; // @synthesize trackAccessoryLabelStyle=_trackAccessoryLabelStyle;
@property(nonatomic) double accessoryAlpha; // @synthesize accessoryAlpha=_accessoryAlpha;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

