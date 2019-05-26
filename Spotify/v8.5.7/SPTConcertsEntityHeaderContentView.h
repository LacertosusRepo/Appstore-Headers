//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class CAShapeLayer, GLUECalendarThumbnailView, GLUEHeaderBackgroundView, GLUELabel, NSLayoutConstraint, NSMutableArray, NSString;

@interface SPTConcertsEntityHeaderContentView : UIView <GLUEStyleable>
{
    GLUEHeaderBackgroundView *_backgroundView;
    GLUECalendarThumbnailView *_calendarView;
    GLUELabel *_titleLabel;
    GLUELabel *_venueLabel;
    GLUELabel *_dateLabel;
    GLUELabel *_availabilityLabel;
    GLUELabel *_navigationBarTitleLabel;
    double _collapsedHeight;
    double _navigationBarHeight;
    CAShapeLayer *_imageShadowLayer;
    NSLayoutConstraint *_navigationBarTitleLabelTopLayoutConstraint;
    NSLayoutConstraint *_backgroundTopEdgeConstraint;
    NSLayoutConstraint *_topSubviewTopEdgeConstraint;
    NSMutableArray *_labelMaxWidthConstraints;
}

@property(retain, nonatomic) NSMutableArray *labelMaxWidthConstraints; // @synthesize labelMaxWidthConstraints=_labelMaxWidthConstraints;
@property(retain, nonatomic) NSLayoutConstraint *topSubviewTopEdgeConstraint; // @synthesize topSubviewTopEdgeConstraint=_topSubviewTopEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *backgroundTopEdgeConstraint; // @synthesize backgroundTopEdgeConstraint=_backgroundTopEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *navigationBarTitleLabelTopLayoutConstraint; // @synthesize navigationBarTitleLabelTopLayoutConstraint=_navigationBarTitleLabelTopLayoutConstraint;
@property(readonly, nonatomic) CAShapeLayer *imageShadowLayer; // @synthesize imageShadowLayer=_imageShadowLayer;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) double collapsedHeight; // @synthesize collapsedHeight=_collapsedHeight;
@property(readonly, nonatomic) GLUELabel *navigationBarTitleLabel; // @synthesize navigationBarTitleLabel=_navigationBarTitleLabel;
@property(readonly, nonatomic) GLUELabel *availabilityLabel; // @synthesize availabilityLabel=_availabilityLabel;
@property(readonly, nonatomic) GLUELabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) GLUELabel *venueLabel; // @synthesize venueLabel=_venueLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUECalendarThumbnailView *calendarView; // @synthesize calendarView=_calendarView;
@property(readonly, nonatomic) GLUEHeaderBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (double)yOffsetForTopSubView;
- (void)applySubviewStylesFromStyle:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)updateLabelMaxWidthConstraints;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (void)constrainLabel:(id)arg1 topEdgeToBottomEdgeOf:(id)arg2 plus:(double)arg3;
- (void)updateVisibleSubviewsForExpandedStateWithRemainingHeightRatio:(double)arg1;
- (void)updateVisibleSubviewsForCollapsedState;
- (void)updateVisibleSubviewsForRemainingHeight:(double)arg1 withMaximumHeight:(double)arg2;
- (void)anchorFauxNavigationBarInVisibleRect:(struct CGRect)arg1;
- (void)updateForContainingVisibleRect:(struct CGRect)arg1;
- (void)updateContainingBounceOffsets:(struct UIEdgeInsets)arg1;
- (double)updateTitleLabelHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)initBackgroundView;
- (void)initNavigationBar;
- (void)initAvailabilityLabel;
- (void)initVenueLabel;
- (void)initDateLabel;
- (void)initTitleLabel;
- (void)initCalendarView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
