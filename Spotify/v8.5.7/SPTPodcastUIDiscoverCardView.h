//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUELabel, SPTPodcastUIDiscoverCardStyle, SPTPodcastUIRoundedImageView;

@interface SPTPodcastUIDiscoverCardView : UIView
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    SPTPodcastUIRoundedImageView *_imageView;
    SPTPodcastUIDiscoverCardStyle *_style;
}

@property(retain, nonatomic) SPTPodcastUIDiscoverCardStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) SPTPodcastUIRoundedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)applyStyle;
- (void)setUpLabels;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

@end

