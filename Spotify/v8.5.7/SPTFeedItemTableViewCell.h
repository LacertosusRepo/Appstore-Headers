//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, SPTFeedItemCreatorView, SPTFeedItemEntityView, SPTFeedSeeMoreView, UIView;

@interface SPTFeedItemTableViewCell : UITableViewCell
{
    SPTFeedItemCreatorView *_creatorView;
    SPTFeedItemEntityView *_entityView;
    SPTFeedSeeMoreView *_seeMoreView;
    double _seeMoreViewHeight;
    NSArray *_layoutConstraints;
    UIView *_unplayedBadgeView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_seeMoreViewHeightConstraint;
    NSLayoutConstraint *_colorDecorationViewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *colorDecorationViewBottomConstraint; // @synthesize colorDecorationViewBottomConstraint=_colorDecorationViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *seeMoreViewHeightConstraint; // @synthesize seeMoreViewHeightConstraint=_seeMoreViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) UIView *unplayedBadgeView; // @synthesize unplayedBadgeView=_unplayedBadgeView;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(nonatomic) double seeMoreViewHeight; // @synthesize seeMoreViewHeight=_seeMoreViewHeight;
@property(retain, nonatomic) SPTFeedSeeMoreView *seeMoreView; // @synthesize seeMoreView=_seeMoreView;
@property(retain, nonatomic) SPTFeedItemEntityView *entityView; // @synthesize entityView=_entityView;
@property(retain, nonatomic) SPTFeedItemCreatorView *creatorView; // @synthesize creatorView=_creatorView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupViews;
@property(nonatomic) _Bool played;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
