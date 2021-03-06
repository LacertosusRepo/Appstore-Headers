//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContentLayerResolverDelegate-Protocol.h"
#import "SPTNowPlayingContentLayerViewModelDelegate-Protocol.h"
#import "SPTNowPlayingContentViewController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SPTNowPlayingCarouselBackgroundBlurController, SPTNowPlayingContentLayerViewModel, SPTTheme, UICollectionView;
@protocol SPTNowPlayingContentLayerResolver;

@interface SPTNowPlayingContentLayerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SPTNowPlayingContentLayerViewModelDelegate, SPTNowPlayingContentLayerResolverDelegate, SPTNowPlayingContentViewController>
{
    SPTNowPlayingCarouselBackgroundBlurController *blurController;
    SPTNowPlayingContentLayerViewModel *_viewModel;
    id <SPTNowPlayingContentLayerResolver> _resolver;
    SPTTheme *_theme;
    UIViewController *_contentDecorationViewController;
    UICollectionView *_collectionView;
    struct UIEdgeInsets windowedContentInsets;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIViewController *contentDecorationViewController; // @synthesize contentDecorationViewController=_contentDecorationViewController;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingContentLayerResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) SPTNowPlayingContentLayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) struct UIEdgeInsets windowedContentInsets; // @synthesize windowedContentInsets;
@property(retain, nonatomic) SPTNowPlayingCarouselBackgroundBlurController *blurController; // @synthesize blurController;
- (void).cxx_destruct;
- (void)contentLayerViewModelDidChangeNextTrack:(id)arg1;
- (void)contentLayerViewModelDidChangeScrollBoundaries:(id)arg1;
- (void)contentLayerViewModelDidMoveToTrackAtIndexPath:(id)arg1 relativeMovement:(long long)arg2 animated:(_Bool)arg3;
- (void)contentLayerResolver:(id)arg1 didRegisterProvider:(id)arg2;
- (void)scrollDidFinish;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)itemWidth;
- (void)refreshLeftInset;
- (void)reloadDataMovingToIndexPath:(id)arg1 relativeMovement:(long long)arg2 animated:(_Bool)arg3;
- (void)updateContentDecorationViewControllerFrame;
- (_Bool)isShowingOverlayForCurrentPage;
@property(readonly, nonatomic) _Bool shouldTrackIdlePeriodChanges;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 resolver:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

