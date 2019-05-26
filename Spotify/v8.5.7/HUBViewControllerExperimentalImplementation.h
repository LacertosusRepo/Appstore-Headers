//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HUBViewController.h"

#import "HUBCollectionViewDelegate-Protocol.h"
#import "HUBComponentWrapperDelegate-Protocol.h"
#import "HUBViewModelLoaderDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class HUBCollectionView, HUBCollectionViewFactory, HUBComponentReusePool, HUBComponentWrapper, HUBComponentWrapperImageLoader, HUBOperationQueue, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol HUBActionHandler, HUBComponentLayoutManager, HUBComponentRegistry, HUBContentReloadPolicy, HUBFeatureInfo, HUBViewControllerScrollHandler, HUBViewModel, HUBViewModelLoader;

@interface HUBViewControllerExperimentalImplementation : HUBViewController <HUBViewModelLoaderDelegate, HUBComponentWrapperDelegate, UICollectionViewDataSource, HUBCollectionViewDelegate>
{
    _Bool _collectionViewIsScrolling;
    _Bool _viewHasBeenLaidOut;
    _Bool _viewModelHasChangedSinceLastLayoutUpdate;
    id <HUBViewModel> _viewModel;
    NSURL *_viewURI;
    id <HUBFeatureInfo> _featureInfo;
    id <HUBViewModelLoader> _viewModelLoader;
    HUBCollectionViewFactory *_collectionViewFactory;
    id <HUBComponentRegistry> _componentRegistry;
    HUBComponentReusePool *_componentReusePool;
    id <HUBComponentLayoutManager> _componentLayoutManager;
    id <HUBActionHandler> _actionHandler;
    id <HUBViewControllerScrollHandler> _scrollHandler;
    id <HUBContentReloadPolicy> _contentReloadPolicy;
    HUBComponentWrapperImageLoader *_componentWrapperImageLoader;
    HUBCollectionView *_collectionView;
    id <HUBViewModel> _lastRenderedViewModel;
    NSHashTable *_contentOffsetObservingComponentWrappers;
    NSHashTable *_actionObservingComponentWrappers;
    HUBComponentWrapper *_headerComponentWrapper;
    NSMutableArray *_overlayComponentWrappers;
    NSMutableDictionary *_componentWrappersByCellIdentifier;
    NSMutableDictionary *_componentWrappersByModelIdentifier;
    HUBComponentWrapper *_highlightedComponentWrapper;
    HUBOperationQueue *_renderingOperationQueue;
    double _visibleKeyboardHeight;
    CDUnknownBlockType _pendingScrollAnimationCallback;
    struct CGPoint _lastContentOffset;
}

