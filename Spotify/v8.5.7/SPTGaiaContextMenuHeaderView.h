//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SPTTheme, UIImageView, UILabel;

@interface SPTGaiaContextMenuHeaderView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureConstraints;
- (id)initWithTheme:(id)arg1 title:(id)arg2 icon:(long long)arg3;

@end

