//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSMutableDictionary;

@interface SPTFriendsHomeFacepileCollectionViewFlowLayout : UICollectionViewLayout
{
    _Bool _centered;
    NSMutableDictionary *_layoutAttributes;
    struct CGSize _itemSize;
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) NSMutableDictionary *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(readonly, nonatomic, getter=isCentered) _Bool centered; // @synthesize centered=_centered;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
- (void).cxx_destruct;
- (id)keyWithIndexPath:(id)arg1;
- (void)configureLayoutAttributes:(id)arg1;
- (struct CGSize)calculatedContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayout;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)initWithCentering:(_Bool)arg1;

@end
