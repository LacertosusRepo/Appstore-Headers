//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class NSString, NSURL;
@protocol SPTLinkDispatcher;

@interface SPTGoToURLAction : SPAction
{
    NSURL *_url;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSString *_actionTitle;
    NSString *_actionLogEventName;
}

@property(readonly, copy, nonatomic) NSString *actionLogEventName; // @synthesize actionLogEventName=_actionLogEventName;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithURL:(id)arg1 linkDispatcher:(id)arg2 title:(id)arg3 logEventName:(id)arg4 logContext:(id)arg5;

@end

