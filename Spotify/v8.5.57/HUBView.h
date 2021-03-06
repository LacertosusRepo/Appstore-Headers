//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HUBComponentViewManagerDelegate-Protocol.h"
#import "HUBScrollViewDelegate-Protocol.h"

@class HUBCollectionViewDataSource, HUBCollectionViewLayout, HUBComponentViewImageLoader, HUBComponentViewManager, NSArray, NSHashTable, NSString, UICollectionView;
@protocol HUBViewComponentDelegate, HUBViewScrollDelegate;

@interface HUBView : UIView <HUBComponentViewManagerDelegate, HUBScrollViewDelegate>
{
    _Bool _useDiffingOnComponentModelChanges;
    UICollectionView *_contentView;
    id <HUBViewComponentDelegate> _componentDelegate;
    id <HUBViewScrollDelegate> _scrollDelegate;
    HUBComponentViewImageLoader *_componentViewImageLoader;
    HUBComponentViewManager *_componentViewManager;
    HUBCollectionViewDataSource *_collectionViewDataSource;
    CDUnknownBlockType _pendingScrollAnimationCallback;
    NSHashTable *_visibleContentOffsetObservingComponentViews;
    NSHashTable *_contentOffsetObservers;
    HUBCollectionViewLayout *_collectionViewLayout;
}

@property(retain, nonatomic) HUBCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) NSHashTable *contentOffsetObservers; // @synthesize contentOffsetObservers=_contentOffsetObservers;
@property(readonly, nonatomic) NSHashTable *visibleContentOffsetObservingComponentViews; // @synthesize visibleContentOffsetObservingComponentViews=_visibleContentOffsetObservingComponentViews;
@property(copy, nonatomic) CDUnknownBlockType pendingScrollAnimationCallback; // @synthesize pendingScrollAnimationCallback=_pendingScrollAnimationCallback;
@property(readonly, nonatomic) HUBCollectionViewDataSource *collectionViewDataSource; // @synthesize collectionViewDataSource=_collectionViewDataSource;
@property(readonly, nonatomic) HUBComponentViewManager *componentViewManager; // @synthesize componentViewManager=_componentViewManager;
@property(readonly, nonatomic) HUBComponentViewImageLoader *componentViewImageLoader; // @synthesize componentViewImageLoader=_componentViewImageLoader;
@property(nonatomic) __weak id <HUBViewScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <HUBViewComponentDelegate> componentDelegate; // @synthesize componentDelegate=_componentDelegate;
@property(readonly, nonatomic) UICollectionView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool useDiffingOnComponentModelChanges; // @synthesize useDiffingOnComponentModelChanges=_useDiffingOnComponentModelChanges;
- (void).cxx_destruct;
- (void)componentViewManager:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)componentViewManager:(id)arg1 componentViewWillAppear:(id)arg2;
- (struct CGRect)contentRectForScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldBeginScrolling:(id)arg1;
- (void)applyComponentModelDiff:(id)arg1;
@property(nonatomic) _Bool adjustsTargetContentOffset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)componentViewsDidDisappear;
- (void)componentViewsWillAppear;
- (void)removeContentOffsetObserver:(id)arg1;
- (void)addContentOffsetObserver:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) NSArray *componentModels;
- (id)createCollectionViewWithComponentRegistry:(id)arg1 componentLayoutManager:(id)arg2 dataSource:(id)arg3 scrollViewDelegate:(id)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 imageLoaderFactory:(id)arg2 componentLayoutManager:(id)arg3 componentRegistry:(id)arg4 componentEventHandler:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

