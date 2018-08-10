//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, SPTFeedCollectionView, SPTLayoutConstraintBuilder, UIButton, UIImageView, UILabel, UIView;

@interface SPTFeedMultiTrackTableViewCell : UITableViewCell
{
    SPTFeedCollectionView *_collectionView;
    UIImageView *_backgroundImageView;
    UIImageView *_profileImageView;
    UIImageView *_entityImageView;
    UILabel *_titleLabel;
    UILabel *_entityTitleLabel;
    UILabel *_entitySubtitleLabel;
    UILabel *_timestampLabel;
    UIButton *_profileButton;
    UIButton *_coverButton;
    UIButton *_playButton;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_overlayView;
    UIView *_darkOverlayView;
    UIView *_trackLabelsContainerView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UIView *trackLabelsContainerView; // @synthesize trackLabelsContainerView=_trackLabelsContainerView;
@property(retain, nonatomic) UIView *darkOverlayView; // @synthesize darkOverlayView=_darkOverlayView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(retain, nonatomic) UIButton *profileButton; // @synthesize profileButton=_profileButton;
@property(retain, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(retain, nonatomic) UILabel *entitySubtitleLabel; // @synthesize entitySubtitleLabel=_entitySubtitleLabel;
@property(retain, nonatomic) UILabel *entityTitleLabel; // @synthesize entityTitleLabel=_entityTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *entityImageView; // @synthesize entityImageView=_entityImageView;
@property(retain, nonatomic) UIImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) SPTFeedCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupTrackLabelsContainerView;
- (void)setupPlayButton;
- (void)setupViews;
- (void)didMoveToSuperview;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
