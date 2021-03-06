//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GLUELabel, UIImageView;

@interface SPTPartnerNavigationBannerIntegrationCell : UICollectionViewCell
{
    UIImageView *_imageView;
    GLUELabel *_titleLabel;
}

@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)configureWithIntegration:(id)arg1;
- (void)layoutSubviews;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

