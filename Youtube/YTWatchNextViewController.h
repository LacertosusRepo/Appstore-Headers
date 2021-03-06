//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTBaseInnerTubeViewController.h"

@class YTIWatchNextRequest;

@interface YTWatchNextViewController : YTBaseInnerTubeViewController
{
    id <YTLatencyTickLoggerProtocol> _watchLatencyTickLogger;
    YTIWatchNextRequest *_watchNextRequest;
}

@property(retain, nonatomic) YTIWatchNextRequest *watchNextRequest; // @synthesize watchNextRequest=_watchNextRequest;
@property(nonatomic) __weak id <YTLatencyTickLoggerProtocol> watchLatencyTickLogger; // @synthesize watchLatencyTickLogger=_watchLatencyTickLogger;
- (void).cxx_destruct;
- (void)loadWatchNextRequest;
- (void)loadWithError:(id)arg1;
- (void)refreshWatchNextIfNecessary;
- (void)refreshWatchNextWithNewWatchBreakSetting:(id)arg1;
- (void)updateRequestNavigationList;
- (void)loadWithResponse:(id)arg1;
- (void)loadWithWatchTransition:(id)arg1 autonavSettingsState:(int)arg2 endpointDecorator:(id)arg3 forceAdParameters:(id)arg4 sharingServiceIds:(id)arg5 watchBreakSetting:(id)arg6;

@end

