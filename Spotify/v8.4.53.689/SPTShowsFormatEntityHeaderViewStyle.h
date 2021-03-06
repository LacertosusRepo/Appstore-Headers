//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEGradientStyle, GLUELabelStyle, NSString;

@interface SPTShowsFormatEntityHeaderViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleStyle;
    GLUELabelStyle *_subtitleStyle;
    GLUELabelStyle *_descriptionStyle;
    GLUELabelStyle *_infoStyle;
    GLUEGradientStyle *_gradientStyle;
    GLUELabelStyle *_navigationBarStyle;
}

+ (id)styleWithTheme:(id)arg1;
@property(copy, nonatomic) GLUELabelStyle *navigationBarStyle; // @synthesize navigationBarStyle=_navigationBarStyle;
@property(copy, nonatomic) GLUEGradientStyle *gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(copy, nonatomic) GLUELabelStyle *infoStyle; // @synthesize infoStyle=_infoStyle;
@property(copy, nonatomic) GLUELabelStyle *descriptionStyle; // @synthesize descriptionStyle=_descriptionStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

