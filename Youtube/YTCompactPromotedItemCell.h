//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "GA11YMixinEmbedder.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTPageStyling.h"
#import "YTThumbnailMapping.h"

@class NSString, YTFormattedStringLabel, YTICompactPromotedItemRenderer, YTImageView, YTQTMButton;

@interface YTCompactPromotedItemCell : YTCollectionViewCell <GA11YMixinEmbedder, YTCollectionViewCellProtocol, YTPageStyling, YTThumbnailMapping>
{
    YTICompactPromotedItemRenderer *_entry;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTImageView *_iconImageView;
    YTQTMButton *_actionButton;
    YTQTMButton *_dismissButton;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)removeButtonTargets;
- (double)thumbnailHeight;
- (double)maxTitleWidth;
- (double)maxTitleWidthForWidth:(double)arg1;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addDismissButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)addActionButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)paddingDismissButtonX;
- (double)paddingBetweenSubtitleAndButton;
- (double)paddingBetweenTitleAndSubtitle;
- (double)cellPaddingY;
- (double)thumbnailPaddingX;
- (struct CGSize)thumbnailSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

