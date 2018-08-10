//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTCeramicCollectionViewCellProtocol.h"
#import "SPTThemableView.h"

@class GLUEEntityCardCollectionViewCell, NSString, SPTActionButton, SPTTheme, UILabel, UIView;

@interface SPTCeramicSingleFeaturedCollectionViewCell : UICollectionViewCell <SPTThemableView, SPTCeramicCollectionViewCellProtocol, SPTCellImageLoadingContextCompatibleCell>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTTheme *_theme;
    GLUEEntityCardCollectionViewCell *_collectionViewCell;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    UILabel *_metadataLabel;
}

@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GLUEEntityCardCollectionViewCell *collectionViewCell; // @synthesize collectionViewCell=_collectionViewCell;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *touchPreviewView;
- (void)populateWithCeramicItem:(id)arg1 order:(struct SPTCeramicItemOrder)arg2;
@property(readonly, nonatomic) unsigned long long cellType;
@property(readonly, nonatomic) struct CGSize imageViewSize;
- (void)applyThemeLayout;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)setupMetadataLabel;
- (void)setupDescriptionLabel;
- (void)setupSubtitleLabel;
- (void)setupTitleLabel;
- (void)setupImageView;
- (void)setupView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIView *accessoryView;
@property(readonly, nonatomic) SPTActionButton *actionButton;
@property(readonly, nonatomic) struct CGSize backgroundImageViewSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *prefixView;
@property(readonly) Class superclass;

@end

