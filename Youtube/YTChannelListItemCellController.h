//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTChannelListItemCellDelegate.h"
#import "YTNotificationServiceObserver.h"
#import "YTSubscriptionNotificationOptionsDialogControllerDelegate.h"
#import "YTSubscriptionServiceObserver.h"

@class NSString, YTCommandRouter, YTISubscriptionNotificationOptionsRenderer, YTNotificationOptionsButton, YTSubscriptionNotificationOptionsDialogController;

@interface YTChannelListItemCellController : YTInnerTubeCellController <YTChannelListItemCellDelegate, YTNotificationServiceObserver, YTSubscriptionNotificationOptionsDialogControllerDelegate, YTSubscriptionServiceObserver>
{
    _Bool _hideUnreadIndicator;
    YTCommandRouter *_commandRouter;
    YTSubscriptionNotificationOptionsDialogController *_notificationOptionsController;
    YTISubscriptionNotificationOptionsRenderer *_notificationOptionsRenderer;
    YTNotificationOptionsButton *_notificationOptionsButton;
}

- (void).cxx_destruct;
- (void)hideUnreadIndicator;
- (void)handleActions:(id)arg1 channelID:(id)arg2;
- (void)subscriptionNotificationOptionsDialogController:(id)arg1 didConfirmOption:(id)arg2;
- (void)didPressNotificationOptionsButton;
- (void)setCell:(id)arg1;
- (void)didSelectItem;
- (void)didModifyChannelNotificationPreferenceWithResponse:(id)arg1;
- (void)subscriptionRemovedWithChannelID:(id)arg1 response:(id)arg2;
- (void)subscriptionAddedWithChannelID:(id)arg1 response:(id)arg2;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

