//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTPhoneNumberSignupBannerViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    double _height;
    GLUELabelStyle *_textStyle;
    double _leadingMargin;
    double _trailingMargin;
    double _topMargin;
    double _bottomMargin;
    UIColor *_progressViewBackgroundColor;
    UIColor *_progressViewTintColor;
}

@property(copy, nonatomic) UIColor *progressViewTintColor; // @synthesize progressViewTintColor=_progressViewTintColor;
@property(copy, nonatomic) UIColor *progressViewBackgroundColor; // @synthesize progressViewBackgroundColor=_progressViewBackgroundColor;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(copy, nonatomic) GLUELabelStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

