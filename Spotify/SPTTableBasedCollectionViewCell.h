//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "SPTCellImageLoadingContextCompatibleCell.h"
#import "SPTCeramicCollectionViewCellProtocol.h"
#import "SPTCeramicCollectionViewFooter.h"
#import "SPTThemableView.h"

@class NSString, SPTActionButton, UIImage, UIImageView, UILabel, UIView;

@interface SPTTableBasedCollectionViewCell : UICollectionViewCell <SPTCeramicCollectionViewFooter, SPTCeramicCollectionViewCellProtocol, SPTThemableView, SPTCellImageLoadingContextCompatibleCell>
{
    _Bool _shouldHaveTransparentBackground;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UIView *_prefixView;
    long long _accessoryType;
    long long _imageType;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UILabel *_badgeTextLabel;
    UIImageView *_accessoryView;
}

@property(readonly, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UILabel *badgeTextLabel; // @synthesize badgeTextLabel=_badgeTextLabel;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool shouldHaveTransparentBackground; // @synthesize shouldHaveTransparentBackground=_shouldHaveTransparentBackground;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) UIView *prefixView; // @synthesize prefixView=_prefixView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)updateSelectionState;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(copy, nonatomic) NSString *badgeTitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareFooterViewForUseInBlockWithRenderType:(long long)arg1;
@property(nonatomic) _Bool showDisclosureIndicator;
@property(nonatomic) unsigned long long footerIndex;
- (void)populateWithCeramicItem:(id)arg1 order:(struct SPTCeramicItemOrder)arg2;
@property(readonly, nonatomic) struct CGSize imageViewSize;
@property(readonly, nonatomic) unsigned long long cellType;

// Remaining properties
@property(readonly, nonatomic) SPTActionButton *actionButton;
@property(readonly, nonatomic) struct CGSize backgroundImageViewSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *touchPreviewView;

@end
