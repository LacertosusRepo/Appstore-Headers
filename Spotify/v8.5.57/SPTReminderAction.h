//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSString, NSURL, SPTReminder;

@interface SPTReminderAction : SPAction
{
    SPTReminder *_reminder;
    NSString *_text;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) SPTReminder *reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithReminder:(id)arg1 text:(id)arg2 url:(id)arg3;

@end
