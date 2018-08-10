//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"
#import "YTSubscribeSwitchContainer.h"
#import "YTThumbnailMapping.h"

@class GA11YElement, NSString, YTBadgesView, YTFormattedStringLabel, YTIChannelRenderer, YTImageView, YTLabel, YTNotificationMultiToggleButton, YTNotificationOptionsButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;

@interface YTChannelCell : YTCollectionViewCell <YTThumbnailMapping, YTSubscribeSwitchContainer, YTCollectionViewCellProtocol>
{
    YTIChannelRenderer *_entry;
    YTImageView *_thumbnailImageView;
    YTBadgesView *_badgesView;
    YTSubscribeSwitch *_subscribeSwitch;
    YTLabel *_separatorLabel;
    GA11YElement *_a11yElement;
    id <YTResponder> _parentResponder;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
    id <YTChannelCellDelegate> _delegate;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_videoCountLabel;
    YTFormattedStringLabel *_subscriberCountLabel;
}

+ (double)cellHeightWithWidth:(double)arg1 includeSubscribeButton:(_Bool)arg2 includeBadgesView:(_Bool)arg3;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTFormattedStringLabel *subscriberCountLabel; // @synthesize subscriberCountLabel=_subscriberCountLabel;
@property(retain, nonatomic) YTFormattedStringLabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <YTChannelCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton; // @synthesize notificationMultiToggleButton=_notificationMultiToggleButton;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTNotificationOptionsButton *notificationOptionsButton;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
- (struct CGSize)sizeForSeparator:(id)arg1;
- (id)createSeparator;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (id)thumbnailMappings;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (void)rtlCommonLayoutSubviews;
- (void)layoutMetadataWithWidth:(double)arg1 leftOffset:(double)arg2;
- (void)layoutSubviews_regular;
- (void)layoutSubviews_compact;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)standardCellPaddingY;
- (double)textAvatarPaddingX;
- (double)standardCellPaddingX;
- (double)thumbnailSize;
- (double)badgeYPadding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

