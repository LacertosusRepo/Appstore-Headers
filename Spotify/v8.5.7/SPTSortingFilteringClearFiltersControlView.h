//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTSortingFilteringClearFiltersControl-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTSortingFilteringClearFilterCollectionViewCell, UICollectionView, UICollectionViewFlowLayout;
@protocol SPTSortingFilteringClearFiltersControlDelegate, SPTSortingFilteringClearFiltersControlStyle;

@interface SPTSortingFilteringClearFiltersControlView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SPTSortingFilteringClearFiltersControl>
{
    id <SPTSortingFilteringClearFiltersControlDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_items;
    id <SPTSortingFilteringClearFiltersControlStyle> _style;
    UICollectionViewFlowLayout *_collectionLayout;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    SPTSortingFilteringClearFilterCollectionViewCell *_calculationCell;
}

@property(retain, nonatomic) SPTSortingFilteringClearFilterCollectionViewCell *calculationCell; // @synthesize calculationCell=_calculationCell;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) id <SPTSortingFilteringClearFiltersControlStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SPTSortingFilteringClearFiltersControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupCollectionView;
- (void)glue_applyStyle:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)invalidateAndReload;
- (void)removeAllFilters;
- (void)insertFilters:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfFilters;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

