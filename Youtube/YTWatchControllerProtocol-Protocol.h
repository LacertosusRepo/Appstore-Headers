//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTExpectedPlayerLayout, YTWatchTransition;

@protocol YTWatchControllerProtocol <NSObject>
- (void)destroyWatchNextViewController;
- (_Bool)shouldReloadVideoForWatchTransition:(YTWatchTransition *)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
- (void)reloadWatchNextIfNecessary;
- (void)reloadStartPlayback:(_Bool)arg1;
- (void)reload;
- (void)setWatchTransition:(YTWatchTransition *)arg1 startPlayback:(_Bool)arg2;
- (void)setWatchTransition:(YTWatchTransition *)arg1;
- (void)prepareForWatchTransition:(YTWatchTransition *)arg1 expectedLayout:(YTExpectedPlayerLayout *)arg2;
- (void)clearNavEndpoint;
@end

