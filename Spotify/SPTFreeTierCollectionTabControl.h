//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTFreeTierCollectionTabControlDelegateFlowLayout.h"
#import "SPTFreeTierCollectionTabControlProtocol.h"
#import "UICollectionViewDataSource.h"

@class NSArray, NSLayoutConstraint, NSString, SPTFreeTierCollectionGLUETheme, SPTFreeTierCollectionTabControlCollectionViewCell, UICollectionView;

@interface SPTFreeTierCollectionTabControl : UIView <SPTFreeTierCollectionTabControlDelegateFlowLayout, UICollectionViewDataSource, SPTFreeTierCollectionTabControlProtocol>
{
    unsigned long long _selectedSegmentIndex;
    id <SPTFreeTierCollectionTabControlDelegate> _delegate;
    UICollectionView *_collectionView;
    NSArray *_items;
    SPTFreeTierCollectionGLUETheme *_theme;
    UIView *_selectionIndicator;
    NSLayoutConstraint *_topEdgeConstraint;
    NSLayoutConstraint *_selectionIndicatorWidthConstraint;
    NSLayoutConstraint *_selectionIndicatorLeftConstraint;
    SPTFreeTierCollectionTabControlCollectionViewCell *_calculationCell;
    double _estimatedCollectionViewWidth;
    double _estimatedMaxCollectionViewCellWidth;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) double estimatedMaxCollectionViewCellWidth; // @synthesize estimatedMaxCollectionViewCellWidth=_estimatedMaxCollectionViewCellWidth;
@property(nonatomic) double estimatedCollectionViewWidth; // @synthesize estimatedCollectionViewWidth=_estimatedCollectionViewWidth;
@property(retain, nonatomic) SPTFreeTierCollectionTabControlCollectionViewCell *calculationCell; // @synthesize calculationCell=_calculationCell;
@property(retain, nonatomic) NSLayoutConstraint *selectionIndicatorLeftConstraint; // @synthesize selectionIndicatorLeftConstraint=_selectionIndicatorLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *selectionIndicatorWidthConstraint; // @synthesize selectionIndicatorWidthConstraint=_selectionIndicatorWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topEdgeConstraint; // @synthesize topEdgeConstraint=_topEdgeConstraint;
@property(retain, nonatomic) UIView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(retain, nonatomic) SPTFreeTierCollectionGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SPTFreeTierCollectionTabControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 layoutDidUpdateLayoutParameters:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)useRTLCompabilityMode;
- (void)updateSelectedIndicatorWithFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)invalidateAndReload;
- (void)insertSegments:(id)arg1;
- (void)transitionTab:(double)arg1 scrollDirection:(unsigned long long)arg2;
- (void)removeAllSegments;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (void)calculateAdjustToFit;
- (void)setupCellCalculator;
- (void)setupConstraints;
- (void)setupSelectionIndicator;
- (void)setupCollectionView;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

