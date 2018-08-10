//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor, UIFont;

@interface SPTShowsFormatBrandedImageGenerator : NSObject
{
    id <GLUETheme> _theme;
    NSArray *_gradientColors;
    UIFont *_brandingNameFont;
    UIFont *_videoPreviewMessageFont;
    UIColor *_glueBackgroundColor;
}

@property(retain, nonatomic) UIColor *glueBackgroundColor; // @synthesize glueBackgroundColor=_glueBackgroundColor;
@property(retain, nonatomic) UIFont *videoPreviewMessageFont; // @synthesize videoPreviewMessageFont=_videoPreviewMessageFont;
@property(retain, nonatomic) UIFont *brandingNameFont; // @synthesize brandingNameFont=_brandingNameFont;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)image:(id)arg1 aspectFillImageForRect:(struct CGRect)arg2;
- (void)drawBackgroundInRect:(struct CGRect)arg1 withColor:(id)arg2;
- (void)drawTitle:(id)arg1 inRect:(struct CGRect)arg2 withColor:(id)arg3;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 withShadow:(_Bool)arg3;
- (void)drawLogoInRect:(struct CGRect)arg1 withColor:(id)arg2;
- (id)videoPreview:(id)arg1 title:(id)arg2 trackColor:(id)arg3 showColor:(id)arg4;
- (id)coverArtwork:(id)arg1 title:(id)arg2 trackColor:(id)arg3 showColor:(id)arg4;
- (id)initWithTheme:(id)arg1;

@end

