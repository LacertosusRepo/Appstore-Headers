//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UIScrollView;
@protocol IMBreadcrumbsViewDelegate;

@interface IMBreadcrumbsView : UIView <UIScrollViewDelegate>
{
    UIScrollView *scrollView;
    UIImageView *leftBorder;
    UIImageView *rightBorder;
    NSMutableArray *segments;
    id <IMBreadcrumbsViewDelegate> breadcrumbsDelegate;
    double maxButtonWidth;
}

@property(nonatomic) double maxButtonWidth; // @synthesize maxButtonWidth;
@property(nonatomic) __weak id <IMBreadcrumbsViewDelegate> breadcrumbsDelegate; // @synthesize breadcrumbsDelegate;
- (void).cxx_destruct;
- (void)removeSegmentInteractively:(id)arg1;
- (void)replaceSegments:(id)arg1;
- (void)removeAllSegmentsAnimated:(_Bool)arg1;
- (void)removeLastSegmentAnimated:(_Bool)arg1;
- (void)removeSegments:(id)arg1 animated:(_Bool)arg2;
- (void)segmentTapped:(id)arg1;
@property(readonly, nonatomic) long long segmentCount;
- (void)addSegments:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToView:(id)arg1;
- (void)setSegment:(id)arg1 last:(_Bool)arg2 animated:(_Bool)arg3;
- (id)createSegmentWithLabel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateBorderAlpha;
- (void)layoutSubviews;
- (struct CGPoint)contentOffsetForReverseContentOffset:(struct CGPoint)arg1 boundsWidth:(double)arg2;
- (struct CGPoint)reverseContentOffsetForBoundsWidth:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (void)layoutSubviewsChangeZOrder:(_Bool)arg1;
- (void)doInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