@property(copy, nonatomic) CDUnknownBlockType pendingScrollAnimationCallback; // @synthesize pendingScrollAnimationCallback=_pendingScrollAnimationCallback;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double visibleKeyboardHeight; // @synthesize visibleKeyboardHeight=_visibleKeyboardHeight;
@property(nonatomic) _Bool viewModelHasChangedSinceLastLayoutUpdate; // @synthesize viewModelHasChangedSinceLastLayoutUpdate=_viewModelHasChangedSinceLastLayoutUpdate;
@property(nonatomic) _Bool viewHasBeenLaidOut; // @synthesize viewHasBeenLaidOut=_viewHasBeenLaidOut;
@property(readonly, nonatomic) HUBOperationQueue *renderingOperationQueue; // @synthesize renderingOperationQueue=_renderingOperationQueue;
@property(retain, nonatomic) HUBComponentWrapper *highlightedComponentWrapper; // @synthesize highlightedComponentWrapper=_highlightedComponentWrapper;
@property(readonly, nonatomic) NSMutableDictionary *componentWrappersByModelIdentifier; // @synthesize componentWrappersByModelIdentifier=_componentWrappersByModelIdentifier;
@property(readonly, nonatomic) NSMutableDictionary *componentWrappersByCellIdentifier; // @synthesize componentWrappersByCellIdentifier=_componentWrappersByCellIdentifier;
@property(readonly, nonatomic) NSMutableArray *overlayComponentWrappers; // @synthesize overlayComponentWrappers=_overlayComponentWrappers;
@property(retain, nonatomic) HUBComponentWrapper *headerComponentWrapper; // @synthesize headerComponentWrapper=_headerComponentWrapper;
@property(readonly, nonatomic) NSHashTable *actionObservingComponentWrappers; // @synthesize actionObservingComponentWrappers=_actionObservingComponentWrappers;
@property(readonly, nonatomic) NSHashTable *contentOffsetObservingComponentWrappers; // @synthesize contentOffsetObservingComponentWrappers=_contentOffsetObservingComponentWrappers;
@property(nonatomic) _Bool collectionViewIsScrolling; // @synthesize collectionViewIsScrolling=_collectionViewIsScrolling;
@property(retain, nonatomic) id <HUBViewModel> lastRenderedViewModel; // @synthesize lastRenderedViewModel=_lastRenderedViewModel;
@property(retain, nonatomic) HUBCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) HUBComponentWrapperImageLoader *componentWrapperImageLoader; // @synthesize componentWrapperImageLoader=_componentWrapperImageLoader;
@property(readonly, nonatomic) id <HUBContentReloadPolicy> contentReloadPolicy; // @synthesize contentReloadPolicy=_contentReloadPolicy;
@property(readonly, nonatomic) id <HUBViewControllerScrollHandler> scrollHandler; // @synthesize scrollHandler=_scrollHandler;
@property(readonly, nonatomic) id <HUBActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(readonly, nonatomic) id <HUBComponentLayoutManager> componentLayoutManager; // @synthesize componentLayoutManager=_componentLayoutManager;
@property(readonly, nonatomic) HUBComponentReusePool *componentReusePool; // @synthesize componentReusePool=_componentReusePool;
@property(readonly, nonatomic) id <HUBComponentRegistry> componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) HUBCollectionViewFactory *collectionViewFactory; // @synthesize collectionViewFactory=_collectionViewFactory;
@property(readonly, nonatomic) id <HUBViewModelLoader> viewModelLoader; // @synthesize viewModelLoader=_viewModelLoader;
@property(readonly, nonatomic) id <HUBFeatureInfo> featureInfo; // @synthesize featureInfo=_featureInfo;
- (id)viewURI;
@property(retain, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)scrollToRemainingComponentsOfType:(unsigned long long)arg1 startPosition:(unsigned long long)arg2 indexPath:(id)arg3 component:(id)arg4 scrollPosition:(unsigned long long)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)scrollToRootBodyComponentAtIndex:(unsigned long long)arg1 scrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeComponentWrapperFromLookupTables:(id)arg1;
- (void)addComponentWrapperToLookupTables:(id)arg1;
- (_Bool)performActionForTrigger:(unsigned long long)arg1 customIdentifier:(id)arg2 customData:(id)arg3 componentModel:(id)arg4;
- (void)componentWrapperWillAppear:(id)arg1;
- (void)headerAndOverlayComponentViewsWillAppear;
- (void)collectionViewCellWillAppear:(id)arg1 ignorePreviousAppearance:(_Bool)arg2;
- (void)adjustCollectionViewContentInsetWithProposedTopValue:(double)arg1;
- (void)removeComponentWrapper:(id)arg1;
- (id)configureHeaderOrOverlayComponentWrapperWithModel:(id)arg1 previousComponentWrapper:(id)arg2;
- (void)updateOverlayComponentCenterPointsWithKeyboardNotification:(id)arg1;
- (struct CGPoint)overlayComponentCenterPoint;
- (void)configureOverlayComponents;
- (void)configureHeaderComponent;
- (_Bool)shouldAutomaticallyManageTopContentInset;
- (double)calculateTopContentInset;
- (id)componentWrapperFromCell:(id)arg1;
- (struct CGSize)childComponentContainerViewSizeForParentWrapper:(id)arg1;
- (void)configureComponentWrapper:(id)arg1 withModel:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)didAddComponentWrapper:(id)arg1;
- (void)saveStatesForVisibleComponents;
- (id)createReloadCollectionViewOperation;
- (void)renderViewModel:(id)arg1 addHeaderMargin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderViewModel:(id)arg1 animated:(_Bool)arg2 addHeaderMargin:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleKeyboardWillHideNotification:(id)arg1;
- (void)handleKeyboardWillShowNotification:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGRect)contentRectForScrollView:(id)arg1;
- (void)notifyScrollingDidEndInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)collectionViewShouldBeginScrolling:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)reconfigureVisibleCellsForSize:(struct CGSize)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)performActionWithIdentifier:(id)arg1 customData:(id)arg2;
- (void)sendComponentWrapperToReusePool:(id)arg1;
- (_Bool)componentWrapper:(id)arg1 performActionWithIdentifier:(id)arg2 customData:(id)arg3;
- (void)componentWrapper:(id)arg1 childSelectedAtIndex:(unsigned long long)arg2 customData:(id)arg3;
- (void)componentWrapper:(id)arg1 childComponent:(id)arg2 childView:(id)arg3 didDisappearAtIndex:(unsigned long long)arg4;
- (void)componentWrapper:(id)arg1 childComponent:(id)arg2 childView:(id)arg3 willAppearAtIndex:(unsigned long long)arg4;
- (id)componentWrapper:(id)arg1 childComponentForModel:(id)arg2;
- (void)componentWrapper:(id)arg1 didUpdateSelectionState:(unsigned long long)arg2;
- (void)componentWrapper:(id)arg1 willUpdateSelectionState:(unsigned long long)arg2;
- (void)cancelComponentSelection;
- (_Bool)selectComponentWithModel:(id)arg1 customData:(id)arg2;
- (void)viewModelLoader:(id)arg1 didFailLoadingWithError:(id)arg2;
- (void)viewModelLoader:(id)arg1 didLoadViewModel:(id)arg2;
- (void)reload;
- (void)scrollToComponentOfType:(unsigned long long)arg1 indexPath:(id)arg2 scrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (unsigned long long)indexOfBodyComponentAtPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForBodyComponentAtIndex:(unsigned long long)arg1;
- (void)addComponentWrapper:(id)arg1 toArray:(id)arg2;
- (id)rootComponentWrappersForComponentType:(unsigned long long)arg1;
- (id)visibleViewForComponentOfType:(unsigned long long)arg1 indexPath:(id)arg2;
- (id)visibleComponentViewsForComponentType:(unsigned long long)arg1;
- (id)featureIdentifier;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithViewURI:(id)arg1 featureInfo:(id)arg2 viewModelLoader:(id)arg3 collectionViewFactory:(id)arg4 componentRegistry:(id)arg5 componentReusePool:(id)arg6 componentLayoutManager:(id)arg7 actionHandler:(id)arg8 scrollHandler:(id)arg9 imageLoader:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

