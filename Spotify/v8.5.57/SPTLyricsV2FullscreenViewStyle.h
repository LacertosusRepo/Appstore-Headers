//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTLyricsV2FullscreenViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    double _contentHorizontalMargin;
    double _durationViewHorizontalMargin;
    GLUELabelStyle *_titleLabelStyle;
    double _headerHeight;
    double _footerHeight;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(nonatomic) double durationViewHorizontalMargin; // @synthesize durationViewHorizontalMargin=_durationViewHorizontalMargin;
@property(nonatomic) double contentHorizontalMargin; // @synthesize contentHorizontalMargin=_contentHorizontalMargin;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

