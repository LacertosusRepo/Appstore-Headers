//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUECircularSpinnerViewStyle, NSString, UIColor;

@interface GLUETrackPreviewStyle : NSObject <GLUEStyle>
{
    double _size;
    UIColor *_overlayColor;
    double _iconSize;
    UIColor *_iconColor;
    GLUECircularSpinnerViewStyle *_spinnerStyle;
}

@property(copy, nonatomic) GLUECircularSpinnerViewStyle *spinnerStyle; // @synthesize spinnerStyle=_spinnerStyle;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) double iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(nonatomic) double size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToTrackPreviewViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

