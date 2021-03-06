//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUECalendarThumbnailViewStyle, GLUEHeaderBackgroundStyle, GLUEImageStyle, GLUELabelStyle, NSString, SPTConcertsShadowStyle, UIColor;

@interface SPTConcertsEntityHeaderContentStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    GLUEImageStyle *_imageStyle;
    SPTConcertsShadowStyle *_imageShadowStyle;
    UIColor *_imageBackgroundColor;
    GLUELabelStyle *_titleStyle;
    GLUELabelStyle *_venueStyle;
    GLUELabelStyle *_dateStyle;
    GLUELabelStyle *_availabilityStyle;
    GLUELabelStyle *_navigationBarTitleStyle;
    GLUEHeaderBackgroundStyle *_backgroundStyle;
    GLUECalendarThumbnailViewStyle *_calendarStyle;
}

+ (id)createNavigationBarTitleStyleUsingTheme:(id)arg1;
+ (id)createNavigationBarBakgroundStyleUsingTheme:(id)arg1;
+ (id)createMetadataLabelStyleUsingTheme:(id)arg1;
+ (id)createTitleStyleUsingTheme:(id)arg1;
+ (id)createImageShadowStyle;
+ (id)createImageStyle;
+ (id)createCalendarStyleUsingTheme:(id)arg1;
+ (id)styleWithTheme:(id)arg1;
@property(copy, nonatomic) GLUECalendarThumbnailViewStyle *calendarStyle; // @synthesize calendarStyle=_calendarStyle;
@property(copy, nonatomic) GLUEHeaderBackgroundStyle *backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy, nonatomic) GLUELabelStyle *navigationBarTitleStyle; // @synthesize navigationBarTitleStyle=_navigationBarTitleStyle;
@property(copy, nonatomic) GLUELabelStyle *availabilityStyle; // @synthesize availabilityStyle=_availabilityStyle;
@property(copy, nonatomic) GLUELabelStyle *dateStyle; // @synthesize dateStyle=_dateStyle;
@property(copy, nonatomic) GLUELabelStyle *venueStyle; // @synthesize venueStyle=_venueStyle;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(copy, nonatomic) UIColor *imageBackgroundColor; // @synthesize imageBackgroundColor=_imageBackgroundColor;
@property(copy, nonatomic) SPTConcertsShadowStyle *imageShadowStyle; // @synthesize imageShadowStyle=_imageShadowStyle;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

