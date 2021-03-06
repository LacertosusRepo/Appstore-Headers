//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, GLUELabel, SPTTheme, UIButton, UITextView;
@protocol GLUEImageLoader;

@interface SPTAdsMarqueeContentView : UIView
{
    UIButton *_actionButton;
    UITextView *_informationTextView;
    SPTTheme *_theme;
    UIView *_headerContainerView;
    GLUELabel *_headerTitle;
    GLUELabel *_artistTitleLabel;
    GLUEImageView *_albumImageView;
    GLUELabel *_albumTitleLabel;
    id <GLUEImageLoader> _glueImageLoader;
}

@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) GLUELabel *albumTitleLabel; // @synthesize albumTitleLabel=_albumTitleLabel;
@property(readonly, nonatomic) GLUEImageView *albumImageView; // @synthesize albumImageView=_albumImageView;
@property(readonly, nonatomic) GLUELabel *artistTitleLabel; // @synthesize artistTitleLabel=_artistTitleLabel;
@property(readonly, nonatomic) GLUELabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UITextView *informationTextView; // @synthesize informationTextView=_informationTextView;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)updateAlbumImageURL:(id)arg1;
- (void)updateAlbumTitle:(id)arg1;
- (void)updateArtistTitle:(id)arg1;
- (void)updateInformationTextViewText:(id)arg1;
- (void)updateMarqueeWithArtistTitle:(id)arg1 albumTitle:(id)arg2 albumImageURL:(id)arg3 promotedText:(id)arg4;
- (void)addConstraints;
- (id)initWithTheme:(id)arg1 glueImageLoader:(id)arg2;

@end

