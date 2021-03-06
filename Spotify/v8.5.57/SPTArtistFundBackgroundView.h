//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, SPTArtistFundViewStyle, UIImage;
@protocol GLUETheme;

@interface SPTArtistFundBackgroundView : UIView
{
    id <GLUETheme> _theme;
    SPTArtistFundViewStyle *_style;
    GLUEImageView *_backgroundImageView;
}

@property(readonly, nonatomic) GLUEImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) SPTArtistFundViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image;
- (id)createBackgroundView;
- (void)setupSubviews;
- (id)initWithTheme:(id)arg1;

@end

