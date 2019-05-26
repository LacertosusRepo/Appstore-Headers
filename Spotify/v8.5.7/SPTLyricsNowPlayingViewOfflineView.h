//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SPTLyricsNowPlayingViewOfflineView : UIView
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)iconImageViewFrame;
- (struct CGRect)secondaryLabelFrame;
- (struct CGRect)primaryLabelFrame;
- (id)setupIconImage;
- (id)setupSecondaryLabel;
- (id)setupPrimaryLabel;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end
