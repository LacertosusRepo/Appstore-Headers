//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;
@protocol SPTHomeUICarouselLayoutDelegate;

@interface SPTHomeUICarouselLayout : UICollectionViewLayout
{
    id <SPTHomeUICarouselLayoutDelegate> _delegate;
    NSArray *_layoutAttributes;
    double _maxY;
}

+ (struct CGSize)collectionViewContentSizeForItemSizes:(id)arg1 spacing:(double)arg2 leadingSpace:(double)arg3 trailingSpace:(double)arg4;
@property(nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) __weak id <SPTHomeUICarouselLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (long long)developmentLayoutDirection;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)invalidateLayout;
- (double)layoutTrailingSpace;
- (double)layoutLeadingSpace;

@end

