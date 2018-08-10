//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "YTPageStyling.h"
#import "YTSubscribeSwitchContainer.h"
#import "YTVariableHeightHeaderForwardingTouches.h"

@class NSArray, NSString, YTButton, YTFormattedStringLabel, YTImageView, YTNotificationMultiToggleButton, YTNotificationOptionsButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;

@interface YTFeedChannelFilterHeaderView : UIView <GA11YMixinEmbedder, YTPageStyling, YTVariableHeightHeaderForwardingTouches, YTSubscribeSwitchContainer>
{
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subscribeCountLabel;
    UIView *_subscribeContainerView;
    YTNotificationPreferenceToggleButton *_notificationToggleButton;
    YTNotificationOptionsButton *_notificationOptionsButton;
    YTNotificationMultiToggleButton *_notificationMultiToggleButton;
    YTSubscribeSwitch *_subscribeSwitch;
    id <GA11YMixinImpl> _accessibilityMixin;
    YTButton *_avatarButton;
    YTImageView *_avatarImageView;
}

@property(readonly, nonatomic) YTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) YTButton *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton; // @synthesize notificationMultiToggleButton=_notificationMultiToggleButton;
@property(readonly, nonatomic) YTNotificationOptionsButton *notificationOptionsButton; // @synthesize notificationOptionsButton=_notificationOptionsButton;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton; // @synthesize notificationToggleButton=_notificationToggleButton;
- (void).cxx_destruct;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) NSArray *touchForwardingViews;
- (void)setSubscribeCount:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)reset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)avatarSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
