//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GLUEThemeBase.h"

@class GLUEImageStyle, SPTTheme;

@interface SPTGaiaDevicePickerGLUETheme : GLUEThemeBase
{
    SPTTheme *_mainTheme;
}

@property(readonly, nonatomic) SPTTheme *mainTheme; // @synthesize mainTheme=_mainTheme;
- (void).cxx_destruct;
- (id)subtitleImageColorForState:(long long)arg1;
- (id)mainImageColorForState:(long long)arg1;
- (id)deviceCellSubtitleTextColorForState:(long long)arg1;
- (id)deviceCellTextColorForState:(long long)arg1;
- (id)subtitleAttributedStringForState:(long long)arg1 subtitleUsesSecondaryStyle:(_Bool)arg2 content:(id)arg3;
- (id)subtitleImageWithState:(long long)arg1 icon:(long long)arg2 canAnimate:(_Bool)arg3;
- (id)mainImageWithState:(long long)arg1 icon:(long long)arg2;
@property(readonly, nonatomic) GLUEImageStyle *subtitleImageStyle;
@property(readonly, nonatomic) GLUEImageStyle *mainImageStyle;
- (id)deviceCellStyleForState:(long long)arg1 hasContextMenu:(_Bool)arg2;
- (id)initWithMainTheme:(id)arg1;

@end

