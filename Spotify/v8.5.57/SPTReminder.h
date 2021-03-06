//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTReminderHandler-Protocol.h"

@class NSArray, NSString;
@protocol SPTAlertInterface, SPTLinkDispatcher;

@interface SPTReminder : NSObject <SPTReminderHandler>
{
    id <SPTAlertInterface> _alertInterface;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSArray *_actions;
}

@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
- (void).cxx_destruct;
- (void)handleNotificationsResponse:(id)arg1;
- (void)presentReminderDialogWithText:(id)arg1 url:(id)arg2;
- (void)presentReminderDialog;
- (void)requestPermission;
- (void)setReminderWithDate:(id)arg1 text:(id)arg2 url:(id)arg3;
- (void)configureAlertActionsWithText:(id)arg1 url:(id)arg2;
- (void)configureNotificationActions;
- (id)initWithAlertInterface:(id)arg1 linkDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

