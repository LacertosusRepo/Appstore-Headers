//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTNotificationMultiToggleButton, YTNotificationOptionsButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;

@protocol YTSubscribeSwitchContainer <NSObject>
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton;
@property(readonly, nonatomic) YTNotificationOptionsButton *notificationOptionsButton;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch;
- (void)setNeedsLayout;
@end

