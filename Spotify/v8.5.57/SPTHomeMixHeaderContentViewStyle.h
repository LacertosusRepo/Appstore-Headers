//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUEGradientStyle, GLUEImageStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTHomeMixHeaderContentViewStyle : NSObject <GLUEDebuggableStyle>
{
    _Bool _showSubtitle;
    NSString *_debugName;
    double _actionButtonOverflowHeight;
    UIColor *_backgroundColor;
    double _bottomMargin;
    double _topMargin;
    GLUEImageStyle *_enityImageStyle;
    double _entityImageShadowOpacity;
    double _entityImageShadowRadius;
    UIColor *_entityImageShadowColor;
    UIColor *_entityImageLayerBackgroundColor;
    GLUELabelStyle *_subtitleStyle;
    GLUEGradientStyle *_backgroundGradientStyle;
    double _subtitleMargin;
    struct CGSize _entityImageShadowOffset;
}

@property(nonatomic, getter=shouldShowSubtitle) _Bool showSubtitle; // @synthesize showSubtitle=_showSubtitle;
@property(nonatomic) double subtitleMargin; // @synthesize subtitleMargin=_subtitleMargin;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(retain, nonatomic) UIColor *entityImageLayerBackgroundColor; // @synthesize entityImageLayerBackgroundColor=_entityImageLayerBackgroundColor;
@property(retain, nonatomic) UIColor *entityImageShadowColor; // @synthesize entityImageShadowColor=_entityImageShadowColor;
@property(nonatomic) double entityImageShadowRadius; // @synthesize entityImageShadowRadius=_entityImageShadowRadius;
@property(nonatomic) double entityImageShadowOpacity; // @synthesize entityImageShadowOpacity=_entityImageShadowOpacity;
@property(nonatomic) struct CGSize entityImageShadowOffset; // @synthesize entityImageShadowOffset=_entityImageShadowOffset;
@property(copy, nonatomic) GLUEImageStyle *enityImageStyle; // @synthesize enityImageStyle=_enityImageStyle;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) double actionButtonOverflowHeight; // @synthesize actionButtonOverflowHeight=_actionButtonOverflowHeight;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

