//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponentViewObserver-Protocol.h"
#import "HUBComponentWithChildren-Protocol.h"
#import "HUBComponentWithImageHandling-Protocol.h"
#import "HUBComponentWithRestorableUIState-Protocol.h"
#import "HUBComponentWithScrolling-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CAGradientLayer, GLUESectionHeaderView, NSSet, NSString, NSValue, SPTImageBlurView, UICollectionView, UIView;
@protocol HUBComponentChildDelegate, HUBComponentModel;

@interface HUGSCarouselComponent : HUGSThemableComponent <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HUBComponentWithImageHandling, HUBComponentWithChildren, HUBComponentViewObserver, HUBComponentWithRestorableUIState, HUBComponentWithScrolling>
{
    UIView *_view;
    id <HUBComponentChildDelegate> _childDelegate;
    Class _collectionViewClass;
    GLUESectionHeaderView *_headerView;
    UICollectionView *_collectionView;
    id <HUBComponentModel> _model;
    NSValue *_itemSizeValue;
    SPTImageBlurView *_backgroundImageView;
    CAGradientLayer *_backgroundGradientLayer;
    CDUnknownBlockType _pendingScrollAnimationCallback;
}

@property(copy, nonatomic) CDUnknownBlockType pendingScrollAnimationCallback; // @synthesize pendingScrollAnimationCallback=_pendingScrollAnimationCallback;
@property(retain, nonatomic) CAGradientLayer *backgroundGradientLayer; // @synthesize backgroundGradientLayer=_backgroundGradientLayer;
@property(retain, nonatomic) SPTImageBlurView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) NSValue *itemSizeValue; // @synthesize itemSizeValue=_itemSizeValue;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) GLUESectionHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) Class collectionViewClass; // @synthesize collectionViewClass=_collectionViewClass;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)getOrCreateBackgroundImageBlurView;
- (double)headerHeightForModel:(id)arg1;
- (id)headerViewStyleForModel:(id)arg1;
- (struct CGRect)headerViewFrame;
- (id)getOrCreateHeaderView;
- (struct UIEdgeInsets)sectionInsetsForModel:(id)arg1;
- (struct CGSize)calculateChildItemSizeToSatisfyDesignRules:(struct CGSize)arg1 containerViewSize:(struct CGSize)arg2;
- (void)calculateItemSizeForModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)cellReuseIdentifier;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToComponentAtIndex:(unsigned long long)arg1 scrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)restoreUIState:(id)arg1;
- (id)currentUIState;
- (void)viewWillAppear;
- (void)viewDidResize;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 collectionViewClass:(Class)arg3;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

