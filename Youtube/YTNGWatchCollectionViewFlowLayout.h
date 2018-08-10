//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

#import "YTNGWatchCollectionViewLayout.h"

@class NSString;

@interface YTNGWatchCollectionViewFlowLayout : UICollectionViewLayout <YTNGWatchCollectionViewLayout>
{
    long long _numberOfCellsInsertedBeforeCurrentIndex;
    long long _finalIndexAfterMoveOfCurrentIndex;
    id <YTNGWatchCollectionViewLayoutDataSource> _dataSource;
}

@property(nonatomic) __weak id <YTNGWatchCollectionViewLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)connectionBarLayoutAttributes;
- (double)collectionViewTopMargin_compact;
- (double)collectionViewTopMargin_regular;
- (double)collectionViewTopMargin;
- (double)collectionViewSideMargin_compact;
- (double)collectionViewSideMargin_regular;
- (double)collectionViewSideMargin;
- (double)cellWidthWithGutter;
- (double)gutterSize_compact;
- (double)gutterSize_regular;
- (double)gutterSize;
- (double)velocityOffsetForVelocity:(struct CGPoint)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGRect)cellRectForIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

