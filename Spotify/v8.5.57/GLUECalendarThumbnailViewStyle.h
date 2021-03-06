//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface GLUECalendarThumbnailViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_calendarMonthLabelStyle;
    GLUELabelStyle *_calendarDayLabelStyle;
    UIColor *_monthBackgroundColor;
    UIColor *_dayBackgroundColor;
}

@property(copy, nonatomic) UIColor *dayBackgroundColor; // @synthesize dayBackgroundColor=_dayBackgroundColor;
@property(copy, nonatomic) UIColor *monthBackgroundColor; // @synthesize monthBackgroundColor=_monthBackgroundColor;
@property(copy, nonatomic) GLUELabelStyle *calendarDayLabelStyle; // @synthesize calendarDayLabelStyle=_calendarDayLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *calendarMonthLabelStyle; // @synthesize calendarMonthLabelStyle=_calendarMonthLabelStyle;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCalendarThumbnailViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

