//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEGradientStyle, GLUEImageStyle, NSString, UIColor;

@interface SPTFreeTierCollectionOverlayImageViewStateStyle : NSObject <GLUEStyle>
{
    double _overlayOpacity;
    UIColor *_overlayColor;
    long long _icon;
    UIColor *_iconColor;
    GLUEImageStyle *_imageViewStyle;
    GLUEGradientStyle *_backgroundGradientStyle;
    struct CGSize _iconSize;
}

@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) GLUEImageStyle *imageViewStyle; // @synthesize imageViewStyle=_imageViewStyle;
@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) double overlayOpacity; // @synthesize overlayOpacity=_overlayOpacity;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

