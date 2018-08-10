//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"

@class NSLayoutConstraint, NSString, SPTTasteCollectionHeartIcon, SPTTasteCollectionMediaItem, SPTTheme, UIImageView, UILabel, UIView;

@interface SPTTasteCollectionItemViewCell : UICollectionViewCell <SPTCellImageLoadingContextCompatibleCell>
{
    SPTTasteCollectionMediaItem *_mediaItem;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIView *_selectionOverlay;
    SPTTasteCollectionHeartIcon *_selectionIcon;
    long long _textAlignment;
    SPTTheme *_theme;
    NSLayoutConstraint *_titleHorizontalViewConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *titleHorizontalViewConstraint; // @synthesize titleHorizontalViewConstraint=_titleHorizontalViewConstraint;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) SPTTasteCollectionHeartIcon *selectionIcon; // @synthesize selectionIcon=_selectionIcon;
@property(retain, nonatomic) UIView *selectionOverlay; // @synthesize selectionOverlay=_selectionOverlay;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTTasteCollectionMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setupConstraints;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)updateSelection;
- (void)prepareForReuse;
- (void)updatePreferredMaxLayoutWidth;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

