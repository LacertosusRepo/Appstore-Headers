//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "YTPageStyling.h"
#import "YTSubscribeSwitchContainer.h"
#import "YTThumbnailMapping.h"
#import "YTVariableHeightHeaderForwardingTouches.h"

@class NSArray, NSString, UIImage, UIImageView, YTBadgesView, YTFormattedStringLabel, YTIInteractiveTabbedHeaderRenderer, YTImageView, YTNotificationMultiToggleButton, YTNotificationOptionsButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;

@interface YTInteractiveTabbedHeaderView : UIView <GA11YMixinEmbedder, YTVariableHeightHeaderForwardingTouches, YTPageStyling, YTSubscribeSwitchContainer, YTThumbnailMapping>
{
    YTImageView *_bannerImageView;
    UIImage *_maskImage;
    UIImageView *_maskImageView;
    YTImageView *_keyArtImageView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_attributionLabel;
    YTFormattedStringLabel *_descriptionLabel;
    YTFormattedStringLabel *_metadataLabel;
    YTBadgesView *_badgesView;
    YTFormattedStringLabel *_subscriberCountLabel;
    YTSubscribeSwitch *_subscribeSwitch;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTIInteractiveTabbedHeaderRenderer *_renderer;
}

+ (id)bannerMaskImage;
@property(retain, nonatomic) YTIInteractiveTabbedHeaderRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
- (void).cxx_destruct;
- (id)compactWidthBannerMaskImage;
- (void)updateTitleTypeKind;
- (_Bool)isCondensedLayout;
- (double)bannerMaxHeightForWidth:(double)arg1;
@property(readonly, nonatomic) NSArray *touchForwardingViews;
- (id)thumbnailMappings;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton;
@property(readonly, nonatomic) YTNotificationOptionsButton *notificationOptionsButton;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

