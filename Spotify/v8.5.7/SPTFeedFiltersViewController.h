//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTFeedFiltersViewModel, UICollectionView, UIView;
@protocol GLUETheme, SPTFeedFiltersViewControllerDelegate;

@interface SPTFeedFiltersViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <SPTFeedFiltersViewControllerDelegate> _delegate;
    id <GLUETheme> _theme;
    NSArray *_layoutConstraints;
    NSLayoutConstraint *_collectionViewBottomContraint;
    UICollectionView *_collectionView;
    UIView *_backgroundContainerView;
    UIView *_backgroundBlurView;
    SPTFeedFiltersViewModel *_viewModel;
}

@property(retain, nonatomic) SPTFeedFiltersViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewBottomContraint; // @synthesize collectionViewBottomContraint=_collectionViewBottomContraint;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTFeedFiltersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)visibleCellsForDeviceType:(long long)arg1;
- (void)dismissFiltersViewController:(CDUnknownBlockType)arg1;
- (void)animateCollectionViewItems:(_Bool)arg1;
- (void)animateCollectionView;
- (void)updateViewConstraints;
- (void)addViewConstraints;
- (void)setupDefaultFilterSelection;
- (void)setupBackgroundBlur;
- (void)setupCollectionView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

