//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SPTFeedCollectionView, SPTLayoutConstraintBuilder, UIImageView, UILabel, UIView;

@interface SPTFeedCarouselTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIImageView *_backgroundImageView;
    SPTFeedCollectionView *_collectionView;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_backgroundContainerView;
    UIView *_darkOverlayView;
}

@property(retain, nonatomic) UIView *darkOverlayView; // @synthesize darkOverlayView=_darkOverlayView;
@property(retain, nonatomic) UIView *backgroundContainerView; // @synthesize backgroundContainerView=_backgroundContainerView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTFeedCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

