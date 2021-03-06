//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTGridBaseView.h"

#import "GA11YMixinEmbedder.h"

@class NSString, YTFormattedStringLabel, YTIGridChannelRenderer, YTImageView, YTLabel, YTNotificationMultiToggleButton, YTSubscribeSwitch;

@interface YTGridChannelView : YTGridBaseView <GA11YMixinEmbedder>
{
    YTImageView *_thumbnailView;
    YTIGridChannelRenderer *_entry;
    YTLabel *_separatorLabel;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTSubscribeSwitch *_subscribeSwitch;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_videoCountLabel;
    YTFormattedStringLabel *_subscriberCountLabel;
}

+ (double)cellHeightWithSubscribeButtonWithWidth:(double)arg1;
+ (double)preferredHeightForWidth:(double)arg1 entry:(id)arg2;
@property(retain, nonatomic) YTFormattedStringLabel *subscriberCountLabel; // @synthesize subscriberCountLabel=_subscriberCountLabel;
@property(retain, nonatomic) YTFormattedStringLabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton; // @synthesize notificationMultiToggleButton=_notificationMultiToggleButton;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
- (void).cxx_destruct;
- (struct CGSize)sizeForSeparator:(id)arg1;
- (id)createSeparator;
- (id)thumbnailMappings;
- (id)fromWatchTransitionImageView;
- (void)prepareForReuse;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
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
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews_withSubscribeButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)subscribePaddingY;
- (double)textPaddingY;
- (double)textPaddingX;
- (double)standardCellPaddingY;
- (double)textAvatarPaddingX;
- (double)standardCellPaddingX;
- (double)thumbnailSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

