//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTConcertsEntityRowAdornment-Protocol.h"

@class GLUECalendarThumbnailViewStyle, GLUELabel, NSArray, NSString;

@interface GLUECalendarThumbnailView : UIView <SPTConcertsEntityRowAdornment, GLUEStyleable>
{
    GLUELabel *_calendarMonthLabel;
    GLUELabel *_calendarDayLabel;
    NSArray *_layoutConstraints;
    GLUECalendarThumbnailViewStyle *_style;
    UIView *_monthLabelContainerView;
    UIView *_dayLabelContainerView;
}

@property(readonly, nonatomic) UIView *dayLabelContainerView; // @synthesize dayLabelContainerView=_dayLabelContainerView;
@property(readonly, nonatomic) UIView *monthLabelContainerView; // @synthesize monthLabelContainerView=_monthLabelContainerView;
@property(retain, nonatomic) GLUECalendarThumbnailViewStyle *style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, copy, nonatomic) GLUELabel *calendarDayLabel; // @synthesize calendarDayLabel=_calendarDayLabel;
@property(readonly, copy, nonatomic) GLUELabel *calendarMonthLabel; // @synthesize calendarMonthLabel=_calendarMonthLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)setupViewComponents;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

