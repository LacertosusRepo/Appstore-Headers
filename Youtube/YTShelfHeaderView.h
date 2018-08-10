//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class NSArray, NSMutableArray, NSString, UITapGestureRecognizer, YTIAThumbnailDetails, YTImageView, YTLabel, YTQTMButton;

@interface YTShelfHeaderView : UIView <GA11YMixinEmbedder, YTReusableView, YTThumbnailMapping>
{
    YTLabel *_titleLabel;
    YTLabel *_subtitleLabel;
    YTImageView *_thumbnailImageView;
    YTImageView *_iconImageView;
    YTQTMButton *_overflowButton;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_badgeViews;
    NSMutableArray *_viewsSuitableForRTL;
    NSString *_title;
    NSString *_subtitle;
    NSString *_titleAnnotation;
    id <GA11YMixinImpl> _accessibilityMixin;
    NSArray *_textBadges;
    YTIAThumbnailDetails *_thumbnail;
}

+ (double)preferredHeightForTitle:(id)arg1 subtitle:(id)arg2 titleAnnotation:(id)arg3 thumbnail:(id)arg4 hasOverflowButton:(_Bool)arg5 width:(double)arg6 hasBadges:(_Bool)arg7;
@property(retain, nonatomic) YTIAThumbnailDetails *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSArray *textBadges; // @synthesize textBadges=_textBadges;
- (void).cxx_destruct;
- (void)layoutRemainingBadgeViews;
- (void)layoutSubviews;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)prepareForRTL;
- (void)removeTapTargets;
- (void)addTapTarget:(id)arg1 action:(SEL)arg2;
- (void)removeOverflowButtonTargets;
- (void)addOverflowButtonTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic) _Bool hasOverflowButton;
- (void)setIcon:(id)arg1;
- (void)setHasChannelThumbnail:(_Bool)arg1;
- (void)setSubtitle:(id)arg1 titleAnnotation:(id)arg2;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
