//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTShowsFormatEntityViewDownloadCellStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_labelStyle;
    UIColor *_switchTintColor;
    UIColor *_switchOnTintColor;
    UIColor *_switchThumbTintColor;
}

+ (id)styleWithTheme:(id)arg1;
@property(retain, nonatomic) UIColor *switchThumbTintColor; // @synthesize switchThumbTintColor=_switchThumbTintColor;
@property(retain, nonatomic) UIColor *switchOnTintColor; // @synthesize switchOnTintColor=_switchOnTintColor;
@property(retain, nonatomic) UIColor *switchTintColor; // @synthesize switchTintColor=_switchTintColor;
@property(copy, nonatomic) GLUELabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

