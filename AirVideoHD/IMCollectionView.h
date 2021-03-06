//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "IMMinimalScrollableAmount-Protocol.h"
#import "IMScrollViewRefreshHelperDelegate-Protocol.h"

@class IMRefreshView, IMScrollViewRefreshHelper, NSIndexPath, NSString;
@protocol IMCollectionViewDelegate;

@interface IMCollectionView : UICollectionView <IMScrollViewRefreshHelperDelegate, IMMinimalScrollableAmount>
{
    IMScrollViewRefreshHelper *refreshHelper;
    _Bool layoutSubviews;
    double minimalScrollableAmount;
    struct CGSize lastContentSize;
    struct UIEdgeInsets normalContentInset;
    struct UIEdgeInsets additionalContentInset;
    _Bool settingFrame;
    _Bool atBottom;
    NSIndexPath *itemClosestToCenter;
}

- (void).cxx_destruct;
- (void)scrollToCell:(id)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)scrollToCell:(id)arg1 animated:(_Bool)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)imScrollViewRefreshHelperRequestedReload:(id)arg1;
@property(nonatomic) id <IMCollectionViewDelegate> delegate;
- (void)imSetAdditionalContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)contentInset;
- (void)updateContentInset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)imSizeDidChange;
- (void)imSizeWillChange;
- (id)imIndexPathClosestToCenter;
- (void)setContentOffset:(struct CGPoint)arg1;
@property(nonatomic) double minimalScrollableAmount;
- (void)setContentSize:(struct CGSize)arg1 withContentInset:(struct UIEdgeInsets)arg2;
- (void)setContentSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)beginReloading;
@property(retain, nonatomic) IMRefreshView *refreshView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

