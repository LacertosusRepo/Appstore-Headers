//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, UILabel, UIView;

@interface SPTFeedOnboardingHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSArray *_layoutConstraints;
    UIView *_container;
}

@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

