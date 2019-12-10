//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMTableViewCell.h"

#import "UIScrollViewDelegate-Protocol.h"

@class IMLinearGradientView, IMSwipeableTableViewCellScrollView, NSArray, NSMapTable, NSMutableArray, NSString, UITapGestureRecognizer, UIView;

@interface IMSwipeableTableViewCell : IMTableViewCell <UIScrollViewDelegate>
{
    NSMapTable *originalFrames;
    IMSwipeableTableViewCellScrollView *scrollView;
    UITapGestureRecognizer *tapGestureRecognizer;
    NSMutableArray *utilityViewRecords;
    UIView *utilityContainerView;
    IMLinearGradientView *utilityContainerShadow;
    _Bool restoreSwipeStateDuringLayout;
    double cachedUtilityViewWidth;
    _Bool ignoreLayoutSubviews;
    _Bool removeUtilityViewsWhenReusing;
    id swipeStateIdentifier;
    NSArray *_utilityViews;
}

+ (Class)layerClass;
@property(retain, nonatomic) NSArray *utilityViews; // @synthesize utilityViews=_utilityViews;
@property(retain, nonatomic) id swipeStateIdentifier; // @synthesize swipeStateIdentifier;
@property(nonatomic) _Bool removeUtilityViewsWhenReusing; // @synthesize removeUtilityViewsWhenReusing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setOpaque:(_Bool)arg1 forSubview:(id)arg2;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (void)restoreSwipeState;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateLayout;
- (_Bool)isViewTransparent:(id)arg1;
- (void)layoutHasChanged;
- (double)utilityWidth;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tapGestureRecognizerAction:(id)arg1;
- (void)hideUtilityViews;
- (id)addUtilityButtonWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)addUtilityView:(id)arg1 withWidth:(double)arg2;
- (void)addUtilityView:(id)arg1;
- (void)initialize;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)setRevealedCellOnTableView:(id)arg1;
- (id)getRevealedCellFromTableView;
- (id)getSwipeStateFromTableView;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
