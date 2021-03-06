//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol SPStepScrollViewDataSource, SPStepScrollViewDelegate;

@interface SPStepScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _needsReloadData;
    _Bool _needsReloadConstraints;
    _Bool _preventUnloading;
    long long _stepsLeft;
    long long _stepsRight;
    id <SPStepScrollViewDelegate> _stepDelegate;
    id <SPStepScrollViewDataSource> _dataSource;
    NSMutableSet *_loadedPageViews;
    NSMutableDictionary *_queuedPageViews;
    struct CGRect _previousFrame;
}

@property(nonatomic) struct CGRect previousFrame; // @synthesize previousFrame=_previousFrame;
@property(retain, nonatomic) NSMutableDictionary *queuedPageViews; // @synthesize queuedPageViews=_queuedPageViews;
@property(retain, nonatomic) NSMutableSet *loadedPageViews; // @synthesize loadedPageViews=_loadedPageViews;
@property(nonatomic) __weak id <SPStepScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SPStepScrollViewDelegate> stepDelegate; // @synthesize stepDelegate=_stepDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (long long)currentRelativePageIndex;
- (double)originOffset;
- (void)queuePageView:(id)arg1;
- (void)notifyAndUpdate;
- (void)update;
- (void)reloadConstraintsRestoreOffset:(_Bool)arg1;
- (void)setNeedsReloadData;
- (_Bool)setRelativeIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)dequeReusablePageViewWithIdentifier:(id)arg1 relativeIndex:(long long)arg2;
- (id)pageViewAtRelativeIndex:(long long)arg1;
- (struct CGRect)frameForPageAtRelativeIndex:(long long)arg1;
- (void)clearReusePageViewQueue;
- (void)reloadConstraints;
- (void)reloadData;
- (id)visiblePageViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

